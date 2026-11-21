#!/bin/sh

bridge="virbr0"
host_ip="172.44.0.1"
guest_ip="172.44.0.2"
port="8080"

cleanup()
{
    sudo pkill -f "elfloader_qemu-x86_64" 2>/dev/null
}

trap cleanup EXIT INT TERM

sudo ip link add dev "$bridge" type bridge 2>/dev/null
sudo ip addr add "$host_ip/24" dev "$bridge" 2>/dev/null
sudo ip link set dev "$bridge" up

sudo qemu-system-x86_64 \
    -nographic -m 256 -cpu max \
    -netdev bridge,id=en0,br="$bridge" -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=$guest_ip/24:$host_ip::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/bin/haproxy -db -f /etc/haproxy/haproxy.conf" \
    -kernel workdir/base/build/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio \
    < /dev/null > ./.scripts/test/log/run.qemu.x86_64 2>&1 &

i=0
while test "$i" -lt 30; do
    code=$(curl -s -o /dev/null -w "%{http_code}" "http://$guest_ip:$port/" 2>/dev/null)
    if test "$code" = "200"; then
        echo "PASSED"
        exit 0
    fi
    i=$((i + 1))
    sleep 1
done

echo "FAILED"
exit 1
