#!/bin/sh

. ./scripts/test/common.sh

if test $# -eq 1; then
    clean_up
    start_instance_timeout 2>&1 | grep "Running on all addresses" 1>&2
    if test $? -ne 0; then
        echo "Wrong message printed." 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
    end_with_success
elif test $# -eq 3; then
    host="$2"
    port="$3"
    echo "Using as remote $host:$port" 1>&2

    clean_up
    start_instance
    sleep 5

    ./scripts/test/single.sh "$host" "$port"
    if test $? -ne 0; then
        exit 1
    fi

    end_with_success
else
    echo "Unknown arguments." 1>&2
    echo "Usage: $0 <start_command> [<hostname> <port>]" 1>&2
    exit 1
fi
