# Zig Hello on Unikraft

Build and run a Zig Hello program on Unikraft.
Follow the instructions below to set up, configure, build and run Zig Hello.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64` (QEMU), use the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/zig-hello/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel workdir/build/zig-hello_qemu-x86_64
```

This will configure, build and run the application, resulting in a `Hello from Zig !` message being printed.

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/zig-hello/scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-aarch64 -nographic -machine virt -m 8 -cpu max -kernel workdir/build/zig-hello_qemu-arm64
```

Similar to the `x86_64` build, this will result in a `Hello from Zig !` message being printed.

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

2. Have your custom setup of repositories in the `workdir/` directory.
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

In the console menu interface:

1.  Choose the target architecture (`x86_64`).
1.  Choose the platform (`KVM/QEMU`).
1.  Ensure `Zig Hello` is selected.
1.  Ensure `musl` library is selected.

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/zig-hello_<plat>-<arch>`.

> [!NOTE]
> You need [`zig` installed](https://ziglang.org/learn/getting-started/) on your host machine to build this application.

## Run

Run the resulting image using the corresponding platform tool.

An example run on QEMU/x86_64:

```console
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel workdir/build/zig-hello_qemu-x86_64
```
A successful run will show a message such as the one below:

```text
Booting from ROM..Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Kiviuq 0.20.0~5a618320
Hello from Zig !
```