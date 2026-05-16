# Linux Binary-Compatible Go HTTP on Unikraft

Build and run a Go HTTP program compiled as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-net` as its base, make sure to check its [README](../elfloader-net/README.md) for more information.
Follow the instructions below to set up, configure, build, and run Go HTTP.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

```bash
./setup.sh
make -C rootfs clean
make -C rootfs
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
make

sudo ip link set dev virbr0 down || true
sudo ip link del dev virbr0 || true
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up

sudo qemu-system-x86_64 \
    -nographic \
    -enable-kvm \
    -m 256 \
    -cpu host \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /go-httpbin" \
    -kernel workdir/build/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio
```

This will run the Unikraft ELF Loader with a Go HTTP Linux ELF.

Information about every step and about other types of builds is detailed below.

## Set Up

Set up the required repositories.
For this, you have two options:

1. Use the `setup.sh` script:

   ```bash
   ./setup.sh
   ```

   It will create symbolic links to the required repositories in `../repos/`.
   Be sure to run the [top-level `setup.sh` script](../setup.sh).

   If you want use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

1. Have your custom setup of repositories in the `workdir/` directory.
   Clone, update and customize repositories to your own needs.

## Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the commands below for that:

```bash
make -C rootfs clean
make -C rootfs
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

## Build

Build the application for the current configuration:

```bash
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/elfloader_<plat>-x86_64`, where `<plat>` is the platform name (`qemu`, `fc`).

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

A successful run will show a message such as the one below:

```text
Booting from ROM..1: Set IPv4 address 172.44.0.2 mask 255.255.255.0 gw 172.44.0.1
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' `_ | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Kiviuq 0.20.0~07044e69
time=1999-12-31T00:00:00.308Z level=INFO msg="go-httpbin listening on http://0.0.0.0:8080"
```

This means that the ELF Loader loaded and ran successfully the `go-httpbin` binary in `rootfs/`.
To test Go HTTP, use `curl` (or any other HTTP client):

```bash
curl http://172.44.0.2:8080/get
```

In case of a successful run, a JSON response is printed.

### Run on QEMU/x86_64

To set up networking, use the commands below:

```bash
sudo ip link set dev virbr0 down || true
sudo ip link del dev virbr0 || true
sudo ip link set dev tap0 down || true
sudo ip link del dev tap0 || true
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```bash
sudo qemu-system-x86_64 \
    -nographic \
    -enable-kvm \
    -m 256 \
    -cpu host \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /go-httpbin" \
    -kernel workdir/build/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

Keep `initrd.cpio` as-is unless you changed `rootfs/` (same Linux ELF works for both VMMs). Repack only if needed:

```bash
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

Reconfigure Unikraft for Firecracker:

```bash
wget -O /tmp/defconfig_fc https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/elfloader-net/scripts/defconfig/fc.x86_64
UK_DEFCONFIG=/tmp/defconfig_fc make defconfig
make -j "$(nproc)"
```

Networking (tap) - Firecracker expects **`tap0`** at **`172.44.0.1/24`** (see [`fc.x86_64.json`](./fc.x86_64.json) `host_dev_name`). Tear down QEMU’s bridge if it conflicts; then create the tap:

```bash
sudo ip link set dev virbr0 down || true
sudo ip link del dev virbr0 || true
sudo ip link set dev tap0 down || true
sudo ip link del dev tap0 || true
sudo ip tuntap add dev tap0 mode tap
sudo ip address add 172.44.0.1/24 dev tap0
sudo ip link set dev tap0 up
```

Run Firecracker (needs KVM - **`kvm` group** or **`sudo`**):

```bash
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```
   
