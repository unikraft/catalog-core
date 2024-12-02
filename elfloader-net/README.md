# Unikraft ELF Loader (Networking)

Build and run the [Unikraft ELF Loader](https://github.com/unikraft/app-elfloader) with networking support.
The ELF Loader uses the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility) in order to run native Linux binaries (ELFs) with Unikraft.
The ELF has to be PIE (*Position-Independent Executable*), either static or dynamic.

Follow the instructions below to set up, configure, build and run the ELF Loader.
Make sure you installed the [requirements](../README.md#requirements).

The Unikraft ELF Loader currently runs on x86_64 (ARM64 work is underway) and on KVM (QEMU and Firecracker) (Xen work is underway).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

**Note**: This is a network application.
For using QEMU, enable bridged networking, as instructed in the [top-level `README.md`](../README.md#qemu):

```console
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

To build and run a simple HTTP server Linux ELF using the Unikraft ELF Loader, use the commands below:

```console
./setup.sh
make distclean
> /tmp/defconfig echo 'CONFIG_PLAT_KVM=y
CONFIG_KVM_VMM_QEMU=y
CONFIG_ARCH_X86_64=y
CONFIG_APPELFLOADER_DEPENDENCIES=y
CONFIG_APPELFLOADER_ARCH_PRCTL=y
CONFIG_APPELFLOADER_BRK=y
CONFIG_APPELFLOADER_CUSTOMAPPNAME=y
CONFIG_APPELFLOADER_STACK_NBPAGES=128
CONFIG_APPELFLOADER_VFSEXEC_EXECBIT=n
CONFIG_APPELFLOADER_VFSEXEC=y
CONFIG_APPELFLOADER_HFS=y
CONFIG_APPELFLOADER_HFS_ETCRESOLVCONF=y
CONFIG_APPELFLOADER_HFS_ETCHOSTS=y
CONFIG_APPELFLOADER_HFS_ETCHOSTNAME=y
CONFIG_APPELFLOADER_HFS_REPLACEEXIST=y
CONFIG_LIBVFSCORE=y
CONFIG_LIBVFSCORE_AUTOMOUNT_UP=y
CONFIG_LIBRAMFS=y
CONFIG_LIBUKCPIO=y
CONFIG_LIBDEVFS=y
CONFIG_LIBDEVFS_AUTOMOUNT=y
CONFIG_LIBLWIP=y
CONFIG_LIBUKNETDEV_EINFO_LIBPARAM=y'
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
sudo ip link set dev virbr0 down
sudo ip link del dev virbr0
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
make -C rootfs/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
sudo qemu-system-x86_64 \
    -nographic \
    -m 64 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /c-server" \
    -kernel workdir/build/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio
```

This will configure, build and run the Unikraft ELF Loader with a simple HTTP server Linux ELF.
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

Information about every step and about other types of builds is detailed below.

## Prepare the Linux ELF

Build the Linux ELF to be used by the ELF Loader using:

```console
make -C rootfs/
```

The resulting ELF will be packed in an initial ramdisk CPIO file and will be passed to the ELF Loader at runtime.

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

In the console menu interface chose the platform (KVM/QEMU or KVM/Firecracker).

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/elfloader_<plat>-x86_64`, where `<plat>` is the platform name (`qemu`, `fc`).

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

A successful run will show a message such as the one below:

```text
Booting from ROM..1: Set IPv4 address 172.44.0.2 mask 255.255.255.0 gw 172.44.0.1
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~d7a78603
Listening on port 8080...
```

This means that the ELF Loader loaded and ran successfully the `c-server` binary in `rootfs/`.

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
    -m 64 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /c-server" \
    -kernel workdir/build/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio
```

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
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

## Test

To test the simple HTTP server on Unikraft, use `curl` (or any other HTTP client):

```console
curl 172.44.0.2:8080
```

In case of a successful run, a Hello message is printed:

```console
Hello from Unikraft!
```

## Close

Currently the ELF Loader doesn't have implemented a shutdown mechanism.
So, after the Linux ELF ends execution, the virtual machine is left hanging.

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

## Customize

### Use Other ELFs

The current setup uses a simple C HTTP server Linux ELF created from the `rootfs/server.c` program.

For other ELFs, you need to follow the steps:

1. Add / Build ELF in the `rootfs/` directory.

1. Update the start command to run the ELF:

   ```console
   sudo qemu-system-x86_64 \
       -nographic \
       -m 64 \
       -cpu max \
       -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
       -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /<new-command-here>" \
       -kernel workdir/build/elfloader_qemu-x86_64 \
       -initrd ./initrd.cpio
   ```

   That is, replace `-append "... -- /c-server"` with `-append "... -- /<new-command-here>"`.
   The `<new-command-here>` string can be a command with arguments.

For Firecracker, the `fc.x86_64.json` file needs to be updated similarly.

### Enable Debug Messages

You can customize the ELF Loader build debug messages.
For that, use the ["Configure" step](#configure) enable the [`ukdebug` library](https://github.com/unikraft/unikraft/tree/staging/lib/ukdebug) and its other options.
Then, build and run again.
