# SQLite on Unikraft

Build and run SQLite on Unikraft.
Follow the instructions below to set up, configure, build and run SQLite.
Make sure you installed the [requirements](../README.md#requirements).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/main/sqlite/.scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -kernel workdir/build/sqlite_qemu-x86_64 \
    -append "sqlite_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ \"HOME=/root\" ] -- /chinook.db 'SELECT * FROM Album LIMIT 10'" \
    -initrd ./initrd.cpio
```

This will configure, build and run SQLite on Unikraft.
You can see how to test it in the ["Test" section](#test).
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/main/sqlite/.scripts/defconfig/qemu.arm64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -cpu max \
    -kernel workdir/build/sqlite_qemu-arm64 \
    -append "sqlite_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ \"HOME=/root\" ] -- /chinook.db 'SELECT * FROM Album LIMIT 10'" \
    -initrd ./initrd.cpio
```

Similar to the `x86_64` build, this will configure, build and run SQLite on Unikraft.

> [!TIP]
> You can pass multiple commands like this (note the use of an external script, found in `rootfs/`):
> ```bash
> -append "sqlite_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ \"HOME=/root\" ] -- /chinook.db '.read /script.sql' '.tables' 'SELECT * FROM tab'"
> ```

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

   If you want you can use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

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
You can find the unikernel application image file in `workdir/build/sqlite_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                    Pan 0.19.1~d513663f
-- Loading resources from /root/.sqliterc
1|For Those About To Rock We Salute You|1
2|Balls to the Wall|2
3|Restless and Wild|2
4|Let There Be Rock|1
5|Big Ones|3
6|Jagged Little Pill|4
7|Facelift|5
8|Warner 25 Anos|6
9|Plays Metallica By Four Cellos|7
10|Audioslave|8
```

This means that SQLite runs on Unikraft waiting for further instructions.

> [!NOTE]
> In case an `.sqliterc` file is not found, the line `-- warning: cannot find home directory; cannot read ~/.sqliterc` is to be expected.

### Run on QEMU/x86_64

To run the Unikraft image:

```console
qemu-system-x86_64 \
   -nographic \
   -kernel workdir/build/sqlite_qemu-x86_64 \
   -append "sqlite_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ \"HOME=/root\" ] -- /chinook.db 'SELECT * FROM Album LIMIT 10'" \
   -initrd ./initrd.cpio
```

### Run on QEMU/ARM64

To run the Unikraft image:

```console
qemu-system-aarch64 \
   -nographic \
   -machine virt \
   -cpu max \
   -kernel workdir/build/sqlite_qemu-arm64 \
   -append "sqlite_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ \"HOME=/root\" ] -- /chinook.db 'SELECT * FROM Album LIMIT 10'" \
   -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

To run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

### Run on Firecracker/ARM64

To run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-aarch64 --config-file fc.arm64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as the `root` account or prefixed by `sudo`.

### Run on Xen/x86_64

To run the Unikraft image:

```console
sudo xl create -c xen.x86_64.cfg
```

You need use `sudo` or the `root` account to run Xen.

### Run on Xen/ARM64

To run the Unikraft image:

```console
sudo xl create -c xen.arm64.cfg
```

You need use `sudo` or the `root` account to run Xen.

## Test

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
sudo xl destroy sqlite
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

### Customize the Filesystem Contents

You can customize SQLite by modifying the contents of the filesystem image before running the unikernel.
The `rootfs/` directory is packaged into the initial RAM filesystem (`initrd.cpio`) and made available to SQLite at runtime. For example:

```console
rootfs/
|-- root/          # home directory for root user
|   `-- .sqliterc  # SQLite configuration file for root user
|-- chinook.db     # a SQLite database file
`-- script.sql     # an optional SQL script with statements to run
```

You can add or remove databases or scripts and customize the default SQLite behaviour within this directory.

After updating the filesystem contents, you need to [rebuild the filesystem](#build-the-filesystem) and the [run](#run) the unikernel.
No rebuild of the unikernel is necessary.

### Use a Different Filesystem Type for QEMU

You can use [`9pfs`](https://github.com/unikraft/unikraft/tree/staging/lib/9pfs) as an alternate filesystem to initrd.
Note that 9pfs does not work with Firecracker.
And it requires re-building Xen to add 9pfs support.
Below find instructions on running SQLite on QEMU with 9pfs support.

You need to use these contents for the [`Config.uk`](Config.uk) configuration file:

```text
config SQLITE
bool "Configure SQLite application with 9pfs as rootfs"
default y
        # Select lib-musl dependency.
        select LIBMUSL

        # Select application library (sqlite). Use main function in application
        # library. Other libraries, such as Musl as dependencies of SQLite.
        select LIBSQLITE
        select LIBSQLITE_MAIN_FUNCTION

        # Select filesystem core components: vfscore.
        select LIBVFSCORE
        select LIBVFSCORE_AUTOMOUNT_UP
        select LIBUK9P
        select LIB9PFS

        # Add support for environment variables. They are given as parameters
        # and used to tell SQLite where to look for the rc file.
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

Finally, use the commands below to run SQLite on QEMU/x86_64 with 9pfs support:

```console
# Create a copy of the filesystem to be mounted as 9pfs.
rm -fr 9pfs-rootfs
cp -r rootfs 9pfs-rootfs
sudo qemu-system-x86_64 \
    -nographic \
    -cpu max \
    -append "sqlite_qemu-x86_64 vfs.fstab=[ \"fs0:/:9pfs:::\" ] env.vars=[ \"HOME=/root\" ] -- /chinook.db 'SELECT * FROM Album LIMIT 10'" \
    -kernel workdir/build/sqlite_qemu-x86_64 \
    -fsdev local,id=myid,path=$(pwd)/9pfs-rootfs/,security_model=none \
    -device virtio-9p-pci,fsdev=myid,mount_tag=fs0
```

You would use a similar command for QEMU/ARM64.
