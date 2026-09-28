# Linux Binary-Compatible Traefik on Unikraft

Build and run Traefik compiled as a Linux ELF using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-net` as its base, make sure to check its [README](../elfloader-net/README.md) for more information.
Follow the instructions below to set up, configure, build, and run Traefik.
Make sure you installed the [requirements](../README.md#requirements).

At this time, this application is only compatible with QEMU and Firecracker on the x86_64 platform.

## Prerequisites

To use this example, it is recommended to create an instance of `traefik/whoami` in a Docker container to see the effects of the app in practice.

Use the commands below to pull the image of `traefik/whoami` and run it in a container.

```console
docker pull traefik/whoami
docker run -d -p 8000:80 --name whoami traefik/whoami
```

Note: `config.yml` is configured to reach the `whoami` container via the Docker bridge IP (`http://172.17.0.1:8000`). If your bridge IP differs (or you’re on a non-Linux Docker setup), update `config.yml` accordingly. You can verify your local Docker bridge IP by using the following command:

```console
docker network inspect bridge -f '{{(index .IPAM.Config 0).Gateway}}'
```

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

To build and run the Traefik using the Unikraft ELF Loader, first you will have to follow the [instructions](../elfloader-net/README.md#set-up) for configuring and building `elfloader-net` - follow those instructions within the `../elfloader-net` directory normally.
After that, you can use the commands below:

```console
./setup.sh
docker build -o ./rootfs -f Dockerfile .
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
sudo ip link set dev ukbr0 down
sudo ip link del dev ukbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
sudo ip link add dev ukbr0 type bridge
sudo ip address add 172.44.0.1/24 dev ukbr0
sudo ip link set dev ukbr0 up
sudo qemu-system-x86_64 \
    -nographic \
    -enable-kvm \
    -m 2048 \
    -cpu max \
    -netdev bridge,id=en0,br=ukbr0 -device virtio-net-pci,netdev=en0 \
    -append "traefik netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/local/bin/traefik --providers.file.watch=false --providers.file.filename=/etc/traefik/config.yml --api.insecure=true" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

This will run Traefik using the Unikraft ELF Loader.

 **Warning:** The command above enables Traefik's insecure API/dashboard (`--api.insecure=true`), which exposes the dashboard without authentication. Use only for local testing, or remove the flag and configure authentication before exposing it to untrusted networks.

If you are experimenting with your own code or you encounter a bug which prevents the virtual machine from stopping, see the instructions in the ["Forcefully Terminating a Machine" section](#forcefully-terminating-a-machine).

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

## Build the Filesystem

The filesystem is to be packed into `initrd.cpio`, an initial ramdisk CPIO file.
Use the command below for that:

```console
rm -f initrd.cpio
docker build -o ./rootfs -f Dockerfile .
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
oO   oO ' _ `| | |/ /  _)' _` | |_|  _)
oOo oOO| | | | |   (| | | (_) |  _) :_
 OoOoO ._, ._:_:_,\_._,  .__,_:_, \___)
          Ijiraq 0.21.0~be744898-custom
```

To test that Traefik ran successfully, use the command below:

```console
curl 172.44.0.2:8080/dashboard
```

A successful output should look like this:

```console
<!DOCTYPE html><html><head><title>Traefik</title><meta charset=utf-8><meta name=description content="Traefik UI"><meta name=format-detection content="telephone=no"><meta name=msapplication-tap-highlight content=no><meta name=viewport content="user-scalable=no,initial-scale=1,maximum-scale=1,minimum-scale=1,width=device-width"><link rel=icon type=image/png href="app-logo-128x128.png"><link rel=icon type=image/png sizes=16x16 href="icons/favicon-16x16.png"><link rel=icon type=image/png sizes=32x32 href="icons/favicon-32x32.png"><link rel=icon type=image/png sizes=96x96 href="icons/favicon-96x96.png"><link rel=icon type=image/ico href="icons/favicon.ico"><link rel=apple-touch-icon href="icons/apple-icon-152x152.png"><link rel=apple-touch-icon sizes=152x152 href="icons/apple-icon-152x152.png"><link rel=apple-touch-icon sizes=167x167 href="icons/apple-icon-167x167.png"><link rel=apple-touch-icon sizes=180x180 href="icons/apple-icon-180x180.png">  <script type="module" crossorigin src="assets/index.e0374309.js"></script>
  <link rel="stylesheet" href="assets/index.6b05f1b9.css">
</head><body><div id=q-app></div></body></html>
```

Or it can be accessed on a browser.

To test that Traefik routes to the container successfully, use the command below:

```console
curl -H 'Host: whoami.localhost' http://172.44.0.2
```

A successful output should look similar to this:

```console
Hostname: a3f3dec4c3fa
IP: 127.0.0.1
IP: 172.17.0.3
RemoteAddr: 172.44.0.2:55093
GET / HTTP/1.1
Host: whoami.localhost
User-Agent: curl/8.5.0
Accept: */*
Accept-Encoding: gzip
X-Forwarded-For: 172.44.0.1
X-Forwarded-Host: whoami.localhost
X-Forwarded-Port: 80
X-Forwarded-Proto: http
X-Forwarded-Server: unikraft
X-Real-Ip: 172.44.0.1
```

### Run on QEMU/x86_64

```console
sudo ip link set dev ukbr0 down
sudo ip link del dev ukbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
sudo ip link add dev ukbr0 type bridge
sudo ip address add 172.44.0.1/24 dev ukbr0
sudo ip link set dev ukbr0 up
sudo qemu-system-x86_64 \
    -nographic \
    -enable-kvm \
    -m 2048 \
    -cpu max \
    -netdev bridge,id=en0,br=ukbr0 -device virtio-net-pci,netdev=en0 \
    -append "traefik netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/local/bin/traefik --providers.file.watch=false --providers.file.filename=/etc/traefik/config.yml --api.insecure=true" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

### Run on Firecracker/x86_64

Note that you must build the `elfloader-net` Firecracker kernel before this step.

```console
sudo ip link set dev ukbr0 down
sudo ip link del dev ukbr0
sudo ip link set dev tap0 down
sudo ip link del dev tap0
sudo ip tuntap add dev tap0 mode tap
sudo ip address add 172.44.0.1/24 dev tap0
sudo ip link set dev tap0 up
rm -f firecracker.socket
firecracker-x86_64 --config-file fc.x86_64.json --api-sock firecracker.socket
```

The user running the above command must be able to use KVM.
Typically this means being part of the `kvm` group.
Otherwise, run the commands above as root or prefixed by `sudo`.

### Forcefully Terminating a Machine

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately, press the `x` key.

To close the Firecracker virtual machine, open another console and use the command:

```console
sudo pkill -f firecracker
```

## Customize

### Traefik Configuration

The default setup uses a static configuration file named `config.yml`. If you want to add new routers, services, or change port mappings, you should:
- Edit the `config.yml` file located in the root of this project.
- Rebuild the rootfs `docker build -o ./rootfs -f Dockerfile .`.
- Repackage the CPIO archive.

### Dynamic Linking

Besides statically-linked binaries, the `elfloader` layer also supports dynamically-linked executables.

In order to set this up, the dynamic libraries (also called shared objects on Linux) have to be placed in the appropriate locations within the root filesystem (including the dynamic linker / loader, e.g. `/lib64/ld-linux-x86-64.so.2`).

For more details and further instructions, check out [this document](https://github.com/unikraft/app-elfloader/blob/3bb91cc6f4305f9fb75f137ca86c5c8ca7abdd41/README.md#executing-elf-binaries).
