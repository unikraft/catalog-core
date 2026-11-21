# Linux Binary-Compatible Lua Hello on Unikraft

Build and run a Lua 5.4.4 script using the unmodified Linux `lua` binary and the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-basic` as its base, make sure to check its [README](../elfloader-basic/README.md) for more information.
Follow the instructions below to set up, build, and run Lua Hello.
Make sure you installed the [requirements](../README.md#requirements).
Docker is required to build the root filesystem.

At this time, this application is only compatible with QEMU and Firecracker on the x86_64 platform.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

```console
./setup.sh
./.scripts/build/rootfs.x86_64
./.scripts/build/kernel.qemu.x86_64
./.scripts/run/qemu.x86_64
```

This will build the root filesystem, build the `elfloader-basic` kernel and run the Unikraft ELF Loader with the Linux `lua` binary, executing `hello.lua`.
After the output is printed to the console, the machine should automatically terminate.

If you encounter a bug which prevents the virtual machine from stopping, see the instructions in the ["Forcefully Terminating a Machine" section](#forcefully-terminating-a-machine).

Information about every step is detailed below.

## Prepare the Linux ELF

The Linux ELF is the `lua` interpreter from Debian bookworm (package `lua5.4`, version `5.4.4-3+deb12u1`).
The script to run is `hello.lua`.

The `Dockerfile` does the following:

1. In a Debian bookworm build stage, it installs the pinned `lua5.4` package, copies the binary to `/usr/bin/lua` and copies the shared libraries reported by `ldd` (`libreadline`, `libm`, `libc`, `libtinfo`, and the dynamic loader `ld-linux-x86-64.so.2`), together with `/etc/ld.so.cache`.
1. In the final `scratch` stage, it adds `hello.lua` as `/src/hello.lua`.

## Set Up

Set up the required repositories:

```console
./setup.sh
```

It will create symbolic links to the required repositories in `../repos/`.
Be sure to run the [top-level `setup.sh` script](../setup.sh).

If you want to use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

## Build the Filesystem

The filesystem is exported from the Docker image and packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the script below for that:

```console
./.scripts/build/rootfs.x86_64
```

It is equivalent to:

```console
rm -rf rootfs rootfs.tar initrd.cpio
mkdir rootfs
docker build -t unikraft-lua-fs .
docker container create --name unikraft-lua-container unikraft-lua-fs sh
docker export unikraft-lua-container -o rootfs.tar
tar xf rootfs.tar -C rootfs/
docker container rm unikraft-lua-container
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

To check that the script works on Linux, before running it on Unikraft:

```console
docker run --rm -v "$PWD/rootfs:/r" debian:bookworm chroot /r /usr/bin/lua /src/hello.lua
```

## Build the Kernel

The kernel is the one from `elfloader-basic`.
Build it for QEMU with:

```console
./.scripts/build/kernel.qemu.x86_64
```

This runs `make distclean` and a fresh build in `../elfloader-basic`, so it may take a few minutes.
The linker prints a number of `deprecated` warnings; they have no effect on the build.
The resulting kernel is `workdir/base/build/elfloader_qemu-x86_64`.

To build both the filesystem and the kernel in one step:

```console
./.scripts/build/qemu.x86_64
```

### Use a Different Compiler

If you want to use a different compiler, pass the `CC` variable to the build scripts:

```console
CC=/usr/bin/gcc-12 ./.scripts/build/qemu.x86_64
CC=/usr/bin/clang ./.scripts/build/qemu.x86_64
```

Note that Clang >= 14 or GCC >= 8 is required to build Unikraft.

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
                 Ijiraq 0.21.0~a4c494e8
Hello from Lua on Unikraft!
Lua 5.4
sum=5050 pi=3.14
```

This means that the ELF Loader loaded and ran successfully the `lua` binary in `rootfs/`.
The version in the banner may differ depending on the Unikraft version in `../repos/`.

### Run on QEMU/x86_64

```console
./.scripts/run/qemu.x86_64
```

or, equivalently:

```console
qemu-system-x86_64 \
    -nographic \
    -m 256 \
    -cpu max \
    -append "elfloader_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/bin/lua /src/hello.lua" \
    -kernel "workdir/base/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

Note that you must build the `elfloader-basic` Firecracker kernel before this step:

```console
./.scripts/build/fc.x86_64
```

Then run:

```console
./.scripts/run/fc.x86_64
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the command above as root or prefixed by `sudo`.

### Forcefully Terminating a Machine

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

## Test

Use the `all.sh` script to test all builds and all available runs:

```console
./.scripts/test/all.sh
```

Logs are stored in the `./.scripts/test/log/` directory.
See the [test README](.scripts/test/README.md) for more information.

## Clean Up

To remove the generated filesystem artifacts:

```console
rm -rf rootfs rootfs.tar initrd.cpio
```

To clean the kernel build:

```console
make -C ../elfloader-basic distclean
```

## Customize

### Dynamic Linking

The `lua` binary is dynamically linked, unlike the statically-linked binary in `bincompat-c-hello`.
The `elfloader` layer supports dynamically-linked executables if the shared libraries are placed in the appropriate locations within the root filesystem, including the dynamic loader `/lib64/ld-linux-x86-64.so.2`.
The `Dockerfile` copies them using the output of `ldd`.

For more details, check out [this document](https://github.com/unikraft/app-elfloader/blob/3bb91cc6f4305f9fb75f137ca86c5c8ca7abdd41/README.md#executing-elf-binaries).

### Run Other Lua Scripts

1. Add your script next to `hello.lua` and add a `COPY` line for it in the `Dockerfile`.
1. Rebuild the filesystem with `./.scripts/build/rootfs.x86_64`.
1. Replace `/src/hello.lua` in the `-append` argument of `.scripts/run/qemu.x86_64` (and in `fc.x86_64.json`) with the path to your script.

Scripts that need additional Lua modules (such as networking libraries) are not covered by this application and may require a different kernel configuration.
