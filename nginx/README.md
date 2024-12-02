# Nginx on Unikraft

Build and run Nginx on Unikraft.
Follow the instructions below to set up, configure, build and run Nginx.
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
make distclean
> /tmp/defconfig echo 'CONFIG_PLAT_KVM=y
CONFIG_KVM_VMM_QEMU=y
CONFIG_ARCH_X86_64=y
CONFIG_LIBDEVFS=y
CONFIG_LIBDEVFS_AUTOMOUNT=y
CONFIG_LIBRAMFS=y
CONFIG_LIBUK9P=y
CONFIG_LIBUKCPIO=y
CONFIG_LIBVFSCORE_AUTOMOUNT_UP=y
CONFIG_LIBVFSCORE_AUTOMOUNT_FB=y
CONFIG_LIBUKNETDEV_EINFO_LIBPARAM=y
CONFIG_LWIP_LOOPIF=y
CONFIG_LWIP_RAW=y
CONFIG_LIBNGINX=y
CONFIG_LIBNGINX_MAIN_FUNCTION=y'
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
sudo qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "nginx netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- -c /nginx/conf/nginx.conf" \
    -kernel workdir/build/nginx_qemu-x86_64 \
    -initrd ./initrd.cpio
```

This will configure, build and run Nginx on Unikraft.
You can see how to test it in the ["Test" section](#test).
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
> /tmp/defconfig echo 'CONFIG_PLAT_KVM=y
CONFIG_KVM_VMM_QEMU=y
CONFIG_ARCH_ARM_64=y
CONFIG_LIBDEVFS=y
CONFIG_LIBDEVFS_AUTOMOUNT=y
CONFIG_LIBRAMFS=y
CONFIG_LIBUK9P=y
CONFIG_LIBUKCPIO=y
CONFIG_LIBVFSCORE_AUTOMOUNT_UP=y
CONFIG_LIBVFSCORE_AUTOMOUNT_FB=y
CONFIG_LIBUKNETDEV_EINFO_LIBPARAM=y
CONFIG_LWIP_LOOPIF=y
CONFIG_LWIP_RAW=y
CONFIG_LIBNGINX=y
CONFIG_LIBNGINX_MAIN_FUNCTION=y
CONFIG_ARM64_ERRATUM_858921=n
CONFIG_ARM64_ERRATUM_835769=n
CONFIG_ARM64_ERRATUM_843419=n'
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
sudo qemu-system-aarch64 \
    -nographic \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "nginx netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- -c /nginx/conf/nginx.conf" \
    -kernel workdir/build/nginx_qemu-arm64 \
    -initrd ./initrd.cpio
```

Similar to the `x86_64` build, this will configure, build and run Nginx on Unikraft.

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

In the console menu interface, choose the target architecture (x86_64 or ARMv8 or ARMv7) and platform (Xen or KVM/QEMU or KVM/Firecracker).

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/nginx_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

### Use a Different Compiler

If you want to use a different compiler, such as a Clang or a different GCC version, pass the `CC` variable to `make`.

To build with Clang, use the commands below:

```console
make properclean
make CC=clang -j $(nproc)
```

Note that Clang >= 14 is required to build Unikraft.

To build with another GCC version, use the commands below:

```console
make properclean
make CC=gcc-<version> -j $(nproc)
```

where `<version>` is the GCC version, such as `11`, `12`.

Note that GCC >= 8 is required to build Unikraft.

### Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the command below for that:

```console
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.
Xen requires a system with Xen installed.

A successful run will show a message such as the one below:

```text
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~5d38d108
```

This means that Nginx runs on Unikraft and waiting for connections.

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
```

Now run the Unikraft image:

```console
sudo qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "nginx netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- -c /nginx/conf/nginx.conf" \
    -kernel workdir/build/nginx_qemu-x86_64 \
    -initrd ./initrd.cpio
```

You need use `sudo` or the `root` account to run QEMU with bridged networking.

### Run on QEMU/ARM64

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
```

Now run the Unikraft image:

```console
sudo qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "nginx netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- -c /nginx/conf/nginx.conf" \
    -kernel workdir/build/nginx_qemu-arm64 \
    -initrd ./initrd.cpio
```

You need use `sudo` or the `root` account to run QEMU with bridged networking.

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
```

Now run the Unikraft image:

```console
rm -f firecracker.socket
sudo firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

### Run on Firecracker/ARM64

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
```

Now run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-aarch64 --config-file fc.arm64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as the `root` account or prefixed by `sudo`.

### Run on Xen/x86_64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create bridge interface for Xen networking.
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo xl create -c xen.x86_64.cfg
```

You need use `sudo` or the `root` account to run Xen.

### Run on Xen/ARM64

To set up networking, use the commands below:

```console
# Remove previously created network interfaces. Ignore missing device errors.
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
# Create bridge interface for Xen networking.
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo xl create -c xen.arm64.cfg
```

You need use `sudo` or the `root` account to run Xen.

## Test

To test Nginx on Unikraft, use `curl` (or any other HTTP client):

```console
curl 172.44.0.2
```

In case of a successful run, you get the HTML content:

```console
<!DOCTYPE html>
<html>
<head>
  <title>Hello from Unikraft!</title>
</head>
<body>
  <h1>Hello from Unikraft!</h1>
</body>
</html>
```

## Close

As a server, Nginx will run forever until you close the Unikraft virtual machine that runs it.
Closing the virtual machine depends on the platform.

### Close QEMU

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

### Close Firecracker

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

### Close Xen

To close the Xen virtual machine, open another console and use the command:

```console
sudo xl destroy nginx
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

## Customize

### Customize the Filesystem Contents

The main way to customize Nginx is to update its configuration in the `nginx/` directory of the filesystem:

```console
rootfs/
`-- nginx/
    |-- conf/
    |   |-- mime.types
    |   `-- nginx.conf
    |-- html/
    |   `-- index.html
    `-- logs/
        `-- error.log
```

You can update the configuration in the `nginx/conf/nginx.conf` file.
You can also update the served content in the `nginx/html/index.html` file.

After updating the filesystem contents, you need to [rebuild the filesystem](#build-the-filesystem) and the [run](#run) the unikernel.
No rebuild of the unikernel is necessary.

### Use a Different Filesystem Type for QEMU

You can use [`9pfs`](https://github.com/unikraft/unikraft/tree/staging/lib/9pfs) as an alternate filesystem to initrd.
Note that 9pfs does not work with Firecracker.
And it requires re-building Xen to add 9pfs support.
Below find instructions on running Nginx on QEMU with 9pfs support.

You need to use these contents for the [`Config.uk`](Config.uk) configuration file:

```text
config APPNGINX
bool "Configure Nginx application with initrd as rootfs"
default y
        select LIBNGINX
        select LIBNGINX_MAIN_FUNCTION
        select LIBVFSCORE
        select LIBVFSCORE_AUTOMOUNT_UP
        select LIBUK9P
        select LIB9PFS
        select LIBDEVFS
        select LIBDEVFS_AUTOMOUNT
        select LIBDEVFS_DEVSTDOUT
        select LIBUKNETDEV_EINFO_LIBPARAM
```

This means you replace these two lines in [`Config.uk`](Config.uk):

```text
        select LIBRAMFS
        select LIBUKCPIO
```

with these lines:

```text
        select LIBUK9P
        select LIB9PFS
```

Now go through the [configure](#configure) and [build](#build) steps.

Finally, after configuring networking, use the commands below to run Nginx on QEMU/x86_64 with 9pfs support:

```console
# Create a copy of the filesystem to be mounted as 9pfs.
rm -fr 9pfs-rootfs
cp -r rootfs 9pfs-rootfs
sudo qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "nginx netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"fs0:/:9pfs:::\" ] -- -c /nginx/conf/nginx.conf" \
    -kernel workdir/build/nginx_qemu-x86_64 \
    -fsdev local,id=myid,path=$(pwd)/9pfs-rootfs/,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0
```

You would use a similar command for QEMU/ARM64.
