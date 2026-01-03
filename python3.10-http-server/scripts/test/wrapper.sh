#!/bin/bash

. ./scripts/test/common.sh

default_host=127.0.0.1
default_port=8080

if test $# -eq 1; then
    host="$default_host"
    port="$default_port"
elif test $# -eq 3; then
    host="$2"
    port="$3"
else
    echo "Usage: $0 <start_command> [<hostname> <port>]" 1>&2
    exit 1
fi

echo "Using as remote $host:$port" 1>&2

clean_up
start_instance
sleep 10

./scripts/test/single.sh "$host" "$port"
if test $? -ne 0; then
    echo "Test failed for $host:$port" 1>&2
    clean_up
    exit 1
fi

end_with_success
