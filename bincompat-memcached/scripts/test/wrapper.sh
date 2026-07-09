#!/bin/sh

. ./scripts/test/common.sh

if test $# -ne 1; then
    echo "Unknown arguments." 1>&2
    echo "Usage: $0 <start_command>" 1>&2
    exit 1
fi

# clean up previous instances
clean_up

# start instance and wait for memcached to accept connections
start_instance

waited=0
while ! nc -z -w 1 172.44.0.2 11211 2> /dev/null; do
    waited=$((waited + 1))
    if test "$waited" -ge 30; then
        echo "Timed out waiting for memcached" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
    sleep 1
done

# check that memcached stores and returns a value
test_memcached_set_get 172.44.0.2 11211

# stop instance
end_with_success
