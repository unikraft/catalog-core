#!/bin/sh

elfloader_base="elfloader-net"

if ! test -d workdir; then
    mkdir workdir
fi

ln -sfn "../../$elfloader_base/workdir" workdir/base

build_elfloader_base()
{
    (
        cd "../$elfloader_base" &&
        ./setup.sh &&
        make distclean &&
        "./.scripts/build/$1"
    ) || exit 1
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
