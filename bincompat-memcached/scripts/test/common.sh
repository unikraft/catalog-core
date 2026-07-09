#!/bin/sh

if test -z "$log_file"; then
    log_file="/dev/null"
fi

clean_up()
{
    {
    # clean up any previous instances of this application
    sudo pkill -9 -f "elfloader_qemu-x86_64.*memcached"
    sudo pkill -9 -f "firecracker.*fc.x86_64.json"

    # remove previously created network interfaces
    sudo ip link set dev tap0 down
    sudo ip link del dev tap0
    sudo ip link set dev virbr0 down
    sudo ip link del dev virbr0
    } > /dev/null 2>&1
}

start_instance()
{
    # start instance
    setsid --fork "$start_command" 1>&2
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

    # connect to instance
    ping -c 1 "$host" 1>&2
    if test $? -ne 0; then
        echo "Cannot ping $host" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_netcat_connect()
{
    host="$1"
    port="$2"

    # check connection
    nc -w 3 "$host" "$port" < /dev/null 1>&2
    if test $? -ne 0; then
        echo "Cannot connect to $host:$port" 1>&2
        echo "FAILED"
        clean_up
        exit 1
    fi
}

test_memcached_set_get()
{
    host="$1"
    port="$2"

    # store a value and read it back
    reply=$(printf 'set test_key 0 0 5\r\nhello\r\nget test_key\r\nquit\r\n' | \
            nc -w 3 "$host" "$port" | tr -d '\r')
    expected="STORED
VALUE test_key 0 5
hello
END"
    if test "$reply" != "$expected"; then
        echo "Wrong reply from Memcached at $host:$port" 1>&2
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
