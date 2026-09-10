#!/usr/bin/env bash

set -euo pipefail

TIMEOUT="$1"; MAX_ATTEMPTS="$2"; WAIT="$3"; shift 3
[ "${1:-}" = "--" ] && shift

for attempt in $(seq 1 "$MAX_ATTEMPTS"); do
  echo "::group::Attempt ${attempt}/${MAX_ATTEMPTS}: $*"
  if timeout "$TIMEOUT" "$@"; then
    echo "::endgroup::"
    exit 0
  fi
  status=$?
  echo "::endgroup::"

  if [ "$attempt" -eq "$MAX_ATTEMPTS" ]; then
    echo "::error::Giving up after ${MAX_ATTEMPTS} attempts (last exit ${status})."
    exit "$status"
  fi

  echo "::warning::Attempt ${attempt} failed or hung (exit ${status}) -- retrying in ${WAIT}."
  sleep "$WAIT"
done
