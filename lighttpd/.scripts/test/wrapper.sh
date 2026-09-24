#!/bin/bash
# Start an instance, run a single round of HTTP checks.
# Usage: ./.scripts/test/wrapper.sh <start_command>

. ./.scripts/test/common.sh

if test $# -lt 1; then
    echo "Usage: $0 <start_command>" 1>&2
    exit 1
fi

# Clean up
clean_up

# Start instance (backgrounded via setsid in start_instance).
start_instance

# Wait for readiness, then run the checks
wait_for_http
if HOST="$host" PORT="$port" ./test.sh; then
    end_with_success
else
    echo "FAILED"
    clean_up
    exit 1
fi
