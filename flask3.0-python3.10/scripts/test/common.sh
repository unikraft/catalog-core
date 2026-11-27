#!/bin/bash

if test -z "$log_file"; then
    log_file="/dev/null"
fi

clean_up()
{
    {
    sudo pkill -9 qemu-system
    sudo pkill -9 firecracker
    kraft stop --all
    kraft rm --all
    sudo kraft stop --all
    sudo kraft rm --all

    sudo ip link set dev tap0 down
    sudo ip link del dev tap0
    sudo ip link set dev virbr0 down
    sudo ip link del dev virbr0
    } > /dev/null 2>&1
}

start_instance()
{
    setsid --fork "$start_command" 1>&2 &
    if test $? -ne 0; then
        echo "Cannot start instance" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

start_instance_timeout()
{
    setsid --fork timeout -k 2 30 "$start_command" 1>&2 &
    if test $? -ne 0; then
        echo "Cannot start instance" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_curl_connect()
{
    host="$1"
    port="$2"

    curl --retry 5 --retry-delay 1 --connect-timeout 1 --max-time 10 "$host":"$port" 1>&2
    if test $? -ne 0; then
        echo "Cannot connect to $host:$port" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_curl_check_reply()
{
    host="$1"
    port="$2"
    message="$3"

    curl --retry 5 --retry-delay 1 --connect-timeout 1 --max-time 10 "$host":"$port" | grep "$message" 1>&2
    if test $? -ne 0; then
        echo "Wrong message from $host:$port" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

end_with_success()
{
    echo "PASSED"
    clean_up
    exit 0
}

start_command="$1"
