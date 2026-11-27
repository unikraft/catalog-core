#!/bin/sh

. ./scripts/test/common.sh

default_host=localhost
default_port=8080

if test $# -eq 0; then
    host="$default_host"
    port="$default_port"
elif test $# -eq 2; then
    host="$1"
    port="$2"
else
    echo "Unknown arguments." 1>&2
    echo "Usage: $0 [<hostname> <port>]" 1>&2
    exit 1
fi
echo "Using as remote $host:$port" 1>&2

test_curl_connect "$host" "$port"
test_curl_check_reply "$host" "$port" "Hello from Flask on Unikraft!"

echo "PASSED"
