#!/usr/bin/env python3


"""
Renders the GitHub Actions step summary from results.csv (all matrix
legs' parse-test-log.py output, concatenated).

Usage: render-summary.py --csv results.csv --tool-versions tool-versions.txt
Writes markdown to $GITHUB_STEP_SUMMARY, or stdout if unset (local runs).
"""

import argparse
import csv
import os
import sys
from collections import Counter, defaultdict

STATUS_ICON = {"PASSED": "✅", "FAILED": "❌", "N/A": "N/A"}


def summarize(rows):
    grouped = defaultdict(dict)
    for row in rows:
        if row["platform"] == "n/a" and row["arch"] == "n/a":
            continue
        key = (row["arch"], row["platform"], row["app"], row["compiler"])
        grouped[key][row["phase"]] = row["status"]

    summary = []
    for (arch, platform, app, compiler), phases in grouped.items():
        build = phases.get("build", "N/A")
        summary.append({
            "arch": arch,
            "platform": platform,
            "app": app,
            "compiler": compiler,
            "setup": phases.get("setup", "PASSED"),
            "build": build,
            "run": phases.get("run", "N/A") if build == "PASSED" else "FAILED",
        })
    return summary


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--csv", required=True)
    ap.add_argument("--tool-versions", default=None)
    ap.add_argument("--discord-summary", action="store_true")
    ap.add_argument("--result", action="store_true")
    args = ap.parse_args()

    rows = []
    try:
        with open(args.csv, newline="") as f:
            rows = list(csv.DictReader(f))
    except FileNotFoundError:
        pass

    summaries = summarize(rows)
    passed = sum(1 for row in summaries if all(
        row[phase] in ("PASSED", "N/A") for phase in ("setup", "build", "run")
    ))
    failed = len(summaries) - passed
    if args.result:
        print("failure" if not summaries or failed else "success")
        return
    if args.discord_summary:
        print(f"{failed:3d} FAILED")
        print(f"{passed:3d} PASSED")
        return

    out = sys.stdout
    summary_path = os.environ.get("GITHUB_STEP_SUMMARY")
    if summary_path:
        out = open(summary_path, "a")

    with out:
        print("## Unikraft Catalog Core Test Results", file=out)
        import datetime
        print(f"### {datetime.datetime.now(datetime.timezone.utc).strftime('%a %b %-d %H:%M:%S UTC %Y')}", file=out)

        if not rows:
            print("\n_No structured results were found -- every matrix leg may have failed before producing output. Check the raw per-app logs in the archived artifact._\n", file=out)
        else:
            print(f"\n**{passed} passed, {failed} failed** out of {len(summaries)} (arch, platform, app, compiler) configurations.\n", file=out)

            print("| Arch | Platform | App | Compiler | Setup | Build | Run |", file=out)
            print("|------|----------|-----|----------|-------|-------|-----|", file=out)
            for row in sorted(summaries, key=lambda r: (r["app"], r["compiler"], r["platform"], r["arch"])):
                statuses = [STATUS_ICON.get(row[p], row[p]) for p in ("setup", "build", "run")]
                print(f"| {row['arch']} | {row['platform']} | {row['app']} | {row['compiler']} | {' | '.join(statuses)} |", file=out)

            if failed:
                print("\n### Failure statistics", file=out)
                first_failures = []
                for row in summaries:
                    stage = next((phase for phase in ("setup", "build", "run") if row[phase] == "FAILED"), None)
                    if stage:
                        first_failures.append((stage, row))

                print("| First failing stage | Dimension | Value | Configurations |", file=out)
                print("|--------------------|-----------|-------|---------------|", file=out)
                for stage in ("setup", "build", "run"):
                    stage_rows = [row for failure_stage, row in first_failures if failure_stage == stage]
                    for dimension in ("compiler", "platform", "arch", "app"):
                        counts = Counter(row[dimension] for row in stage_rows)
                        for value, count in sorted(counts.items()):
                            print(f"| {stage} | {dimension} | {value} | {count} |", file=out)

        print("\n### Apps without test scripts", file=out)
        missing_scripts = sorted({
            r["app"] for r in rows
            if r["status"] == "FAILED"
            and r["phase"] == "setup"
            and r["platform"] == "n/a"
        })
        if missing_scripts:
            for app in missing_scripts:
                print(f"- `{app}`: missing `.scripts/test/all.sh`", file=out)
        else:
            print("- None", file=out)

        print("\n### System Configuration", file=out)
        if args.tool_versions and os.path.exists(args.tool_versions):
            with open(args.tool_versions) as f:
                for line in f:
                    print(f"- {line.rstrip()}", file=out)
        else:
            print("- (tool versions not captured for this run -- see collect-tool-versions.sh)", file=out)


if __name__ == "__main__":
    main()
