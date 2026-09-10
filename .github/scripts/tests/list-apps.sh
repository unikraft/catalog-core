#!/usr/bin/env bash

set -e

MODE="${1:-all}"

case "$MODE" in
  musl)      FILTER='\$(LIBS_BASE)/musl' ;;
  lwip)      FILTER='\$(LIBS_BASE)/lwip' ;;
  libelf)    FILTER='\$(LIBS_BASE)/libelf' ;;
  elfloader) FILTER='/apps/elfloader' ;;
  all)       FILTER='' ;;
  *)
    echo "Invalid mode: $MODE" >&2
    exit 1
    ;;
esac

apps=$(find . -maxdepth 1 -type d ! -name '.' | sort | while read -r dir; do
  if [ -f "$dir/Makefile" ] && ([ -z "$FILTER" ] || grep -q "$FILTER" "$dir/Makefile"); then
    basename "$dir"
  fi
done)

if [ -z "$apps" ]; then
  echo "No apps matched mode '$MODE' -- refusing to emit an empty matrix" >&2
  exit 1
fi

json=$(printf '%s\n' "$apps" | jq -R . | jq -sc .)
echo "$json"

# For local debugging / step summaries.
echo "Apps selected for mode '$MODE':" >&2
printf '  - %s\n' $apps >&2
