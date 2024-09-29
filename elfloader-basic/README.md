# Unikraft ELF Loader (Basic)

Build and run the [Unikraft ELF Loader](https://github.com/unikraft/app-elfloader) as a basic build, i.e. without networking.
The ELF Loader uses the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility) in order to run native Linux binaries (ELFs) with Unikraft.
The ELF has to be PIE (*Position-Independent Executable*), either static or dynamic.

Follow the instructions below to set up, configure, build and run the ELF Loader.
Make sure you installed the [requirements](../README.md#requirements).

The Unikraft ELF Loader currently runs on x86_64 (ARM64 work is underway) and on KVM (QEMU and Firecracker) (Xen work is underway).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).

To build and run a Hello Linux ELF using the Unikraft ELF Loader, use the commands below:

```console
test -d ../repos/unikraft || git clone https://github.com/unikraft/unikraft ../repos/unikraft
test -d ../repos/libs/libelf || git clone https://github.com/unikraft/lib-libelf ../repos/libs/libelf
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
CONFIG_LIBDEVFS_AUTOMOUNT=y'
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
make -C rootfs/
test -f initrd.cpio || ../repos/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 64 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello-c" \
    -kernel out/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio
```

This will configure, build and run the Unikraft ELF Loader with a Hello Linux ELF.
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
Clone them in `../repos/` if not already cloned:

```console
test -d "../repos/unikraft" || git clone https://github.com/unikraft/unikraft ../repos/unikraft
test -d "../repos/libs/libelf" || git clone https://github.com/unikraft/lib-libelf ../repos/libs/libelf
```

If you want use a custom variant of a repository (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

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

This results in the creation of the `out/` directory storing the build artifacts.
The unikernel application image file is `out/elfloader_<plat>-x86_64`, where `<plat>` is the platform name (`qemu`, `fc`).

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
../repos/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

## Clean Up

Doing a new configuration, or a new build, may require cleaning up the configuration and build artifacts.

In order to remove the build artifacts, use:

```console
make clean
```

In order to remove fetched files also, that is the removal of the `out/` directory, use:

```console
make properclean
```

In order to remove the generated `.config` file as well, use:

```console
make distclean
```

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

A successful run will show a message such as the one below:

```text
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~de0e3519
Hello from Unikraft!
```

This means that the ELF Loader loaded and ran successfully the `hello-c` binary in `rootfs/`.

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 64 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello-c" \
    -kernel out/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

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

## Customize

### Use Other ELFs

The current setup uses a Hello Linux ELF created from the `rootfs/hello.c` program.

There is a C++ variant in `rootfs/hello.cpp`, that is built into the `rootfs/hello-cpp` ELF in the ["Prepare the Linux ELF" step](#prepare-the-linux-elf).
In order to use the C++ variant, update the Unikraft start command.
For QEMU, this means using the command:

```console
qemu-system-x86_64 \
    -nographic \
    -m 64 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello-cpp" \
    -kernel out/elfloader_qemu-x86_64 \
    -initrd ./initrd.cpio
```

That is, replacing `-append "... -- /hello.c"` with `-append "... -- /hello.c"`.

For Firecracker, the `fc.x86_64.json` file needs to be updated similarly.

For other ELFs, you need to follow the steps:

1. Add / Build ELF in the `rootfs/` directory.
1. Update the start command as above with the command to run the ELF.
   The command can also have arguments, similar to any other Linux command.

**Note**:
This is a basic ELF Loader build, without networking support.
ELFs using require additional configuration of the ELF Loader.

### Enable Debug Messages

You can customize the ELF Loader build debug messages.
For that, use the ["Configure" step](#configure) enable the [`ukdebug` library](https://github.com/unikraft/unikraft/tree/staging/lib/ukdebug) and its other options.
Then, build and run again.
