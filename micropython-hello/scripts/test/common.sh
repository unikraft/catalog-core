#!/bin/bash

if test -z "$log_file"; then
    log_file="/dev/null"
fi

clean_up()
{
    {
    # Clean up any previous instances.
    sudo pkill -9 qemu-system
    sudo pkill -9 firecracker
    kraft stop --all
    kraft rm --all
    sudo kraft stop --all
    sudo kraft rm --all

    # Remove previously created network interfaces.
    sudo ip link set dev tap0 down
    sudo ip link del dev tap0
    sudo ip link set dev virbr0 down
    sudo ip link del dev virbr0
    } > /dev/null 2>&1
}

start_instance()
{
    # Start instance.
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
    # Start instance.
    setsid --fork timeout -k 2 5 "$start_command" 1>&2 &
    if test $? -ne 0; then
        echo "Cannot start instance" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_ping()
{
    host="$1"

    # Connect to instance.
    ping -c 1 "$host" 1>&2
    if test $? -ne 0; then
        echo "Cannot ping $host" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_curl_connect()
{
    host="$1"
    port="$2"

    # Query instance.
    curl --retry 1 --connect-timeout 1 --max-time 10 "$host":"$port" 1>&2
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

    # Check server message contents.
    curl --retry 1 --connect-timeout 1 --max-time 10 "$host":"$port" | grep "$message" 1>&2
    if test $? -ne 0; then
        echo "Wrong message from $host:$port" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_netcat_connect()
{
    host="$1"
    port="$2"

    # Check connection.
    netcat -w 3 "$host" "$port" < /dev/null 1>&2
    if test $? -ne 0; then
        echo "Cannot connect to $host:$port" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_redis_connect()
{
    host="$1"
    port="$2"

    redis-cli -h "$host" -p "$port" < /dev/null 1>&2
    if test $? -ne 0; then
        echo "Cannot connect client to Redis server at $host:$port" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_redis_cli()
{
    host="$1"
    port="$2"

    redis-cli -h "$host" -p "$port" set a 1 1>&2
    redis-cli -h "$host" -p "$port" get a 1>&2
    if test $? -eq 1; then
        echo "FAILED"
        echo "Cannot talk to Redis server at $host:$port" 1>&2
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
