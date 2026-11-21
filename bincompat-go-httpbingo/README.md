# Linux Binary-Compatible Go HTTP Bingo on Unikraft

Build and run [httpbingo](https://github.com/mccutchen/go-httpbin) (`go-httpbin`) compiled as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-net` as its base, make sure to check its [README](../elfloader-net/README.md) for more information.
Follow the instructions below to set up, configure, build, and run Go HTTP Bingo.
Make sure you installed the [requirements](../README.md#requirements).

At this time, this application is only compatible with QEMU and Firecracker on the x86_64 platform.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

This is a network application.
For using QEMU, enable bridged networking, as instructed in the [top-level `README.md`](../README.md#qemu):

```console
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

To build and run the Go HTTP Bingo Linux ELF using the Unikraft ELF Loader, first you will have to follow the [instructions](../elfloader-net/README.md#set-up) for configuring and building `elfloader-net` - follow those instructions within the `../elfloader-net` directory normally.
After that, you can use the commands below:

```console
./setup.sh
make -C rootfs/ clean all
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
sudo ip link set dev virbr0 down || true
sudo ip link del dev virbr0 || true
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
sudo qemu-system-x86_64 \
    -nographic \
    -m 256 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /go-httpbin" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

This will run the Unikraft ELF Loader with a Go HTTP Bingo Linux ELF.
The HTTP server keeps running, so the virtual machine does not terminate by itself.
See the instructions in the ["Forcefully Terminating a Machine" section](#forcefully-terminating-a-machine).

Information about every step and about other types of builds is detailed below.

## Prepare the Linux ELF

The Linux ELF is built from [go-httpbin v2.13.4](https://github.com/mccutchen/go-httpbin) using the Docker recipe in `rootfs/`.

Whenever the recipe is changed, the `make` command below should be executed, after which the root filesystem may be rebuilt to reflect the changes (see [below](#build-the-filesystem)).

Build the Linux ELF to be used by the ELF Loader using:

```console
make -C rootfs/ clean all
```

The resulting ELF will be packed in an initial ramdisk CPIO file and will be passed to the ELF Loader at runtime.

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

## Clean

While not required, you can clean the previous build artifacts:

```console
make -C rootfs/ clean
```

## Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the command below for that:

```console
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

## Run

Run the resulting image using the corresponding platform tool.
Firecracker requires KVM support.

A successful run will show a message such as the one below:

```text
Booting from ROM..1: Set IPv4 address 172.44.0.2 mask 255.255.255.0 gw 172.44.0.1
en1: Added
en1: Interface is up
Powered by
o.   .o       _ _               __ _
Oo   Oo  ___ (_) | __ __  __ _ ' _) :_
oO   oO ' _ `| | |/ /  _)' `_ | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
                 Kiviuq 0.20.0~07044e69
time=1999-12-31T00:00:00.308Z level=INFO msg="go-httpbin listening on http://0.0.0.0:8080"
```

This means that the ELF Loader loaded and ran successfully the `go-httpbin` binary in `rootfs/`.
To test Go HTTP Bingo, use `curl` (or any other HTTP client):

```console
curl http://172.44.0.2:8080/get
```

In case of a successful run, a JSON response is printed.

### Run on QEMU/x86_64

To set up networking, use the commands below:

```console
sudo ip link set dev virbr0 down || true
sudo ip link del dev virbr0 || true
sudo ip link set dev tap0 down || true
sudo ip link del dev tap0 || true
sudo ip link add dev virbr0 type bridge
sudo ip address add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up
```

Now run the Unikraft image:

```console
sudo qemu-system-x86_64 \
    -nographic \
    -m 256 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /go-httpbin" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

Note that you must build the `elfloader-net` Firecracker kernel before this step.

To set up networking, use the commands below:

```console
sudo ip link set dev virbr0 down || true
sudo ip link del dev virbr0 || true
sudo ip link set dev tap0 down || true
sudo ip link del dev tap0 || true
sudo ip tuntap add dev tap0 mode tap
sudo ip address add 172.44.0.1/24 dev tap0
sudo ip link set dev tap0 up
```

Now run the Unikraft image:

```console
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
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

## Customize

The program provided is a statically-linked PIE (`-static-pie`) Linux ELF of `go-httpbin`.
The binary name in the root filesystem is `/go-httpbin`.

If you change the binary name or want to pass arguments, update the `-- /go-httpbin` part of the QEMU `-append` line and the matching `boot_args` in `fc.x86_64.json`.
