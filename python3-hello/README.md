# Python3 Hello on Unikraft

Build and run a Python3 Hello program on Unikraft.
Follow the instructions below to set up, configure, build and run Python3 Hello.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
> /tmp/defconfig echo 'CONFIG_PLAT_KVM=y
CONFIG_KVM_VMM_QEMU=y
CONFIG_ARCH_X86_64=y
CONFIG_LIBPYTHON3=y
CONFIG_LIBPYTHON3_MAIN_FUNCTION=y
CONFIG_LIBVFSCORE=y
CONFIG_LIBVFSCORE_AUTOMOUNT_UP=y
CONFIG_LIBRAMFS=y
CONFIG_LIBUKCPIO=y
CONFIG_STACK_SIZE_PAGE_ORDER=10
CONFIG_LIBPOSIX_ENVIRON=y
CONFIG_LIBPOSIX_ENVIRON_LIBPARAM=y'
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
test -d ./rootfs/ || docker build -o ./rootfs -f Dockerfile .
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 256 \
    -cpu max \
    -append "python3-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ PYTHONPATH=\"/usr/local/lib/python3.10:/usr/local/lib/python3.10/site-packages\" ] -- /app/hello.py" \
    -kernel workdir/build/python3-hello_qemu-x86_64 \
    -initrd ./initrd.cpio
```

This will configure, build and run Python3 Hello on Unikraft.
You can see how to test it in the ["Test" section](#test).
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
> /tmp/defconfig echo 'CONFIG_PLAT_KVM=y
CONFIG_KVM_VMM_QEMU=y
CONFIG_ARCH_ARM_64=y
CONFIG_LIBPYTHON3=y
CONFIG_LIBPYTHON3_MAIN_FUNCTION=y
CONFIG_LIBVFSCORE=y
CONFIG_LIBVFSCORE_AUTOMOUNT_UP=y
CONFIG_LIBRAMFS=y
CONFIG_LIBUKCPIO=y
CONFIG_STACK_SIZE_PAGE_ORDER=10
CONFIG_LIBPOSIX_ENVIRON=y
CONFIG_LIBPOSIX_ENVIRON_LIBPARAM=y
CONFIG_ARM64_ERRATUM_858921=n
CONFIG_ARM64_ERRATUM_835769=n
CONFIG_ARM64_ERRATUM_843419=n'
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
test -d ./rootfs/ || docker build -o ./rootfs -f Dockerfile .
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 256 \
    -cpu max \
    -append "python3-hello_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ PYTHONPATH=\"/usr/local/lib/python3.10:/usr/local/lib/python3.10/site-packages\" ] -- /app/hello.py" \
    -kernel workdir/build/python3-hello_qemu-arm64 \
    -initrd ./initrd.cpio
```

Similar to the `x86_64` build, this will configure, build and run Python3 Hello on Unikraft.

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
After choosing the target architecture and the platform, go back to the `Architecture Selection` menu entry and update the `Stack size page order` to `10`.
Then save the configuration.

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/python3-hello_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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

First create the root filesystem from the [`Dockerfile`](Dockerfile) into the `./rootfs/` directory:

```console
rm -fr ./rootfs
docker build -o ./rootfs -f Dockerfile .
```

Then pack the `./rootfs/` directory in the `initrd.cpio` file:

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
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~ca507107
Hello from Unikraft!
```

This means that Python3 Hello runs on Unikraft.

The shutdown mechanism doesn't currently work for Python3;
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 256 \
    -cpu max \
    -append "python3-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ PYTHONPATH=\"/usr/local/lib/python3.10:/usr/local/lib/python3.10/site-packages\" ] -- /app/hello.py" \
    -kernel workdir/build/python3-hello_qemu-x86_64 \
    -initrd ./initrd.cpio
```

### Run on QEMU/ARM64

```console
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 256 \
    -cpu max \
    -append "python3-hello_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ PYTHONPATH=\"/usr/local/lib/python3.10:/usr/local/lib/python3.10/site-packages\" ] -- /app/hello.py" \
    -kernel workdir/build/python3-hello_qemu-arm64 \
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

## Close

The shutdown mechanism doesn't currently work with Python3.
So the virtual machine is left hanging after printing the Hello message.
Closing the virtual machine depends on the platform.

### Close QEMU

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

### Close Firecracker

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

### Close Xen

To close the Xen virtual machine, open another console and use the command:

```console
sudo xl destroy python3-hello
```

## Clean Up

Doing a new configuration, or a new build, may require cleaning up the configuration and build artifacts.

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

### Use a Different Application

The current program is [`hello.py`](hello.py), a simple Hello-printing Python3 program.

In order to use another program, potentially comprising of multiple source code files, do the following:

1. Create the corresponding Python3 source code files.
   Ideally, test them locally.

1. Update the `COPY` command in the [`Dockerfile`](Dockerfile) to copy all source code files.

1. Update the command line arguments for starting the virtual machine, to use the new command line arguments instead of `-- /app/hello.py`.
   For QEMU this means updating the `qemu-system-x86_64` or `qemu-system-aarch64` command line.
   For Firecracker this means updating the `fc.x86_64.json` or the `fc.arm64.json` file.
   For Xen this means updating the `xen.x86_64.cfg` or the `xen.arm64.cfg` file.

### Use a Different Python Filesystem

Based on the [`Dockerfile`](Dockerfile), the application uses a filesystem for version `3.10.11` of Python.
This is because the Python interpreter build is for `3.10.11`, as seen [in the `Makefile.uk` for `unikraft/lib-python3`](https://github.com/unikraft/lib-python3/blob/staging/Makefile.uk#L54).

You can use another filesystem for another Python version, while still using the Python interpreter build for `3.10.11`.
For example, to use the filesystem for Python `3.12.7`, do the following:

1. Update the [`Dockerfile`](Dockerfile) to use `FROM python:3.12.7 ...`.

1. Update the `COPY --from=base` line in the [`Dockerfile`](Dockerfile) to use `python3.12` instead of `python3.10`.

1. Update the command line arguments for starting the virtual machine, to use an updated value for the `PYTHONPATH` environment variable.
   As above, use `python3.12` instead of `python3.10`.

### Use a Different Filesystem Type for QEMU

You can use [`9pfs`](https://github.com/unikraft/unikraft/tree/staging/lib/9pfs) as an alternate filesystem to initrd.
Note that 9pfs does not work with Firecracker.
And it requires re-building Xen to add 9pfs support.
Below find instructions on running Python3 Hello on QEMU with 9pfs support.

You need to use these contents for the [`Config.uk`](Config.uk) configuration file:

```text
config APPPYTHON3
bool "Configure Python3 Hello application with initrd as rootfs"
default y
        select LIBPYTHON3
        select LIBPYTHON3_MAIN_FUNCTION
        select LIBVFSCORE
        select LIBVFSCORE_AUTOMOUNT_UP
        select LIBUK9P
        select LIB9PFS
        select LIBPOSIX_ENVIRON
        select LIBPOSIX_ENVIRON_LIBPARAM
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

Now go through the [configure](#configure) and [build](#build) steps.

Finally, after configuring networking, use the commands below to run Python3 Hello on QEMU/x86_64 with 9pfs support:

```console
# Create a copy of the filesystem to be mounted as 9pfs.
rm -fr ./9pfs-rootfs
cp -r ./rootfs ./9pfs-rootfs

qemu-system-x86_64 \
    -nographic \
    -m 256 \
    -cpu max \
    -fsdev local,id=myid,path=$(pwd)/9pfs-rootfs/,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0 \
    -append "python3-hello_qemu-x86_64 vfs.fstab=[ \"fs0:/:9pfs:::\" ] env.vars=[ PYTHONPATH=\"/usr/local/lib/python3.10:/usr/local/lib/python3.10/site-packages\" ] -- /app/hello.py" \
    -kernel workdir/build/python3-hello_qemu-x86_64
```

You would use a similar command for QEMU/ARM64.
