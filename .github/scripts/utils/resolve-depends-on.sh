#!/usr/bin/env bash
#
# Cross-repo dependency resolution: a PR to lib-musl may only make sense
# together with an unmerged PR to lib-libelf. This checks out every repo
# a PR declares a dependency on, so the test suite runs once against the
# composite result instead of `musl@PR / libelf@main`.
#
# Convention, borrowed from Zuul's "Depends-On:" footer (the closest
# thing to a de-facto standard -- see
# https://zuul-ci.org/docs/zuul/reference/gating.html#cross-project-dependencies):
#
#   Depends-On: unikraft/lib-libelf#42
#   Depends-On: #17                (same repo as the triggering PR)
#
# Picked up anywhere in the PR body or commit messages. Resolution is
# recursive (a dependency's own PR body is scanned too), with a
# visited-set to skip repeats/guard cycles, and depth-limited as a backstop.
# This is NOT Zuul's speculative-merge pipeline -- just: resolve the
# graph, check out every node, run the existing suite once.
#
# Usage:
#   resolve-depends-on.sh <owner/repo> <pr_number> <local-repo-map-file>
#
# local-repo-map-file: lines of "owner/repo=local/path" (see repo-map.txt),
# mirroring setup.sh's clone layout, e.g.:
#   unikraft/unikraft=repos/unikraft
#   unikraft/lib-musl=repos/libs/musl
#
# Requires: gh CLI authenticated (GH_TOKEN), git.

set -euo pipefail

ROOT_REPO="$1"
ROOT_PR="$2"
MAP_FILE="$3"
MAX_DEPTH="${4:-5}"

declare -A REPO_PATH
while IFS='=' read -r repo path; do
  [ -z "$repo" ] && continue
  case "$repo" in \#*) continue ;; esac
  REPO_PATH["$repo"]="$path"
done < "$MAP_FILE"

declare -A VISITED   # "owner/repo#pr" -> 1, cycle/dup guard

checkout_pr() {
  local repo="$1" pr="$2"
  local path="${REPO_PATH[$repo]:-}"

  if [ -z "$path" ]; then
    echo "::warning::Depends-On references '$repo' but it has no entry in $MAP_FILE -- skipping checkout (it will still be picked up if it's the trigger repo itself)."
    return
  fi
  if [ ! -d "$path" ]; then
    echo "::warning::Depends-On references '$repo' (mapped to '$path') but that directory does not exist -- was setup.sh run first?"
    return
  fi

  echo "-> Resolving dependency: $repo#$pr into $path"
  (
    cd "$path"
    git fetch -fu "https://github.com/$repo" "refs/pull/$pr/head:depends-on-$pr"
    git checkout "depends-on-$pr"
  )
}

get_pr_body() {
  local repo="$1" pr="$2"
  gh pr view "$pr" --repo "$repo" --json body,commits \
    --jq '[.body, (.commits[].messageBody // "")] | join("\n")' 2>/dev/null || true
}

resolve() {
  local repo="$1" pr="$2" depth="$3"
  local key="$repo#$pr"

  if [ -n "${VISITED[$key]:-}" ]; then
    return
  fi
  VISITED["$key"]=1

  if [ "$depth" -gt "$MAX_DEPTH" ]; then
    echo "::warning::Depends-On chain exceeded max depth ($MAX_DEPTH) at $key -- stopping recursion here. Check for a cycle."
    return
  fi

  local body
  body="$(get_pr_body "$repo" "$pr")"
  [ -z "$body" ] && return

  # Matches "Depends-On: owner/repo#123", "Depends-On: #123" (same repo),
  # and "Depends on #123" (case/hyphen-insensitive plain English).
  while IFS= read -r line; do
    [ -z "$line" ] && continue

    local dep_repo dep_pr
    if [[ "$line" =~ ^([A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+)#([0-9]+)$ ]]; then
      dep_repo="${BASH_REMATCH[1]}"
      dep_pr="${BASH_REMATCH[2]}"
    elif [[ "$line" =~ ^#([0-9]+)$ ]]; then
      dep_repo="$repo"
      dep_pr="${BASH_REMATCH[1]}"
    else
      continue
    fi

    if [ "$dep_repo" = "$repo" ] && [ "$dep_pr" = "$pr" ]; then
      continue  # self-reference guard
    fi

    checkout_pr "$dep_repo" "$dep_pr"
    resolve "$dep_repo" "$dep_pr" "$((depth + 1))"
  done < <(printf '%s\n' "$body" \
      | grep -oiE '(depends-on:|depends on)[[:space:]]*([A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+)?#[0-9]+' \
      | grep -oE '([A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+)?#[0-9]+')
}

resolve "$ROOT_REPO" "$ROOT_PR" 0

if [ "${#VISITED[@]}" -le 1 ]; then
  echo "No Depends-On references found for $ROOT_REPO#$ROOT_PR."
else
  echo "Resolved dependency graph:"
  for k in "${!VISITED[@]}"; do echo "  - $k"; done
fi
