#!/bin/bash

. ./scripts/test/common.sh

default_host=127.0.0.1
default_port=8080

if test $# -eq 0; then
    host="$default_host"
    port="$default_port"
elif test $# -eq 2; then
    host="$1"
    port="$2"
else
    echo "Usage: $0 [<hostname> <port>]" 1>&2
    exit 1
fi

echo "Using as remote $host:$port" 1>&2

test_curl_connect "$host" "$port"
test_curl_check_reply "$host" "$port" "Directory listing"

end_with_success
