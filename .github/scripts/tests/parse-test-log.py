#!/usr/bin/env python3


"""
Turns one app's raw .scripts/test/all.sh output into structured CSV rows.

Each line is parsed independently into a typed record -- no state carried
across lines -- which is what the old awk version got wrong (an `app`
variable set once from a `[app]` header, silently reused for every later
PASSED/FAILED line). Stdlib only, so it's free to run in the CI image.

Input line format (same across every app's .scripts/test/all.sh):
    build.qemu.x86_64                             ... PASSED
        run.qemu.x86_64                           ... PASSED
    build.xen.arm64                               ... FAILED

Usage:
    parse-test-log.py --app APP --compiler COMPILER --log LOG_FILE --out OUT_CSV
"""

import argparse
import csv
import re
import sys

LINE_RE = re.compile(
    r"^\s*(?P<phase>build|run)\.(?P<platform>[A-Za-z0-9_]+)\.(?P<arch>[A-Za-z0-9_]+)"
    r"\s*\.\.\.\s*(?P<status>PASSED|FAILED)\s*$"
)


def parse(app: str, compiler: str, log_path: str):
    rows = []
    try:
        with open(log_path, "r", errors="replace") as f:
            for line in f:
                m = LINE_RE.match(line)
                if not m:
                    continue
                rows.append(
                    {
                        "app": app,
                        "compiler": compiler,
                        "platform": m.group("platform"),
                        "arch": m.group("arch"),
                        "phase": m.group("phase"),
                        "status": m.group("status"),
                    }
                )
    except FileNotFoundError:
        print(f"::warning::{log_path} not found, no results extracted for {app}/{compiler}", file=sys.stderr)
    return rows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--app", required=True)
    ap.add_argument("--compiler", required=True)
    ap.add_argument("--log", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    rows = parse(args.app, args.compiler, args.log)

    with open(args.out, "w", newline="") as f:
        writer = csv.DictWriter(
            f,
            fieldnames=["app", "compiler", "platform", "arch", "phase", "status"],
            lineterminator="\n",
        )
        writer.writeheader()
        writer.writerows(rows)

    if not rows:
        print(f"::warning::No build/run result lines matched in {args.log} for {args.app}/{args.compiler} -- check the log format hasn't changed.", file=sys.stderr)

    print(f"Wrote {len(rows)} result row(s) to {args.out}")


if __name__ == "__main__":
    main()
