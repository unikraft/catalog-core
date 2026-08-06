#!/usr/bin/env bash

set -e

APP="$1"
COMPILER="$2"

if [ -z "$APP" ]; then
  echo "Usage: run-app-test.sh <app-dir> [compiler]" >&2
  exit 1
fi

if [ -n "$COMPILER" ]; then
  export CC="$COMPILER"
  if [ -z "$CXX" ]; then
    case "$COMPILER" in
      *clang*) export CXX="${COMPILER/clang/clang++}" ;;
      *gcc*)   export CXX="${COMPILER/gcc/g++}" ;;
      cc)      export CXX="c++" ;;
      *)
        echo "::warning::Unrecognized compiler '$COMPILER' - no matching CXX could be derived, leaving CXX unset. This app may silently mix toolchains." >&2
        ;;
    esac
  fi
fi

./setup.sh

mkdir -p "$APP/.scripts/test/log"

LOG_SUFFIX="$APP"
if [ -n "$COMPILER" ]; then
  LOG_SUFFIX="${APP}-${COMPILER}"
fi
LOG_FILE="app-output-${LOG_SUFFIX}.log"

# Header + test run go through the same `tee` pipe into the same file.
# (Previously the header was echoed outside the pipe, so it never
# reached the log file -- only the console -- and the summary's
# App/Compiler column came out blank.)
{
  echo "[$APP] CC=${CC:-<default>} CXX=${CXX:-<default>} compiler=${COMPILER:-default}"
  echo ""
  (
    cd "$APP"
    sudo -E env CC="$CC" CXX="$CXX" ./.scripts/test/all.sh
  )
} 2>&1 | tee "$LOG_FILE"

# Also write structured results (CSV) alongside the human log --
# text-scraping the log with awk/grep for reports is fragile (see the
# blank-column bug above); a typed row per result is harder to get wrong.
python3 "$(dirname "$0")/parse-test-log.py" \
  --app "$APP" \
  --compiler "${COMPILER:-default}" \
  --log "$LOG_FILE" \
  --out "results-${LOG_SUFFIX}.csv"
