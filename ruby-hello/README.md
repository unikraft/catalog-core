# Ruby Hello on Unikraft

Build and run a Ruby Hello program on Unikraft.
Follow the instructions below to set up, configure, build and run Ruby Hello.
Make sure you installed the [requirements](../README.md#requirements).

Note that the Ruby interpreter is not self-contained: it loads its standard library from the root filesystem at runtime.
This means the filesystem steps below are mandatory, not optional.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the application for `x86_64`, use the commands below:

```console
./setup.sh
make distclean
make menuconfig
make -j $(nproc)
test -d ./rootfs/ || docker build -o ./rootfs -f Dockerfile .
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-x86_64 \
    -nographic \
    -m 512 \
    -cpu max \
    -append "ruby-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ RUBYLIB=\"/usr/local/lib/ruby/2.6.0:/usr/local/lib/ruby/2.6.0/x86_64-linux\" ] -- /app/helloworld.rb" \
    -kernel workdir/build/ruby-hello_qemu-x86_64 \
    -initrd ./initrd.cpio
```

In the `make menuconfig` step, select `x86_64` as the architecture and `KVM guest` as the platform, then go back to the `Architecture Selection` menu entry and update the `Stack size page order` to `10`.
Ruby needs a larger stack than the default.

This will configure, build and run Ruby Hello on Unikraft.
You can see how to test it in the ["Test" section](#test).
To close the virtual machine, see the instructions in the ["Close QEMU" section](#close-qemu).

To do the same for `AArch64`, run the commands below:

```console
./setup.sh
make distclean
make menuconfig
make -j $(nproc)
test -d ./rootfs/ || docker build -o ./rootfs -f Dockerfile .
test -f initrd.cpio || ./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 512 \
    -cpu max \
    -append "ruby-hello_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ RUBYLIB=\"/usr/local/lib/ruby/2.6.0:/usr/local/lib/ruby/2.6.0/aarch64-linux\" ] -- /app/helloworld.rb" \
    -kernel workdir/build/ruby-hello_qemu-arm64 \
    -initrd ./initrd.cpio
```

Similar to the `x86_64` build, this will configure, build and run Ruby Hello on Unikraft.

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

   If you want to use a custom variant of repositories (e.g. apply your own patch, make modifications), update it accordingly in the `../repos/` directory.

1. Have your custom setup of repositories in the `workdir/` directory.
   Clone, update and customize repositories to your own needs.

Note that Ruby is built on top of Newlib and pthread-embedded, not Musl.
The library order in the [`Makefile`](Makefile) reflects the dependency order documented in [`unikraft/lib-ruby`](https://github.com/unikraft/lib-ruby): pthread-embedded, the C++ runtime libraries, Newlib, LWIP and finally Ruby itself.

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
After choosing the target architecture and the platform, go back to the `Architecture Selection` menu entry and update the `Stack size page order` to `10`.
Then save the configuration.

The end result will be the creation of the `.config` configuration file.

## Build

Build the application for the current configuration:

```console
make -j $(nproc)
```

Note that the first build also configures and builds a native Ruby interpreter on the host.
This is required by [`unikraft/lib-ruby`](https://github.com/unikraft/lib-ruby) to generate sources such as `parse.c`, `insns.inc` and `id.h`.
It makes the first build considerably longer than for other applications in this catalog.

This results in the creation of the `workdir/build/` directory storing the build artifacts.
The unikernel application image file is `workdir/build/ruby-hello_<plat>-<arch>`, where `<plat>` is the platform name (`qemu`, `fc`, `xen`), and `<arch>` is the architecture (`x86_64` or `arm64`).

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
It provides both the Ruby standard library and the application script.

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
Hello, world!
```

This means that Ruby Hello runs on Unikraft.

### Run on QEMU/x86_64

```console
qemu-system-x86_64 \
    -nographic \
    -m 512 \
    -cpu max \
    -append "ruby-hello_qemu-x86_64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ RUBYLIB=\"/usr/local/lib/ruby/2.6.0:/usr/local/lib/ruby/2.6.0/x86_64-linux\" ] -- /app/helloworld.rb" \
    -kernel workdir/build/ruby-hello_qemu-x86_64 \
    -initrd ./initrd.cpio
```

### Run on QEMU/ARM64

```console
qemu-system-aarch64 \
    -nographic \
    -machine virt \
    -m 512 \
    -cpu max \
    -append "ruby-hello_qemu-arm64 vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] env.vars=[ RUBYLIB=\"/usr/local/lib/ruby/2.6.0:/usr/local/lib/ruby/2.6.0/aarch64-linux\" ] -- /app/helloworld.rb" \
    -kernel workdir/build/ruby-hello_qemu-arm64 \
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

You need to use `sudo` or the `root` account to run Xen.

### Run on Xen/ARM64

```console
sudo xl create -c xen.arm64.cfg
```

You need to use `sudo` or the `root` account to run Xen.

## Test

The application prints a single line:

```text
Hello, world!
```

If instead you see an error such as `cannot load such file` or `no such file to load -- rubygems`, the root filesystem was not built or not passed correctly.
Check that `initrd.cpio` exists, that it was passed to the virtual machine, and that `RUBYLIB` matches the architecture you are running on.

## Close

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
sudo xl destroy ruby-hello
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

The current program is [`helloworld.rb`](helloworld.rb), a simple Hello-printing Ruby program.

In order to use another program, potentially comprising of multiple source code files, do the following:

1. Create the corresponding Ruby source code files.
   Ideally, test them locally.

1. Update the `COPY` command in the [`Dockerfile`](Dockerfile) to copy all source code files.

1. Update the command line arguments for starting the virtual machine, to use the new command line arguments instead of `-- /app/helloworld.rb`.
   For QEMU this means updating the `qemu-system-x86_64` or `qemu-system-aarch64` command line.
   For Firecracker this means updating the `fc.x86_64.json` or the `fc.arm64.json` file.
   For Xen this means updating the `xen.x86_64.cfg` or the `xen.arm64.cfg` file.

### Use a Different Ruby Filesystem

Based on the [`Dockerfile`](Dockerfile), the application uses the filesystem of the `ruby:2.6.10` image.
The interpreter itself is built for `2.6.0`, as seen [in the `Makefile.uk` for `unikraft/lib-ruby`](https://github.com/unikraft/lib-ruby/blob/staging/Makefile.uk#L48-L50).
This works because all `2.6.x` releases share the same `2.6.0` standard library directory name.

If you change the Ruby version in [`unikraft/lib-ruby`](https://github.com/unikraft/lib-ruby), update the `FROM` line in the [`Dockerfile`](Dockerfile) and the `RUBYLIB` value in the run command lines accordingly.
