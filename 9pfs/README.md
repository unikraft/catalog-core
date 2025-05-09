
# 9pfs: Unikraft's 9p Virtual Filesystem

With `9pfs`, you can create virtual filesystem devices (`uk_9pdev` in the context of Unikraft) and make them directly accessible between a guest OS and a host as a pass-through filesystem.
This filesystem uses the [9P network protocol](https://en.wikipedia.org/wiki/9P_(protocol)) for communication between the two instances.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
cp Config .config
make -j $(nproc)
qemu-system-x86_64 -m 8 -cpu max -fsdev local,id=fs0,path=./rootfs/,security_model=none -device virtio-9p-pci,fsdev=fs0,mount_tag=rootfs -kernel workdir/build/9pfs_qemu-x86_64 -nographic
```

This will configure, build and run the application, resulting in a `These violent delights have violent ends.` message being printed.

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
cp Config .config
```

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/c-hello_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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

## Run

### Run on QEMU/x86_64

```console
qemu-system-x86_64 -m 8 -cpu max -fsdev local,id=fs0,path=./rootfs/,security_model=none -device virtio-9p-pci,fsdev=fs0,mount_tag=rootfs -kernel workdir/build/9pfs_qemu-x86_64 -nographic
```
A successful run will show a message such as the one below:

```text
SeaBIOS (version 1.15.0-1)


iPXE (https://ipxe.org) 00:03.0 CA00 PCI2.10 PnP PMM+1FF8B2F0+1FECB2F0 CA00
                                                                               


Booting from ROM..Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Helene 0.18.0~12072b5f
These violent delights have violent ends.
```
```
