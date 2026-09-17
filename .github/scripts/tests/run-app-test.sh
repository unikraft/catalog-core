#!/usr/bin/env bash

set -e

APP="$1"
COMPILER="$2"
BRANCH="${3:-${BRANCH:-staging}}"

if [ -z "$APP" ]; then
  echo "Usage: run-app-test.sh <app-dir> [compiler] [branch]" >&2
  exit 1
fi

if [ -n "$COMPILER" ]; then
  case "$COMPILER" in
    clang*)
      export CC="$COMPILER"
      [ -n "${CXX:-}" ] || export CXX="${COMPILER/clang/clang++}"
      ;;
    gcc)
      # Leave CC unset so Unikraft's defconfig selects the target compiler.
      unset CC CXX
      ;;
    *)
      echo "::error::Unsupported compiler '$COMPILER'; expected gcc or clang." >&2
      exit 2
      ;;
  esac
fi

./setup.sh "$BRANCH"

mkdir -p "$APP/.scripts/test/log"

LOG_SUFFIX="$APP"
if [ -n "$COMPILER" ]; then
  LOG_SUFFIX="${APP}-${COMPILER}"
fi
LOG_FILE="app-output-${LOG_SUFFIX}.log"

if [ ! -x "$APP/.scripts/test/all.sh" ]; then
  echo "No executable .scripts/test/all.sh found for $APP" | tee "$LOG_FILE"
  printf 'app,compiler,platform,arch,phase,status\n%s,%s,n/a,n/a,setup,FAILED\n' \
    "$APP" "${COMPILER:-default}" > "results-${LOG_SUFFIX}.csv"
  exit 1
fi

# Header + test run go through the same `tee` pipe into the same file.
# (Previously the header was echoed outside the pipe, so it never
# reached the log file -- only the console -- and the summary's
# App/Compiler column came out blank.)
{
  echo "[$APP] CC=${CC:-<default>} CXX=${CXX:-<default>} compiler=${COMPILER:-default}"
  echo ""
  (
    cd "$APP"
    ENV_ARGS=()
    [ -n "${CC:-}" ] && ENV_ARGS+=("CC=$CC")
    [ -n "${CXX:-}" ] && ENV_ARGS+=("CXX=$CXX")
    if [ ${#ENV_ARGS[@]} -gt 0 ]; then
      sudo -E env "${ENV_ARGS[@]}" ./.scripts/test/all.sh
    else
      sudo -E ./.scripts/test/all.sh
    fi
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

if grep -q ',FAILED$' "results-${LOG_SUFFIX}.csv"; then
  exit 1
fi
