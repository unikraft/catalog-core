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

To build and run the application for x86_64, use:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig \
     https://raw.githubusercontent.com/unikraft/app-lua/stable/defconfigs/qemu-x86_64-initrd
# „defconfigs” conține printre altele fișierul qemu-x86_64-initrd :contentReference[oaicite:0]{index=0}
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
  -nographic \
  -m 32 \
  -cpu max \
  -kernel workdir/build/lua_qemu-x86_64 \
  -append "lua_qemu-x86_64 vfs.fstab=[\"initrd0:/:extract::ramfs=1:\"] -- /helloworld.lua" \
  -initrd ./initrd.cpio


```

This will configure, build and run the Lua app, printing “Hello, World!” from helloworld.lua.

To do the same for AArch64, run:

```console
make distclean
wget -O /tmp/defconfig \
  https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/lua/scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-aarch64 -nographic -machine virt -m 128 -cpu max \
  -kernel workdir/build/applua_fc-arm64
```

Similar to the x86_64 build, this will print “Hello, World!” on ARM64.

Information about every step and other build types is detailed below.

## Set Up

Set up the required repositories. You have two options:

Use the setup.sh script:

```console
./setup.sh
```

It will clone/link lib-lua and any other needed libs under repos/libs/.

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

Select the Architecture (x86_64 or ARM64), then platform (QEMU, Firecracker, Xen), and save to produce the `.config` file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This produces the unikernel at `workdir/build/applua_<plat>-<arch>`.

## Run

Run the resulting image using the corresponding platform tool.

### QEMU/x86_64

```console
qemu-system-x86_64 -nographic -m 128 -cpu max \
  -kernel workdir/build/applua_qemu-x86_64
```

### QEMU/ARM64

```console
qemu-system-aarch64 -nographic -machine virt -m 128 -cpu max \
  -kernel workdir/build/applua_fc-arm64
```

### Firecracker/x86_64

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

### Firecracker/ARM64

```console
rm -f firecracker.socket
firecracker-aarch64 --config-file fc.arm64.json --api-sock firecracker.socket
```

### Xen/x86_64

```console
sudo xl create -c xen.x86_64.cfg
```

### Run on Xen/x86_64

```console
sudo xl create -c xen.x86_64.cfg
```

You need use `sudo` or the `root` account to run Xen.

### Run on Xen/ARM64

```console
sudo xl create -c xen.arm64.cfg
```

You need use `sudo` or the `root` account to run Xen.

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
