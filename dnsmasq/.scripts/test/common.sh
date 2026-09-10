#!/bin/bash
# Helpers for the dnsmasq unikernel tests. The actual DNS checks live in the
# app's top-level test.sh. The instance runs on the bridge network (virbr0),
# so queries go to the guest's static IP 172.44.0.2 on DNS port 53.

host="${host:-172.44.0.2}"
port="${port:-53}"

clean_up()
{
    {
    # qemu runs under sudo (bridge networking), so clean up as root.
    sudo pkill -9 qemu-system
    sudo iptables -t nat -D POSTROUTING -s 172.44.0.0/24 ! -o virbr0 -j MASQUERADE
    sudo iptables -t nat -D POSTROUTING -s 172.44.0.0/24 ! -o tap0 -j MASQUERADE
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

# Wait until the DNS port returns a real A record, or time out. `dig +short`
# prints its "connection refused" diagnostic to stdout, so readiness must be
# detected by an actual answer (a line starting with a digit), not merely by
# non-empty output.
wait_for_dns()
{
    i=0
    while test "$i" -lt 300; do
        if dig +short +timeout=1 +tries=1 @"$host" -p "$port" test.local \
            2>/dev/null | grep -qE '^[0-9]'; then
            return 0
        fi
        sleep 1
        i=$((i + 1))
    done
    echo "dnsmasq did not become ready on $host:$port" 1>&2
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
