# Lua Hello on Unikraft

Build and run a Lua Hello program on Unikraft.
Follow the instructions below to set up, configure, build and run Lua Hello.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/test/lua-hello/scripts/defconfigs/qemu-x86_64-9pfs
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-x86_64 -nographic -m 64 -cpu max -kernel workdir/build/lua-hello_qemu-x86_64 \
    -fsdev local,id=myid,path=$(pwd)/fs0,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0
```

This will configure, build and run the application, resulting in a `Hello from Lua on Unikraft!` message being printed.

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/test/lua-hello/scripts/defconfigs/qemu-arm64-9pfs
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-aarch64 -nographic -machine virt -m 64 -cpu max -kernel workdir/build/lua-hello_qemu-arm64 \
    -fsdev local,id=myid,path=$(pwd)/fs0,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0
```

Similar to the `x86_64` build, this will result in a `Hello from Lua on Unikraft!` message being printed.

Information about every step and about other types of builds is detailed below.

## Set Up

Set up the required repositories.
For this, you have two options:

1. Use the `setup.sh` script:

   ```console
   ./setup.sh
   ```

   It will clone the required repositories (`unikraft`, `lib-lua`, `lib-musl`) into `workdir/`.
   Be sure to run the [top-level `setup.sh` script](../setup.sh).

   If you want to use a custom variant of repositories (e.g. apply your own patch, make modifications), update them accordingly in the `workdir/` directory.

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

In the console menu interface, choose the target architecture (x86_64 or ARMv8) and platform (KVM/QEMU).

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/lua-hello_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`), and `<arch>` is the architecture (`x86_64` or `arm64`).

### Use a Different Compiler

If you want to use a different compiler, such as Clang or a different GCC version, pass the `CC` variable to `make`.

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

Note that GCC >= 8 is required to build Unikraft. GCC 12 is recommended.

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

A successful run will show a message such as the one below:

```text
Booting from ROM..Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~5d38d108
Hello from Lua on Unikraft!
```

### Run on QEMU/x86_64 with 9pfs

```console
qemu-system-x86_64 \
    -nographic -m 64 -cpu max \
    -kernel workdir/build/lua-hello_qemu-x86_64 \
    -fsdev local,id=myid,path=$(pwd)/fs0,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0
```

To run a Lua script directly, append its path as a kernel argument:

```console
qemu-system-x86_64 \
    -nographic -m 64 -cpu max \
    -kernel workdir/build/lua-hello_qemu-x86_64 \
    -fsdev local,id=myid,path=$(pwd)/fs0,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0 \
    -append "/hello.lua"
```

### Run on QEMU/x86_64 with initrd

```console
qemu-system-x86_64 \
    -nographic -m 64 -cpu max \
    -kernel workdir/build/lua-hello_qemu-x86_64 \
    -initrd workdir/build/fs0.cpio \
    -append "/hello.lua"
```

### Run on QEMU/ARM64 with 9pfs

```console
qemu-system-aarch64 \
    -nographic -machine virt -m 64 -cpu max \
    -kernel workdir/build/lua-hello_qemu-arm64 \
    -fsdev local,id=myid,path=$(pwd)/fs0,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0
```

### Run on Firecracker/x86_64

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

## Clean Up

Doing a new configuration, or a new build may require cleaning up the configuration and build artifacts.

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

### Update the Unikraft Core Code

If updating the Unikraft core code in the `./workdir/unikraft/` directory, you then go through the [configure](#configure), [build](#build) and [run](#run) steps.

### Add Lua Scripts

Place your `.lua` scripts in the `fs0/` directory. They will be available inside the VM at the root path (`/`).

For example, to run `fs0/myscript.lua`:

```console
qemu-system-x86_64 \
    -nographic -m 64 -cpu max \
    -kernel workdir/build/lua-hello_qemu-x86_64 \
    -fsdev local,id=myid,path=$(pwd)/fs0,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0 \
    -append "/myscript.lua"
```

### Add Libraries

It may be the case that you want to add a library to the build.
If that is the case, update the `UK_LIBS` variable in the [`Makefile`](Makefile).

For example, to add the LWIP library, add the [corresponding `lib-lwip` repository](https://github.com/unikraft/lib-lwip) to `workdir/libs/`:

```console
git clone https://github.com/unikraft/lib-lwip workdir/libs/lwip
```

Then update the `LIBS` line in the [`Makefile`](Makefile) to:

```make
LIBS := $(UK_LIBS)/musl:$(UK_LIBS)/lua:$(UK_LIBS)/lwip
```

Then go through the [configure](#configure), [build](#build) and [run](#run) steps.
