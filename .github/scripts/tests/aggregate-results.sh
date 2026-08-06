#!/usr/bin/env bash

set -e

touch output.log
for f in $(ls app-output-*.log 2>/dev/null | sort); do
  cat "$f" >> output.log
  echo "" >> output.log
done

# Concatenate every leg's results.csv into one, writing the header once.
echo "app,compiler,platform,arch,phase,status" > results.csv
for f in $(ls results-*.csv 2>/dev/null | sort); do
  tail -n +2 "$f" >> results.csv
done

# Tool versions are the same across legs (same base image) -- just take
# the first one found.
first_versions=$(ls tool-versions*.txt 2>/dev/null | head -n1 || true)
if [ -n "$first_versions" ]; then
  cp "$first_versions" tool-versions.txt
fi

if [ ! -s output.log ] && [ "$(wc -l < results.csv)" -le 1 ]; then
  echo "::error::No per-app logs or results found to aggregate -- did every matrix job fail before producing output?"
  echo "result=failure" >> "$GITHUB_OUTPUT"
  echo "result_upper=FAILURE" >> "$GITHUB_OUTPUT"
  exit 0
fi

if grep -q ',FAILED$' results.csv; then
  RESULT='failure'
else
  RESULT='success'
fi

echo "result=$RESULT" >> "$GITHUB_OUTPUT"
echo "result_upper=$(echo "$RESULT" | tr 'a-z' 'A-Z')" >> "$GITHUB_OUTPUT"
