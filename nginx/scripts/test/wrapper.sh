#!/bin/sh

. ./scripts/test/common.sh

default_host=172.44.0.2
default_port=80

if test $# -eq 1; then
    echo "Host and port unspecified." 1>&2
    host="$default_host"
    port="$default_port"
elif test $# -eq 3; then
    host="$2"
    port="$3"
else
    echo "Unknown arguments." 1>&2
    echo "Usage: $0 <start_command> [<hostname> <port>]" 1>&2
    exit 1
fi
echo "Using as remote $host:$port" 1>&2

# Clean up previous instances.
clean_up

# Start instance.
start_instance

# Wait for start.
sleep 3

./scripts/test/single.sh
if test $? -ne 0; then
    exit 1
fi

# Stop instance.
end_with_success
