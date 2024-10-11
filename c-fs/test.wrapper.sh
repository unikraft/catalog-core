#!/bin/sh

. ./test.common.sh

if test $# -ne 1; then
    echo "Unknown arguments." 1>&2
    echo "Usage: $0 <start_command>" 1>&2
    exit 1
fi

# Clean up previous instances.
clean_up

# Start instance.
start_instance 2>&1 | grep "Hello from Unikraft!" 1>&2
if test $? -ne 0; then
    echo "Wrong message printed." 1>&2
    echo "FAILED"
    clean_up
    exit 1
fi

# Stop instance.
end_with_success
