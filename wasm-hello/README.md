# WASM Hello World on Unikraft

Build and run a WebAssembly (Wasm) hello world program on Unikraft.
This program runs inside an iwasm Intel runtime environment, which is a lightweight WebAssembly runtime designed for efficient execution of WebAssembly modules.
Follow the instructions below to set up, configure, build and run the program.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/wasm-hello/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 16 \
    -cpu max \
    -kernel workdir/build/wasm-hello_qemu-x86_64 \
    -append "wasm-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- main.wasm" \
    -initrd ./initrd.cpio
```

This will configure, build and run the application, resulting in a

```text
Hello world!
buf ptr: 0x400002b0
buf: 1234
```

message being printed.

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/wasm-hello/scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 32 \
    -cpu max \
    -kernel workdir/build/wasm-hello_qemu-arm64 \
    -append "wasm-hello_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- hello.wasm" \
    -initrd ./initrd.cpio
```

Similar to the `x86_64` build, this will result in a

```text
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                          Helene 0.18.0
Hello world!
buf ptr: 0x400002b0
buf: 1234
```

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
The unikernel application image file is `workdir/build/wasm-hello_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

```console
$(nproc)
```

this uses all availble cpu cores to run the build process.

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
Booting from ROM..Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                          Helene 0.18.0
Hello world!
buf ptr: 0x400002b0
buf: 1234
```

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 16 \
    -cpu max \
    -kernel workdir/build/wasm-hello-x86_64 \
    -append "wasm-hello-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- main.wasm" \
    -initrd ./initrd.cpio
```

### Run on QEMU/ARM64

```console
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 16 \
    -cpu max \
    -kernel workdir/build/wasm-hello-arm64 \
    -append "wasm-hello-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- main.wasm" \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

To run with firecraker use this command. this is run with debugging in mind. Feel free to run without it.

the command below is used for dedugging perposes, feel free to omit.

```console
rm -f /tmp/firecracker.log
> /tmp/firecracker.log
```

```console
rm -f /tmp/firecracker.socket
firecracker-x86_64 \
        --api-sock /tmp/firecracker.socket \
        --config-file ./fc.x86_64.json
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

### Run on Firecracker/ARM64

the command below is used for dedugging perposes, feel free to omit.

```console
rm -f /tmp/firecracker.log
> /tmp/firecracker.log
```

```console
rm -f firecracker.socket
firecracker-aarch64 --config-file fc.arm64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as the `root` account or prefixed by `sudo`.

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

## Customize

WASM Hello is the simplest application to be run with Unikraft in web assembly.

### Update the Unikraft Core Code

If updating the Unikraft core code in the `./workdir/unikraft/` directory, you then go through the [configure](#configure), [build](#build) and [run](#run) steps.

### Enable Debug Messages

You can customize the ELF Loader build debug messages.
For that, use the ["Configure" step](#configure) to add debug printing option from the [`ukdebug` library](https://github.com/unikraft/unikraft/tree/staging/lib/ukdebug).
Then, build and run again.
You can also enable debug configurations in `/tmp/defconfig`
