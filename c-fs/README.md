# C Filesystem Use on Unikraft

Build and run a C filesystem-using program on Unikraft.
It is similar to the `cat` command, printing files passed as command line arguments.
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
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/c-fs/scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -kernel workdir/build/c-fs_qemu-x86_64 \
    -append "c-fs_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello.txt" \
    -initrd ./initrd.cpio
```

This will configure, build and run the application, resulting in a `Hello from Unikraft!` message being printed, from the contents of the `rootfs/hello.txt` file.

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/scripts/c-fs/scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 8 \
    -cpu max \
    -kernel workdir/build/c-fs_qemu-arm64 \
    -append "c-fs_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello.txt" \
    -initrd ./initrd.cpio
```

Similar to the `x86_64` build, this will result in a `Hello from Unikraft!` message being printed, from the contents of the `rootfs/hello.txt` file.

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
The unikernel application image file is `workdir/build/c-fs_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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
Booting from ROM..Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~5d38d108
Hello from Unikraft!
```

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -kernel workdir/build/c-fs_qemu-x86_64 \
    -append "c-fs_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello.txt" \
    -initrd ./initrd.cpio
```

### Run on QEMU/ARM64

```console
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 8 \
    -cpu max \
    -kernel workdir/build/c-fs_qemu-arm64 \
    -append "c-fs_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /hello.txt" \
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

C Hello is the simplest application to be run with Unikraft.
This makes it ideal as a minimal testing ground for new features: it builds fast, it doesn't have dependencies.

### Update the Unikraft Core Code

If updating the Unikraft core code in the `./workdir/unikraft/` directory, you then go through the [configure](#configure), [build](#build) and [run](#run) steps.

### Add Other Source Code Files

The current configuration use a single source file: `cat.c`.
If looking to add another file to the build, update the [`Makefile.uk`](Makefile.uk) file.

For example, to add a new file `support.c` to the build, update the [`Makefile.uk`](Makefile.uk) file to:

```make
$(eval $(call addlib,appcfs))

APPCFS_SRCS-y += $(APPCFS_BASE)/cat.c
APPCFS_SRCS-y += $(APPCFS_BASE)/support.c
```

To add a new include directory, such as a local `include/` directory, update the [`Makefile.uk`](Makefile.uk) file to:

```make
$(eval $(call addlib,appcfs))

APPCFS_SRCS-y += $(APPCFS_BASE)/cat.c
CINCLUDES-y += -I$(APPCFS_BASE)/include
```

Then go through the [configure](#configure), [build](#build) and [run](#run) steps.

### Add Libraries

It may be the case that you want to add a library to the build, in order to test the library or a certain feature.
If that is the case, update the `UK_LIBS` variable in the [`Makefile`](Makefile).

For example, to add the Musl library to the build, you need to add the [corresponding `lib-musl` repository](https://github.com/unikraft/lib-musl) to `workdir/`.
You can add a symbolic link to the `../repos/libs/musl` repository:

```console
test -d workdir/libs || mkdir workdir/libs
ln -sfn ../../../repos/libs/musl workdir/libs/musl
```

Then update the `UK_LIBS` line in the [`Makefile`](Makefile) to:

```make
UK_LIBS ?= $(LIBS_BASE)/musl
```

To add another library, such as LWIP, add the [corresponding `lib-lwip` repository](https://github.com/unikraft/lib-lwip):

```console
test -d workdir/libs || mkdir workdir/libs
ln -sfn ../../../repos/libs/lwip workdir/libs/lwip
```

Then update the `UK_LIBS` line in the [`Makefile`](Makefile) to:

```make
UK_LIBS ?= $(LIBS_BASE)/musl:$(LIBS_BASE)/lwip
```

Then go through the [configure](#configure), [build](#build) and [run](#run) steps.

### Enable Debug Messages

You can customize the ELF Loader build debug messages.
For that, use the ["Configure" step](#configure) to add debug printing option from the [`ukdebug` library](https://github.com/unikraft/unikraft/tree/staging/lib/ukdebug).
Then, build and run again.

### Use a Different Filesystem Type for QEMU

You can use [`9pfs`](https://github.com/unikraft/unikraft/tree/staging/lib/9pfs) as an alternate filesystem to initrd.
Note that 9pfs does not work with Firecracker.
And it requires re-building Xen to add 9pfs support.
Below you can find instructions on running the C filesystem-using program on QEMU with 9pfs support.

You need to use these contents for the [`Config.uk`](Config.uk) configuration file:

```text
config APPCFS
bool "Configure C filesystem application with initrd as rootfs"
default y
        # Select filesystem core components: vfscore, cpio, ramfs.
        select LIBVFSCORE
        select LIBVFSCORE_AUTOMOUNT_UP
        select LIBUK9P
        select LIB9PFS
```

This means you replace these two lines in [`Config.uk`](Config.uk):

```text
        select LIBRAMFS
        select LIBUKCPIO
```

with these lines:

```text
        select LIBUK9P
        select LIB9PFS
```

Now go through the [clean up](#clean-up), [configure](#configure), and [build](#build) steps — but skip the [build the filesystem step](#build-the-filesystem-step).

#### Run on QEMU/x86_64

```console
# Create a copy of the filesystem to be mounted as 9pfs.
rm -fr 9pfs-rootfs
cp -r rootfs 9pfs-rootfs
qemu-system-x86_64 \
    -nographic \
    -m 8 \
    -cpu max \
    -kernel workdir/build/c-fs_qemu-x86_64 \
    -append "c-fs vfs.fstab=[ \"fs0:/:9pfs:::\" ] -- /hello.txt" \
    -fsdev local,id=myid,path=$(pwd)/9pfs-rootfs/,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0
```

You would use a similar command for QEMU/ARM64.
