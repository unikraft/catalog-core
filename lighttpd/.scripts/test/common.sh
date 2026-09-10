#!/bin/bash
# Helpers for the lighttpd unikernel tests. The actual checks live in the
# app's top-level test.sh. The instance runs on the CI bridge network, so
# requests go to 172.44.0.2:80 by default.

host="${host:-172.44.0.2}"
port="${port:-80}"

clean_up()
{
    {
    # Clean up any previous instance.
    sudo pkill -9 qemu-system

    # Remove previously created network interfaces.
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

# Wait until the server answers an HTTP request, or time out.
wait_for_http()
{
    i=0
    while test "$i" -lt 60; do
        if curl -s --connect-timeout 1 --max-time 2 -o /dev/null \
            "http://$host:$port/"; then
            return 0
        fi
        sleep 1
        i=$((i + 1))
    done
    echo "lighttpd did not become ready on $host:$port" 1>&2
    echo "FAILED"
    clean_up
    exit 1
}

end_with_success()
{
    echo "PASSED"
    clean_up
    exit 0
}

start_command="$1"
