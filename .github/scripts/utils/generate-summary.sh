#!/usr/bin/env bash

set -e

python3 "$(dirname "$0")/../tests/render-summary.py" \
  --csv results.csv \
  --tool-versions tool-versions.txt
