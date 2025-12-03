#!/usr/bin/env bash
#
# Unified test runner. Args: $1=mode ("all" or "musl"), $2=compiler (optional, e.g., "clang").
# Runs setup, finds apps based on dependency, executes tests, captures output, sets results.

set -e

MODE="${1:-all}"
COMPILER="$2"

./setup.sh

if [ -n "$COMPILER" ]; then
  export CC="$COMPILER"
fi

if [ "$MODE" = "musl" ]; then
  FILTER='\$(LIBS_BASE)/musl'
elif [ "$MODE" = "lwip" ]; then
  FILTER='\$(LIBS_BASE)/lwip'
elif [ "$MODE" = "libelf" ]; then
  FILTER='\$(LIBS_BASE)/libelf'
elif [ "$MODE" = "elfloader" ]; then
  FILTER='/apps/elfloader'
elif [ "$MODE" = "all" ]; then
  FILTER=''
else
  echo "Invalid mode: $MODE"
  exit 1
fi

apps=$(find . -maxdepth 1 -type d ! -name '.' | while read -r dir; do
  if [ -f "$dir/Makefile" ] && ([ -z "$FILTER" ] || grep -q "$FILTER" "$dir/Makefile"); then
    echo "$(basename "$dir")"
  fi
done)

echo "Testing the following apps (mode: $MODE):"
echo "$apps"

touch output.log

for app in $apps; do
  echo "[$app]" | tee -a output.log
  echo "" | tee -a output.log
  cd "$app"
  sudo -E ./scripts/test/all.sh 2>&1 | tee -a ../output.log
  cd ..
  echo ""
done

if grep -q 'FAILED' output.log; then
  RESULT='failure'
else
  RESULT='success'
fi

echo "result=$RESULT" >> "$GITHUB_OUTPUT"
echo "result_upper=$(echo "$RESULT" | tr 'a-z' 'A-Z')" >> "$GITHUB_OUTPUT"
