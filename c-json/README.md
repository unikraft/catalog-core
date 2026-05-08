# C JSON on Unikraft

Build and run a C JSON parsing and generation program on Unikraft using [cJSON](https://github.com/DaveGamble/cJSON).
Follow the instructions below to set up, configure, build and run C JSON.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/c-json/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel workdir/build/c-json_qemu-x86_64
```

This will configure, build and run the application, resulting in a JSON object being generated, serialized, parsed back, and verified.

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/c-json/scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-aarch64 -nographic -machine virt -m 8 -cpu max -kernel workdir/build/c-json_qemu-arm64
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

In the console menu interface, choose the target architecture (x86_64 or ARMv8) and platform (Xen or KVM/QEMU or KVM/Firecracker).

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/c-json_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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

Note that GCC >= 8 is required to build Unikraft.

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
                 Kiviuq 0.20.0~991b6bf6
Generated JSON:
{
        "name": "Unikraft",
        "version":      17,
        "fast": true,
        "features":     ["lightweight", "secure", "portable"]
}
Parsed name: Unikraft
Parsed version: 17
Parse OK!
```

### Run on QEMU/x86_64

```console
qemu-system-x86_64 -nographic -m 8 -cpu max -kernel workdir/build/c-json_qemu-x86_64
```

### Run on QEMU/ARM64

```console
qemu-system-aarch64 -nographic -machine virt -m 8 -cpu max -kernel workdir/build/c-json_qemu-arm64
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

## Known Limitations

Building for Xen/ARM64 is not supported.
cJSON uses floating-point arithmetic (`double`) for number handling, which is incompatible with the `-mgeneral-regs-only` restriction imposed by the Xen ARM64 platform.

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

### Add Other Source Code Files

The current configuration uses two source files: `main.c` and `cJSON.c`.
If looking to add another file to the build, update the [`Makefile.uk`](Makefile.uk) file.

For example, to add a new file `support.c` to the build, update the [`Makefile.uk`](Makefile.uk) file to:

```make
$(eval $(call addlib,appcjson))

APPCJSON_SRCS-y += $(APPCJSON_BASE)/main.c
APPCJSON_SRCS-y += $(APPCJSON_BASE)/cJSON.c
APPCJSON_SRCS-y += $(APPCJSON_BASE)/support.c
```

Then go through the [configure](#configure), [build](#build) and [run](#run) steps.
