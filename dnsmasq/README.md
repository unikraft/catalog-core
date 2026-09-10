# dnsmasq on Unikraft

Build and run [dnsmasq 2.91](https://thekelleys.org.uk/dnsmasq/doc.html) on Unikraft, as a caching DNS forwarder (UDP + TCP) with DNSSEC validation enabled by default.
DHCP and TFTP are intentionally disabled: they need `PF_PACKET` raw sockets (layer 2).
Follow the instructions below to set up, configure, build and run dnsmasq.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

**Note**: This is a network application.
For using QEMU, enable bridged networking, as instructed in the [top-level `README.md`](../README.md#qemu):

```console
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
./.scripts/build/qemu.x86_64
sudo ./.scripts/run/qemu.x86_64
```

To do the same for `AArch64`, or for Firecracker, use the matching scripts:

```console
./setup.sh
./.scripts/build/qemu.arm64
sudo ./.scripts/run/qemu.arm64
```

The build scripts wrap the [configure](#configure) and [build](#build) steps; the run scripts wrap the host networking and [filesystem](#build-the-filesystem) steps of [run](#run).
The server comes up at `172.44.0.2:53`.
You can see how to test it in the ["Test" section](#test).
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

Information about every step and about other types of builds is detailed below.

## Set Up

Set up the required repositories.
For this, you have two options:

1. Use the `setup.sh` script:

   ```console
   ./setup.sh
   ```

   It will create symbolic links to the required repositories in `../repos/`.
   Be sure to run the [top-level `setup.sh` script](../setup.sh).

   If you want use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

1. Have your custom setup of repositories in the `workdir/` directory.
   Clone, update and customize repositories to your own needs.

## Clean

While not strictly required, it is safest to clean the previous build artifacts:

```console
make distclean
```

## Configure

To configure the kernel, use:

```console
make menuconfig
```

In the console menu interface, choose the target architecture (x86_64 or ARMv8) and platform (KVM/QEMU or KVM/Firecracker).

The end result will be the creation of the `.config` configuration file.

Alternatively, use one of the ready-made configurations in `.scripts/defconfig/`:

```console
UK_DEFCONFIG=$(pwd)/.scripts/defconfig/qemu.x86_64 make defconfig
```

The `fc.*` ones also select the Firecracker platform.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/dnsmasq_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`), and `<arch>` is the architecture (`x86_64` or `arm64`).

### Use a Different Compiler

If you want to use a different compiler, such as a Clang or a different GCC version, pass the `CC` variable to `make`.

To build with Clang, use the commands below:

```console
make properclean
make CC=clang -j $(nproc)
```

### Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Generate the DNSSEC trust anchors first, then pack:

```console
python3 ./.scripts/trust-anchors.py /usr/share/dns/root.ds  # or omit the argument to fetch from `IANA`
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

See the ["DNSSEC" section](#dnssec) for what the anchors are and when you can skip them.

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

The bridge and tap interfaces below are isolated and do not NAT, so the guest also needs IP forwarding and a masquerade rule to reach the Internet.

A successful run looks like the one below, ending with dnsmasq announcing its trust anchors and upstream servers, and the virtual machine staying up:

```text
Booting from ROM..[    0.000000] ERR:  [libukallocbbuddy] <bbuddy.c @  569> 11000: Failed to add memory region 268000-269000: Not enough space …
[    0.122669] Warn: [libposix_process] <clone.c @  193> uk_posix_clone_sighand() stubbed
[    0.123026] Warn: [libuklock] <semaphore.c @   23> uk_posix_clone_sysvsem() stubbed
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
          Ijiraq 0.21.0~60acb0ec
[    0.124275] Warn: [libposix_process] <rt_sigprocmask.c @   72> __uk_syscall_r_rt_sigprocmask() stubbed
[    0.124583] Warn: [libposix_process] <rt_sigaction.c @   69> __uk_syscall_r_rt_sigaction() stubbed
[    0.131174] Warn: [libposix_netlink] <netlink.c @  423> nl_poll_setup() stubbed
[    0.137852] Warn: [libposix_process] <deprecated.c @  302> __uk_syscall_r_prctl() stubbed
Jul 30 19:42:30 dnsmasq[1]: started, version 2.91 cachesize 10000
Jul 30 19:42:30 dnsmasq[1]: compile time options: IPv6 no-GNU-getopt no-DBus no-UBus no-i18n no-IDN no-DHCP no-scripts no-TFTP no-conntrack no-ipset no-nftset no-auth DNSSEC no-ID loop-detect no-inotify no-dumpfile
Jul 30 19:42:30 dnsmasq[1]: DNSSEC validation enabled
Jul 30 19:42:30 dnsmasq[1]: configured with trust anchor for <root> keytag 38696
Jul 30 19:42:30 dnsmasq[1]: configured with trust anchor for <root> keytag 20326
Jul 30 19:42:30 dnsmasq[1]: using nameserver 8.8.8.8#53
Jul 30 19:42:30 dnsmasq[1]: using nameserver 8.8.4.4#53
Jul 30 19:42:30 dnsmasq[1]: using nameserver 1.1.1.1#53
Jul 30 19:42:30 dnsmasq[1]: cleared cache
```

### Run on QEMU/x86_64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create bridge interface for QEMU networking.
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
# Let the forwarder reach the upstream resolvers.
sudo sysctl -qw net.ipv4.ip_forward=1
sudo iptables -t nat -A POSTROUTING -s 172.44.0.0/24 ! -o virbr0 -j MASQUERADE
```

Now run the Unikraft image:

```console
sudo qemu-system-x86_64 \
    -nographic \
    -m 64M \
    -cpu max \
    -no-reboot \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "dnsmasq netdev.ip=172.44.0.2/24:172.44.0.1::: -- -d -C /etc/dnsmasq.conf" \
    -kernel workdir/build/dnsmasq_qemu-x86_64 \
    -initrd ./initrd.cpio
```

You need to use `sudo` or the `root` account to run QEMU with bridged networking.

### Run on QEMU/ARM64

Set up networking as for [QEMU/x86_64](#run-on-qemux86_64), then run the Unikraft image:

```console
sudo qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 64M \
    -cpu max \
    -no-reboot \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0,romfile="" \
    -append "dnsmasq netdev.ip=172.44.0.2/24:172.44.0.1::: -- -d -C /etc/dnsmasq.conf" \
    -kernel workdir/build/dnsmasq_qemu-arm64 \
    -initrd ./initrd.cpio
```

You need to use `sudo` or the `root` account to run QEMU with bridged networking.

### Run on Firecracker/x86_64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create tap interface for Firecracker networking.
sudo ip tuntap add dev tap0 mode tap
sudo ip address add 172.44.0.1/24 dev tap0
sudo ip link set dev tap0 up
# Let the forwarder reach the upstream resolvers.
sudo sysctl -qw net.ipv4.ip_forward=1
sudo iptables -t nat -A POSTROUTING -s 172.44.0.0/24 ! -o tap0 -j MASQUERADE
```

Now run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

### Run on Firecracker/ARM64

Set up networking as for [Firecracker/x86_64](#run-on-firecrackerx86_64), then run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-aarch64 --config-file fc.arm64.json --api-sock firecracker.socket
```

## Test

With an instance running, from another console:

```console
./test.sh
```

It checks UDP and TCP resolution, upstream forwarding, and DNSSEC (both a validated answer and a rejected one).
Override the target with the `HOST` and `PORT` environment variables.

The same checks by hand, using `dig` (or any other DNS client):

```console
dig @172.44.0.2 test.local              # UDP: the record from dnsmasq.conf
dig +tcp @172.44.0.2 test.local         # TCP
dig @172.44.0.2 google.com              # forwarding and caching
dig @172.44.0.2 +dnssec cloudflare.com  # the 'ad' flag means validated
dig @172.44.0.2 dnssec-failed.org       # SERVFAIL means validation works
```

`.scripts/test/all.sh` builds, boots and tests every target; this is what CI runs, where `arm64` and `fc` are build-only.

## Close

As a server, dnsmasq will run forever until you close the Unikraft virtual machine that runs it.
Closing the virtual machine depends on the platform.

### Close QEMU

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

### Close Firecracker

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

## Clean Up

Doing a new configuration, or a new build, may require cleaning up the configuration and build artifacts.

In order to remove the build artifacts, use:

```console
make clean
```

In order to remove fetched files also, that is the removal of the `workdir/build/` directory, use:

```console
make properclean
```

In order to remove the generated `.config` file as well, use:

```console
make distclean
```

A manual run also leaves host network state behind (`.scripts/test/all.sh` cleans up after itself).
Nothing accumulates across runs, but to undo it:

```console
sudo iptables -t nat -D POSTROUTING -s 172.44.0.0/24 ! -o virbr0 -j MASQUERADE
sudo ip link del dev virbr0            # or tap0, for Firecracker
sudo sysctl -w net.ipv4.ip_forward=0   # only if it was off before
```

## Customize

### Customize the Filesystem Contents

The main way to customize dnsmasq is to update its configuration in the `etc/` directory of the filesystem:

```console
rootfs/
`-- etc/
    |-- dnsmasq.conf
    `-- trust-anchors.conf   # generated, see "Build the Filesystem"
```

`rootfs/etc/dnsmasq.conf` is commented: upstream servers, cache size, forwarding limits, and the local `test.local` record all live there.

After updating the filesystem contents, you need to [rebuild the filesystem](#build-the-filesystem) and then [run](#run) the unikernel.
No rebuild of the unikernel is necessary.

### DNSSEC

DNSSEC is enabled by default (`CONFIG_LIBDNSMASQ_DNSSEC=y`), with `dnssec` and `dnssec-check-unsigned` in the configuration.
The crypto comes from Nettle/libhogweed built against bundled mini-gmp.

Validation is anchored at the IANA root keys, which `.scripts/trust-anchors.py` writes to `rootfs/etc/trust-anchors.conf` at pack time.
The script converts the build host's `/usr/share/dns/root.ds` when it is given as an argument, and otherwise fetches and parses [IANA's `root-anchors.xml`](https://data.iana.org/root-anchors/root-anchors.xml), skipping retired keys.
The run scripts prefer the local file and fall back to the fetch, so hosts without `dns-root-data` still work.

To build without DNSSEC, set `CONFIG_LIBDNSMASQ_DNSSEC=n` and drop the `dnssec` lines from the configuration.

Validation compares signature timestamps against the VM clock, so if every query returns SERVFAIL, suspect the clock first.
