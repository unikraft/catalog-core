#!/usr/bin/env python3
"""
Discovers and checks out all PR dependencies declared via "Depends-On:" tags
in PR descriptions and commit messages.

Supported syntax in PR body / commit messages:
  - Depends-On: owner/repo#pr_number
  - Depends-On: #pr_number (same repo as the referencing PR)
  - Depends-On: https://github.com/owner/repo/pull/42
  - Depends on owner/repo#pr_number (case/space-insensitive)
"""

from __future__ import annotations

import argparse
import json
import os
import re
import subprocess
import sys
import urllib.error
import urllib.request
from collections import defaultdict, deque
from dataclasses import dataclass, field
from typing import Dict, List, Optional, Set, Tuple


@dataclass(frozen=True)
class PRRef:
    """Unique identifier for a GitHub Pull Request."""
    repo: str      # Format: 'owner/repo' (normalized to lowercase)
    number: int

    def __str__(self) -> str:
        return f"{self.repo}#{self.number}"


@dataclass
class PRInfo:
    """Fetched metadata for a Pull Request."""
    ref: PRRef
    title: str = ""
    body: str = ""
    commit_messages: List[str] = field(default_factory=list)
    head_ref: str = ""
    base_ref: str = ""


# Regex matching Depends-On declarations in text
DEPENDS_ON_LINE_RE = re.compile(
    r"(?i)\b(?:depends-on|depends\s+on)(?::\s*|\s+)([^\r\n]+)",
    re.MULTILINE
)

# Extractors for PR targets within a Depends-On line
URL_PR_RE = re.compile(
    r"https?://github\.com/([A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+)/pull/(\d+)"
)
REPO_PR_RE = re.compile(
    r"\b([A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+)#(\d+)\b"
)
SHORT_REPO_PR_RE = re.compile(
    r"\b([A-Za-z0-9_.-]+)#(\d+)\b"
)
LOCAL_PR_RE = re.compile(
    r"(?:^|[\s,])#(\d+)\b"
)


def extract_dependencies(text: str, current_repo: str) -> List[PRRef]:
    """
    Parses a string (PR body or commit message) for Depends-On references.
    Returns a list of unique PRRef objects.
    """
    dependencies: List[PRRef] = []
    seen: Set[PRRef] = set()
    owner = current_repo.split("/")[0] if "/" in current_repo else "unikraft"

    for match in DEPENDS_ON_LINE_RE.finditer(text):
        line = match.group(1).strip()

        # 1. Match full URLs: https://github.com/owner/repo/pull/123
        for url_match in URL_PR_RE.finditer(line):
            repo = url_match.group(1).lower()
            num = int(url_match.group(2))
            ref = PRRef(repo=repo, number=num)
            if ref not in seen:
                seen.add(ref)
                dependencies.append(ref)

        # 2. Match owner/repo#123
        for repo_match in REPO_PR_RE.finditer(line):
            repo = repo_match.group(1).lower()
            num = int(repo_match.group(2))
            ref = PRRef(repo=repo, number=num)
            if ref not in seen:
                seen.add(ref)
                dependencies.append(ref)

        cleaned_line = URL_PR_RE.sub("", line)
        cleaned_line = REPO_PR_RE.sub("", cleaned_line)

        # 3. Match short repo#123 without owner prefix (e.g. lib-musl#42)
        for short_match in SHORT_REPO_PR_RE.finditer(cleaned_line):
            repo_name = short_match.group(1).lower()
            num = int(short_match.group(2))
            ref = PRRef(repo=f"{owner}/{repo_name}", number=num)
            if ref not in seen:
                seen.add(ref)
                dependencies.append(ref)

        cleaned_line = SHORT_REPO_PR_RE.sub("", cleaned_line)

        # 4. Match #123 (same repo)
        for local_match in LOCAL_PR_RE.finditer(cleaned_line):
            num = int(local_match.group(1))
            ref = PRRef(repo=current_repo.lower(), number=num)
            if ref not in seen:
                seen.add(ref)
                dependencies.append(ref)

    return dependencies


class GitHubPRFetcher:
    """Fetches PR data via gh CLI when available, with urllib fallback."""

    def __init__(self, token: Optional[str] = None):
        self.token = token or os.environ.get("GH_TOKEN") or os.environ.get("GITHUB_TOKEN")
        self.cache: Dict[PRRef, PRInfo] = {}

    def fetch(self, ref: PRRef) -> Optional[PRInfo]:
        if ref in self.cache:
            return self.cache[ref]

        info = self._fetch_via_gh(ref) or self._fetch_via_api(ref)
        if info:
            self.cache[ref] = info
        return info

    def _fetch_via_gh(self, ref: PRRef) -> Optional[PRInfo]:
        cmd = [
            "gh", "pr", "view", str(ref.number),
            "--repo", ref.repo,
            "--json", "title,body,commits,headRefName,baseRefName"
        ]
        try:
            env = os.environ.copy()
            if self.token:
                env["GH_TOKEN"] = self.token
            proc = subprocess.run(
                cmd,
                capture_output=True,
                text=True,
                check=False,
                env=env,
            )
            if proc.returncode != 0:
                err = proc.stderr.strip() or proc.stdout.strip()
                print(f"::warning::gh pr view failed for {ref}: {err}", file=sys.stderr)
                return None

            data = json.loads(proc.stdout)
            commits = [
                c.get("messageBody", "") or c.get("messageHeadline", "")
                for c in data.get("commits", [])
            ]
            return PRInfo(
                ref=ref,
                title=data.get("title", ""),
                body=data.get("body", "") or "",
                commit_messages=commits,
                head_ref=data.get("headRefName", ""),
                base_ref=data.get("baseRefName", ""),
            )
        except (FileNotFoundError, json.JSONDecodeError) as e:
            print(f"::warning::Error running gh CLI for {ref}: {e}", file=sys.stderr)
            return None

    def _fetch_via_api(self, ref: PRRef) -> Optional[PRInfo]:
        """Fallback to GitHub REST API using urllib."""
        if not self.token:
            return None

        url = f"https://api.github.com/repos/{ref.repo}/pulls/{ref.number}"
        req = urllib.request.Request(
            url,
            headers={
                "Accept": "application/vnd.github+json",
                "Authorization": f"Bearer {self.token}",
                "User-Agent": "catalog-core-ci",
            },
        )
        try:
            with urllib.request.urlopen(req, timeout=15) as resp:
                data = json.loads(resp.read().decode())
                return PRInfo(
                    ref=ref,
                    title=data.get("title", ""),
                    body=data.get("body", "") or "",
                    commit_messages=[],
                    head_ref=data.get("head", {}).get("ref", ""),
                    base_ref=data.get("base", {}).get("ref", ""),
                )
        except Exception as e:
            print(f"::warning::REST API fetch failed for {ref}: {e}", file=sys.stderr)
            return None


class DependencyResolver:
    """Builds and topologically sorts the cross-repo / stacked PR dependency graph."""

    def __init__(self, fetcher: GitHubPRFetcher, max_depth: int = 10):
        self.fetcher = fetcher
        self.max_depth = max_depth
        # graph: node -> list of dependencies (edges from child -> dependency)
        self.adjacency: Dict[PRRef, List[PRRef]] = defaultdict(list)
        self.pr_info: Dict[PRRef, PRInfo] = {}

    def resolve(self, root: PRRef) -> List[PRRef]:
        """Traverses the dependency tree starting from root and returns topological order."""
        visited: Set[PRRef] = set()
        in_stack: Set[PRRef] = set()

        def dfs(current: PRRef, depth: int):
            if current in in_stack:
                print(f"::warning::Cycle detected at {current} -- breaking loop", file=sys.stderr)
                return
            if current in visited:
                return
            if depth > self.max_depth:
                print(f"::warning::Max recursion depth ({self.max_depth}) reached at {current}", file=sys.stderr)
                return

            visited.add(current)
            in_stack.add(current)

            info = self.fetcher.fetch(current)
            if info:
                self.pr_info[current] = info
                combined_text = "\n".join([info.body] + info.commit_messages)
                deps = extract_dependencies(combined_text, current.repo)

                for dep in deps:
                    if dep == current:
                        continue  # Self-reference guard
                    if dep in in_stack:
                        print(f"::warning::Cycle detected from {current} to {dep} -- breaking loop", file=sys.stderr)
                        continue
                    self.adjacency[current].append(dep)
                    dfs(dep, depth + 1)
            else:
                print(f"::warning::Could not fetch PR info for {current} -- cannot resolve its dependencies", file=sys.stderr)

            in_stack.remove(current)

        dfs(root, 0)
        return self._topological_sort(visited)

    def _topological_sort(self, nodes: Set[PRRef]) -> List[PRRef]:
        """
        Returns nodes ordered such that if A depends on B, B appears BEFORE A.
        This ensures base dependencies are checked out/merged before dependent PRs.
        """
        in_degree: Dict[PRRef, int] = {node: 0 for node in nodes}
        # Reverse edges: if A depends on B, edge is B -> A
        dependents: Dict[PRRef, List[PRRef]] = defaultdict(list)

        for src, deps in self.adjacency.items():
            for dep in deps:
                if dep in in_degree:
                    in_degree[src] = in_degree.get(src, 0) + 1
                    dependents[dep].append(src)

        # Queue nodes with in_degree == 0 (no dependencies)
        queue = deque([node for node, deg in in_degree.items() if deg == 0])
        sorted_order: List[PRRef] = []

        while queue:
            node = queue.popleft()
            sorted_order.append(node)

            for dependent in dependents[node]:
                in_degree[dependent] -= 1
                if in_degree[dependent] == 0:
                    queue.append(dependent)

        # If cyclic nodes remain, append them at the end
        for node in nodes:
            if node not in sorted_order:
                sorted_order.append(node)

        return sorted_order


def parse_repo_map(map_path: str) -> Dict[str, str]:
    """Parses repo-map.txt mapping 'owner/repo' -> local path."""
    repo_map: Dict[str, str] = {}
    if not os.path.exists(map_path):
        print(f"::error::Repo map file not found: {map_path}", file=sys.stderr)
        return repo_map

    with open(map_path, "r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            if "=" in line:
                repo, path = line.split("=", 1)
                repo_map[repo.strip().lower()] = path.strip()

    return repo_map


def apply_git_checkouts(
    resolved_prs: List[PRRef],
    repo_map: Dict[str, str],
    dry_run: bool = False
) -> bool:
    """
    Applies Git checkouts and merges for all resolved PRs grouped by repository.
    For same-repo stacked PRs, merges them in topological order.
    """
    # Group resolved PRs by repository while preserving topological order
    prs_by_repo: Dict[str, List[PRRef]] = defaultdict(list)
    for pr in resolved_prs:
        prs_by_repo[pr.repo].append(pr)

    success = True

    for repo, pr_list in prs_by_repo.items():
        local_path = repo_map.get(repo)
        if not local_path:
            print(f"::warning::Repository '{repo}' not found in repo-map.txt -- skipping checkout", file=sys.stderr)
            continue

        if not os.path.isdir(local_path):
            print(f"::warning::Directory '{local_path}' for '{repo}' does not exist -- was setup.sh run?", file=sys.stderr)
            continue

        print(f"\n::group::Configuring repository: {repo} -> {local_path}")
        print(f"Applying PR stack in order: {', '.join(str(p) for p in pr_list)}")

        if dry_run:
            print("[dry-run] Git operations skipped")
            print("::endgroup::")
            continue

        try:
            # Configure git user for potential local merge commits
            subprocess.run(
                ["git", "config", "user.name", "github-actions[bot]"],
                cwd=local_path, check=True
            )
            subprocess.run(
                ["git", "config", "user.email", "github-actions[bot]@users.noreply.github.com"],
                cwd=local_path, check=True
            )

            # Fetch all required PR branches
            for pr in pr_list:
                remote_url = f"https://github.com/{pr.repo}"
                refspec = f"refs/pull/{pr.number}/head:pr-{pr.number}"
                print(f"Fetching {pr} from {remote_url}...")
                subprocess.run(
                    ["git", "fetch", "-fu", remote_url, refspec],
                    cwd=local_path, check=True
                )

            if len(pr_list) == 1:
                # Single PR in this repository
                target_pr = pr_list[0]
                print(f"Checking out {target_pr} branch pr-{target_pr.number}...")
                subprocess.run(
                    ["git", "checkout", f"pr-{target_pr.number}"],
                    cwd=local_path, check=True
                )
            else:
                # Same-repo stacked PRs (e.g. [base_pr, dependent_pr1, dependent_pr2])
                base_pr = pr_list[0]
                composite_branch = "stacked-composite"
                print(f"Starting stacked composite branch '{composite_branch}' from base {base_pr}...")
                subprocess.run(
                    ["git", "checkout", "-B", composite_branch, f"pr-{base_pr.number}"],
                    cwd=local_path, check=True
                )

                for next_pr in pr_list[1:]:
                    pr_branch = f"pr-{next_pr.number}"
                    # Check if next_pr already contains HEAD (linear branch)
                    is_ancestor = subprocess.run(
                        ["git", "merge-base", "--is-ancestor", "HEAD", pr_branch],
                        cwd=local_path, check=False
                    ).returncode == 0

                    if is_ancestor:
                        print(f"Fast-forwarding to {next_pr} ({pr_branch})...")
                        subprocess.run(
                            ["git", "reset", "--hard", pr_branch],
                            cwd=local_path, check=True
                        )
                    else:
                        print(f"Merging {next_pr} ({pr_branch}) into {composite_branch}...")
                        merge_proc = subprocess.run(
                            ["git", "merge", "--no-edit", pr_branch],
                            cwd=local_path, capture_output=True, text=True, check=False
                        )
                        if merge_proc.returncode != 0:
                            print(
                                f"::error::Merge conflict when applying stacked PR {next_pr} onto {composite_branch}:\n"
                                f"{merge_proc.stdout}\n{merge_proc.stderr}",
                                file=sys.stderr
                            )
                            success = False
                            break

            # Print current commit info
            log_proc = subprocess.run(
                ["git", "log", "-n", "1", "--oneline"],
                cwd=local_path, capture_output=True, text=True, check=True
            )
            print(f"Checked out head at: {log_proc.stdout.strip()}")

        except subprocess.CalledProcessError as e:
            print(f"::error::Git operation failed in {local_path}: {e}", file=sys.stderr)
            success = False
        finally:
            print("::endgroup::")

    return success


def print_dependency_tree(root: PRRef, resolver: DependencyResolver, ordered: List[PRRef]):
    """Prints a clear summary of the resolved dependency DAG."""
    print("\n==========================================")
    print(f"  Dependency Resolution Graph for {root}")
    print("==========================================")
    for node in ordered:
        info = resolver.pr_info.get(node)
        title_str = f" - \"{info.title}\"" if info and info.title else ""
        deps = resolver.adjacency.get(node, [])
        deps_str = f" (Depends on: {', '.join(str(d) for d in deps)})" if deps else ""
        print(f"  * {node}{title_str}{deps_str}")
    print("==========================================\n")


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Resolve and check out cross-repo & stacked PR dependencies for Unikraft CI."
    )
    # Support both named flags and positional arguments for backwards compatibility
    parser.add_argument("pos_root_repo", nargs="?", help="Triggering repo (e.g. unikraft/lib-musl)")
    parser.add_argument("pos_root_pr", nargs="?", type=int, help="Triggering PR number")
    parser.add_argument("pos_repo_map", nargs="?", help="Path to repo-map.txt")

    parser.add_argument("--root-repo", help="Triggering repo (e.g. unikraft/lib-musl)")
    parser.add_argument("--root-pr", type=int, help="Triggering PR number")
    parser.add_argument("--repo-map", help="Path to repo-map.txt")
    parser.add_argument("--max-depth", type=int, default=10, help="Max recursion depth for dependencies")
    parser.add_argument("--dry-run", action="store_true", help="Print plan without running git commands")

    args = parser.parse_args()

    root_repo = (args.root_repo or args.pos_root_repo or "").strip().lower()
    root_pr = args.root_pr or args.pos_root_pr
    repo_map_path = (args.repo_map or args.pos_repo_map or ".github/scripts/utils/repo-map.txt").strip()

    if not root_repo or not root_pr:
        print("::error::Both root-repo and root-pr must be specified.", file=sys.stderr)
        parser.print_usage(sys.stderr)
        return 1

    root_ref = PRRef(repo=root_repo, number=root_pr)
    repo_map = parse_repo_map(repo_map_path)
    if not repo_map:
        print(f"::error::No mappings found in {repo_map_path}", file=sys.stderr)
        return 1

    print(f"Starting dependency resolution for {root_ref}...")
    fetcher = GitHubPRFetcher()
    resolver = DependencyResolver(fetcher, max_depth=args.max_depth)

    resolved_order = resolver.resolve(root_ref)
    print_dependency_tree(root_ref, resolver, resolved_order)

    success = apply_git_checkouts(resolved_order, repo_map, dry_run=args.dry_run)
    if not success:
        print("::error::One or more dependency checkout/merge operations failed.", file=sys.stderr)
        return 1

    print(f"Successfully resolved and checked out all dependencies for {root_ref}.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
