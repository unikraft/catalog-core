#!/bin/sh

. ./scripts/test/common.sh

default_host=172.44.0.2
default_port=6379

if test $# -eq 0; then
    echo "Host and port unspecified." 1>&2
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

# Query non-localhost (NAT networking) instance.
if test ! "$host" = "localhost" -a ! "$host" = "127.0.0.1"; then
    test_ping "$host"
fi

# Connect to the Redis server.
test_redis_connect "$host" "$port"

# Set a key on the Redis server, then check its value.
test_redis_cli "$host" "$port"
