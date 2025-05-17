# Lua 5.4 on Unikraft

Build and run a Lua 5.4 program on Unikraft.
Follow the instructions below to set up, configure, build and run Lua.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the top-level `setup.sh` script:

```console
./setup.sh
```

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig \
     https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/lua/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
test -d ./rootfs/ || docker build -o ./rootfs -f Dockerfile .
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
  -nographic \
  -m 32 \
  -cpu max \
  -kernel workdir/build/lua_qemu-x86_64 \
  -append "lua_qemu-x86_64 vfs.fstab=[\"initrd0:/:extract::ramfs=1:\"] -- /helloworld.lua" \
  -initrd ./initrd.cpio
```

This will configure, build and run the Helloworld Lua app, printing "Hello, World!".

To do the same for AArch64, run:

```console
make distclean
wget -O /tmp/defconfig \
  https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/lua/scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
test -d ./rootfs/ || docker build -o ./rootfs -f Dockerfile .
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-aarch64 \
  -machine virt \
  -nographic \
  -m 128 \
  -cpu max \
  -kernel workdir/build/lua_qemu-arm64 \
  -append "lua_qemu-arm64 vfs.fstab=[\"initrd0:/:extract::ramfs=1:\\"] -- /helloworld.lua" \
  -initrd ./initrd.cpio
```

Similar to the x86_64 build, this will print "Hello, World!" on ARM64.

Information about every step and other build types is detailed below.

## Set Up

Set up the required repositories.
You have two options:

Use the setup.sh script:

```console
./setup.sh
```

It will clone/link `lib-lua` and any other needed libs under `repos/libs/.`

Manual setup:

```console
test -d repos/libs/lua || \
  git clone https://github.com/unikraft/lib-lua repos/libs/lua
```

## Clean

While not strictly required, it is safest to clean previous build artifacts:

```console
make distclean
```

## Configure

To configure the kernel, use:

```console
make menuconfig
```

Select the Architecture (`x86_64` or `ARM64`), then platform (`QEMU`, `Firecracker`, `Xen`), and save to produce the `.config` file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.

This produces the unikernel at `workdir/build/lua_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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

This means that Lua runs on Unikraft and waiting for connections.

### Run on QEMU/x86_64

To set up networking, use the command below:

```console
qemu-system-x86_64 \
  -nographic \
  -m 32 \
  -cpu max \
  -kernel workdir/build/lua_qemu-x86_64 \
  -append "lua_qemu-x86_64 vfs.fstab=[\"initrd0:/:extract::ramfs=1:\"] -- /helloworld.lua" \
  -initrd ./initrd.cpio
```

### Run on QEMU/ARM64

To set up networking, use the command below:

```console
qemu-system-aarch64 \
  -machine virt \
  -nographic \
  -m 128 \
  -cpu max \
  -kernel workdir/build/lua_qemu-arm64 \
  -append "lua_qemu-arm64 vfs.fstab=[\"initrd0:/:extract::ramfs=1:\\"] -- /helloworld.lua" \
  -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

To set up networking, use the command below:

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

### Run on Firecracker/ARM64

To set up networking, use the command below:

```console
rm -f firecracker.socket
firecracker-aarch64 --config-file fc.arm64.json --api-sock firecracker.socket
```

### Run on Xen/x86_64

To set up networking, use the command below:

```console
sudo xl create -c xen.x86_64.cfg
```

You need use `sudo` or the `root` account to run Xen.

### Run on Xen/ARM64

To set up networking, use the commands below:

```console
sudo xl create -c xen.arm64.cfg
```

You need use `sudo` or the `root` account to run Xen.

## Clean Up

To remove build artifacts only:

```console
make clean
```

To remove fetched files and the entire `workdir/build/` directory:

```console
make properclean
```

To remove the generated `.config` file as well:

```console
make distclean
```

## Customize

### Customize the Filesystem Contents

The Lua example’s filesystem is under `rootfs/`.
You can update scripts or add files here:

```text
rootfs/
`-- helloworld.lua
```

After modifying `rootfs/`, rebuild just the filesystem:

```console
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

No unikernel rebuild is needed.