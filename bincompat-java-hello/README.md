# Java Hello on Unikraft

Build and run the Java Hello with the ELF Loader. The ELF Loader uses the Unikraft binary-compatibility layer in order to run native Linux binaries (ELFs) with Unikraft. The ELF has to be PIE (Position-Independent Executable), either static or dynamic.
The ELF has to be PIE (*Position-Independent Executable*), either static or dynamic.

Follow the instructions below to set up, configure, build and run the ELF Loader.
Make sure you installed the [requirements](../README.md#requirements).

The Unikraft ELF Loader currently runs on x86_64 (ARM64 work is underway) and on KVM (QEMU and Firecracker) (Xen work is underway).

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To extract, build and run a Hello Linux ELF using the Unikraft ELF Loader, use the commands below:

```console
./setup.sh
mkdir rootfs
docker build -t unikraft-java-fs .
docker container create --name unikraft-java-container unikraft-java-fs sh
docker export unikraft-java-container -o rootfs.tar
tar xvf rootfs.tar -C rootfs/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
make distclean
wget -O /tmp/defconfig https://raw.githubusercontent.com/unikraft/catalog-core/refs/heads/main/bincompat-java-hello/.scripts/defconfig/qemu.x86_64
UK_DEFCONFIG=/tmp/defconfig make defconfig
make -j $(nproc)
qemu-system-x86_64 \
    -nographic \
    -m 2048 \
    -cpu max \
    -append "java-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/lib/jvm/java-17-openjdk-amd64/bin/java /usr/src/hello" \
    -kernel workdir/build/java-hello_qemu-x86_64 \
    -initrd ./initrd.cpio
```

This will configure, build and run the Unikraft ELF Loader with a Java Hello.
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

Information about every step and about other types of builds is detailed below.

## Prepare the Linux ELF

Extract the rootfs and build the filesystem to be used by the ELF Loader using:

```console
mkdir rootfs
docker build -t unikraft-java-fs .
docker container create --name unikraft-java-container unikraft-java-fs sh
docker export unikraft-java-container -o rootfs.tar
tar xvf rootfs.tar -C rootfs/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

A docker image will be created, and the filesystem will be extracted.
The resulting filesystem will be packed in an initial ramdisk CPIO file and will be passed to the ELF Loader at runtime.

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

In the console menu interface chose the platform (KVM/QEMU or KVM/Firecracker).

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/java-hello_<plat>-x86_64`, where `<plat>` is the platform name (`qemu`, `fc`).

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
mkdir rootfs
docker build -t unikraft-java-fs .
docker container create --name unikraft-java-container unikraft-java-fs sh
docker export unikraft-java-container -o rootfs.tar
tar xvf rootfs.tar -C rootfs/
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

A successful run will show a message such as the one below:

```text
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                Calypso 0.17.0~de0e3519
...
[    1.121866] CRIT: [libukvmem] <pagefault.c @   43> Cannot handle write page fault at 0x.
[    1.124195] CRIT: [libkvmplat] <trace.c @   41> RIP: 00000010010a32c5 CS: 0008
[    1.125026] CRIT: [libkvmplat] <trace.c @   42> RSP: 00000010000fa640 SS: 0010 EFLAGS: 7
[    1.126135] CRIT: [libkvmplat] <trace.c @   44> RAX: 0000001000105000 RBX: 00000010000f0
[    1.127254] CRIT: [libkvmplat] <trace.c @   46> RDX: 0000000000001574 RSI: 0000001001530
[    1.128373] CRIT: [libkvmplat] <trace.c @   48> RBP: 00000010000fa6b0 R08: 0000000000007
[    1.129587] CRIT: [libkvmplat] <trace.c @   50> R10: 0000000400a00340 R11: 242e37b03a1c0
[    1.130681] CRIT: [libkvmplat] <trace.c @   52> R13: 00000010000fa650 R14: 00000010000f0
[    1.131797] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fa6b0 caller is 0x10010a9
[    1.132863] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fa6d0 caller is 0x1001335
[    1.133907] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fa6f0 caller is 0x1001333
[    1.134919] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fa8b0 caller is 0x1000d53
[    1.135923] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fa950 caller is 0x1000123
[    1.136923] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fa9e0 caller is 0x1000138
[    1.137924] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000faa60 caller is 0x1000131
[    1.138934] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fab10 caller is 0x100013a
[    1.139927] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000febf0 caller is 0x1000101
[    1.140962] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fec80 caller is 0x10001ca
[    1.141981] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fed20 caller is 0x10001cb
[    1.142993] CRIT: [libkvmplat] <trace.c @   86> base is 0x10000fed80 caller is 0x1000105
[    1.144037] CRIT: [libkvmplat] <trace.c @   66> 
[    1.144710] CRIT: [libkvmplat] <trace.c @   66> 10000fa630: b0 a6 0f 00 10 00 00 00 97 0
[    1.147030] CRIT: [libkvmplat] <trace.c @   66> 10000fa640: df a8 0f 00 10 00 00 00 00 0
[    1.149355] CRIT: [libkvmplat] <trace.c @   66> 10000fa650: 00 00 00 00 00 00 00 00 08 0
[    1.151691] CRIT: [libkvmplat] <trace.c @   66> 10000fa660: 00 00 00 00 00 00 00 00 00 0
[    1.154012] CRIT: [libkvmplat] <trace.c @   66> 
[    1.154689] CRIT: [libkvmplat] <trace.c @   66> 10000fa6a0: 60 0e a3 00 04 00 00 00 40 0
[    1.156985] CRIT: [libkvmplat] <trace.c @   66> 10000fa6b0: d0 a6 0f 00 10 00 00 00 99 0
[    1.159294] CRIT: [libkvmplat] <trace.c @   66> 10000fa6c0: d0 19 a3 00 04 00 00 00 60 0
[    1.161601] CRIT: [libkvmplat] <trace.c @   66> 10000fa6d0: f0 a6 0f 00 10 00 00 00 45 0
[    1.163912] CRIT: [libkvmplat] <trace.c @   66> 
[    1.164599] CRIT: [libkvmplat] <trace.c @   66> 10010a32b0: 00 ba 74 15 00 00 48 8d 35 0
[    1.166921] CRIT: [libkvmplat] <trace.c @   66> 10010a32c0: 00 e0 48 8b 00 c6 00 58 31 0
[    1.169233] CRIT: [libkvmplat] <trace.c @   66> 10010a32d0: 4c 8d 05 b8 cf 43 00 b9 02 0
[    1.171568] CRIT: [libkvmplat] <trace.c @   66> 10010a32e0: be 72 15 00 00 48 8d 3d fc b
[    1.173884] CRIT: [libkvmplat] <traps.c @  113> Crashing
```
Java is currently unsuported by Unikraft and that's why the errors appear.

This means that the ELF Loader loaded and ran successfully the `java hello` binary in `rootfs/`.

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 2048 \
    -cpu max \
    -append "java-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/lib/jvm/java-17-openjdk-amd64/bin/java /usr/src/hello" \
    -kernel workdir/build/java-hello_qemu-x86_64 \
    -initrd ./initrd.cpio
```

## Close

Currently the ELF Loader doesn't have implemented a shutdown mechanism.
So, after the Linux ELF ends execution, the virtual machine is left hanging.

### Close QEMU

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

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

### Use Other ELFs

The current setup uses a Java Hello Linux ELF created from the `rootfs/java-app/hello` program.

You can also try to run other Java programs using their path.

For QEMU, this means using the command:

```console
qemu-system-x86_64 \
    -nographic \
    -m 2048 \
    -cpu max \
    -append "java-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/lib/jvm/java-17-openjdk-amd64/bin/java /usr/src/hello" \
    -kernel workdir/build/java-hello_qemu-x86_64 \
    -initrd ./initrd.cpio
```

That is, replacing `-append "... hello"` with `-append "... path"`.

For other ELFs, you need to follow the steps:

1. Add / Build ELF in the `rootfs/` directory.
1. Update the start command as above with the command to run the ELF.
   The command can also have arguments, similar to any other Linux command.

### Enable Debug Messages

You can customize the Java Hello build debug messages.
For that, use the ["Configure" step](#configure) enable the [`ukdebug` library](https://github.com/unikraft/unikraft/tree/staging/lib/ukdebug) and its other options.
Then, build and run again.
