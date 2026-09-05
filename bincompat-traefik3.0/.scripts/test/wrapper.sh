#!/bin/sh

. ./.scripts/test/common.sh

if test $# -ne 1; then
    echo "Unknown arguments." 1>&2
    echo "Usage: $0 <start_command>" 1>&2
    exit 1
fi

# Clean up previous instances.
clean_up

# Start instance.
start_instance 

sleep 5
test_curl_connect 172.44.0.2 8080

# Stop instance.
end_with_success
