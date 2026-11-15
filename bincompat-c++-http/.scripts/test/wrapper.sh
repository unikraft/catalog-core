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

test_ping 172.44.0.2
test_curl_check_reply 172.44.0.2 8080 "Bye, World!"

# Stop instance.
end_with_success
