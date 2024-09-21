# C Hello on Unikraft

Build and run a C Hello program on Unikraft.
Follow the instructions below to set up, configure, build and run C Hello.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).

To build and run the application for `x86_64`, use the commands below:

```console
test -d ../repos/unikraft || git clone https://github.com/unikraft/unikraft ../repos/unikraft
make distclean
echo -e 'CONFIG_PLAT_KVM=y\nCONFIG_PLAT_KVM_VMM_QEMU=y\nCONFIG_ARCH_X86_64=y' > /tmp/defconfig
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel out/c-hello_qemu-x86_64
```

This will configure, build and run the application, resulting in a `Hello from Unikraft!` message being printed.

To do the same for `AArch64`, run the commands below:

```console
test -d ../repos/unikraft || git clone https://github.com/unikraft/unikraft ../repos/unikraft
make distclean
echo -e 'CONFIG_PLAT_KVM=y\nCONFIG_PLAT_KVM_VMM_QEMU=y\nCONFIG_ARCH_ARM_64=y' > /tmp/defconfig
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-aarch64 -nographic -machine virt -m 8 -cpu max -kernel out/c-hello_qemu-arm64
```

Similar to the `x86_64` build, this will result in a `Hello from Unikraft!` message being printed.

Information about every step and about other types of builds is detailed below.

## Set Up

Set up the [`unikraft` repository](https://github.com/unikraft/unikraft).
Clone it in `../repos/unikraft/` if not already cloned:

```console
test -d ../repos/unikraft || git clone https://github.com/unikraft/unikraft ../repos/unikraft
```

If you want to patch, use another branch or update the `unikraft` repository, enter the `../repos/unikraft/` directory and make the required changes.

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

This results in the creation of the `out/` directory storing the build artifacts.
The unikernel application image file is `out/c-hello_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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

## Clean Up

Doing a new configuration, or a new build may require cleaning up the configuration and build artifacts.

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
Xen requires a system with Xen installed.

### Run on QEMU/x86_64

```console
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel out/c-hello_qemu-x86_64
```

### Run on QEMU/ARM64

```console
qemu-system-aarch64 -nographic -machine virt -m 8 -cpu max -kernel out/c-hello_qemu-arm64
```

### Run on Firecracker/x86_64

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

### Run on Firecracker/ARM64

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
