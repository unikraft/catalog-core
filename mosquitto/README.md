# Mosquitto on Unikraft

Build and run the [Eclipse Mosquitto](https://mosquitto.org/) MQTT broker as a
unikernel. Install the [requirements](../README.md#requirements) first, and run
the [top-level `setup.sh`](../setup.sh) once to fetch the repositories.

## Quick Setup (aka TLDR)

Install the [requirements](../README.md#requirements) and run the
[top-level `setup.sh`](../setup.sh) first. This is a network application, so
enable bridged networking:

```console
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

Build and run for `x86_64` (swap `x86_64` for `arm64`, or `qemu` for `fc`):

```console
./setup.sh
./.scripts/build/qemu.x86_64
sudo ./.scripts/run/qemu.x86_64
```

The broker comes up at `172.44.0.2:1883`. Subscribe from a second terminal:

```console
mosquitto_sub -h 172.44.0.2 -t test/unikraft
```

And publish from a third:

```console
mosquitto_pub -h 172.44.0.2 -t test/unikraft -m "Hello from Unikraft!"
```

The subscriber prints the message. [`./test.sh`](test.sh) does the same thing

Close QEMU with `Ctrl+a x`.
Every step is detailed below.

## Build

`./setup.sh` symlinks the repositories (`unikraft`, `musl`, `lwip`,
`mosquitto`) from `../repos/` into `workdir/`.

The `./.scripts/build/<plat>.<arch>` scripts apply the matching
[defconfig](.scripts/defconfig/) and build `workdir/build/mosquitto_<plat>-<arch>`,
where `<plat>` is `qemu` or `fc` and `<arch>` is `x86_64` or `arm64`.

Configure interactively with `make menuconfig`. Pass `CC=clang`/etc. to the
build script to use a different compiler. Cross-building `arm64` from an
`x86_64` host needs a toolchain prefix:

```console
CROSS_COMPILE=aarch64-linux-gnu- ./.scripts/build/qemu.arm64
```

## Run

The `./.scripts/run/<plat>.<arch>` scripts set up the host network interface,
repack `rootfs/` into `initrd.cpio` and start the broker. Firecracker requires
KVM support.

Xen has no scripts. Build it by passing [.scripts/defconfig/](.scripts/defconfig/)
style options to `make menuconfig`, pack the initrd yourself, then boot it with
`sudo xl create -c xen.x86_64.cfg` on a system with Xen installed.

A successful run ends with:

```text
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Kiviuq 0.20.0~f5090fa7
1773527810: mosquitto version 2.1.2 starting
1773527810: Config loaded from /etc/mosquitto/mosquitto.conf.
1773527810: Opening ipv4 listen socket on port 1883.
1773527810: mosquitto version 2.1.2 running
```

## Test

With an instance running, from another terminal:

```console
./test.sh
```

It publishes and subscribes over `172.44.0.2:1883` and checks retained
messages

## Configuration

The broker configuration is [`rootfs/etc/mosquitto/mosquitto.conf`](rootfs/etc/mosquitto/mosquitto.conf),
packed into the initrd by the run scripts. It listens on 1883 without
authentication, which suits the isolated bridge used here — add `password_file`
and drop `allow_anonymous` before putting it on a shared network.

Persistence writes to `/data/` in the in-memory root filesystem, so it survives
a broker restart but not a guest reboot. Attach a volume and point
`persistence_location` at it for durable storage.

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
