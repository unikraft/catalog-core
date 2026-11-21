# HAProxy on Unikraft

Build and run [HAProxy](https://www.haproxy.org/), the unmodified Linux binary from
the official Debian image, using the [Unikraft binary-compatibility layer](https://unikraft.org/docs/concepts/compatibility).
This application makes use of `elfloader-net` as its base, make sure to check its
[README](../elfloader-net/README.md) for more information.
Follow the instructions below to set up, configure, build, and run HAProxy.
Make sure you installed the [requirements](../README.md#requirements).

At this time, this application is only compatible with QEMU on the x86_64 platform,
using bridged networking.

## Quick Setup (aka TLDR)

For a quick setup, run the commands below.
Note that you still need to install the [requirements](../README.md#requirements).
Before everything, make sure you run the [top-level `setup.sh` script](../setup.sh).

**Note**: this is a network application.
For QEMU, enable bridged networking as instructed in the [top-level `README.md`](../README.md#qemu):

```console
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

To build and run HAProxy using the Unikraft ELF Loader, use the commands below:

```console
./setup.sh
./.scripts/build/qemu.x86_64
sudo ./.scripts/run/qemu.x86_64
```

In another console, query the instance:

```console
curl -i http://172.44.0.2:8080/
```

The expected output is:

```text
HTTP/1.1 200 OK
content-length: 32
content-type: text/plain

Hello from HAProxy on Unikraft!
```

If you are experimenting with your own setup or you encounter a bug which prevents
the virtual machine from stopping, see the instructions in the
["Forcefully Terminating a Machine" section](#forcefully-terminating-a-machine).

Information about every step and about other types of builds is detailed below.

## Prepare the Linux Root Filesystem

HAProxy is used as a prebuilt Linux binary, so the root filesystem is extracted from
the official Debian image, `haproxy:2.8.3-bullseye`.
The `rootfs/Dockerfile` contains a multi-stage build that copies the `haproxy` binary,
its dynamic library dependencies and the configuration file into an otherwise empty
filesystem.

Use the command below to build the image and extract it into `rootfs/`:

```console
make -C rootfs/ clean all
```

This creates the `usr/`, `lib/` and `lib64/` directories inside `rootfs/`.
They are not tracked by Git; they are regenerated on every build.

The dependencies are the ones reported by `ldd` for the `haproxy` binary:

```console
libcrypt libssl libcrypto liblua5.3 libdl librt libpcre2-8 libpthread libgcc_s libc libm
```

The dynamic linker, `/lib64/ld-linux-x86-64.so.2`, is copied as well.
Whenever the `Dockerfile` or the configuration file is changed, run the command above
again.

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

While not required, you can clean the previous build artifacts:

```console
make -C rootfs/ clean
rm -f initrd.cpio
```

## Build the Filesystem

The filesystem is packed into `initrd.cpio`, an initial ramdisk CPIO file, together
with the HAProxy configuration, which lives in `rootfs/etc/haproxy/haproxy.conf`.
Use the command below for that:

```console
rm -f initrd.cpio
./workdir/unikraft/support/scripts/mkcpio initrd.cpio ./rootfs/
```

## Build the Base Kernel

The unikernel is the `elfloader-net` application, which provides the
[ELF Loader](https://github.com/unikraft/app-elfloader) together with the lwIP TCP/IP
stack and the `virtio-net` driver.
Build it with the commands below:

```console
./.scripts/build/kernel.qemu.x86_64
```

This builds `elfloader-net` using the defconfig owned by this application,
`.scripts/defconfig/qemu.x86_64`.
The defconfig enables the POSIX and syscall shim options required by HAProxy, such as
`CONFIG_LIBPOSIX_FUTEX`, `CONFIG_LIBSYSCALL_SHIM_HANDLER_ULTLS` and
`CONFIG_LIBUKRANDOM_GETRANDOM`.
`elfloader-net` itself is not modified.

To build the root filesystem as well, run:

```console
./.scripts/build/qemu.x86_64
```

## Run

Run the resulting image using QEMU.
The application requires bridged networking and therefore `sudo`:

```console
sudo ./.scripts/run/qemu.x86_64
```

The run script creates the `virbr0` bridge, assigns `172.44.0.1/24` to it and starts
QEMU with a `virtio-net-pci` device.
The guest receives the address `172.44.0.2` through the `netdev.ip=` kernel command
line argument.

The equivalent manual command is:

```console
sudo ip link add dev virbr0 type bridge
sudo ip addr add 172.44.0.1/24 dev virbr0
sudo ip link set dev virbr0 up

sudo qemu-system-x86_64 \
    -nographic \
    -m 256 \
    -cpu max \
    -netdev bridge,id=en0,br=virbr0 -device virtio-net-pci,netdev=en0 \
    -append "elfloader_qemu-x86_64 netdev.ip=172.44.0.2/24:172.44.0.1::: vfs.fstab=[ \"initrd0:/:extract::ramfs=1:\" ] -- /usr/bin/haproxy -db -f /etc/haproxy/haproxy.conf" \
    -kernel "../elfloader-net/workdir/build/elfloader_qemu-x86_64" \
    -initrd ./initrd.cpio
```

A successful boot shows a message such as the one below:

```text
[NOTICE]   (1) : haproxy version is 2.8.3-86e043a
[NOTICE]   (1) : path to executable is /usr/bin/haproxy
[NOTICE]   (1) : haproxy started with 1 thread
```

And, from the host:

```console
curl -i http://172.44.0.2:8080/
```

```text
HTTP/1.1 200 OK
content-length: 32
content-type: text/plain

Hello from HAProxy on Unikraft!
```

### Forcefully Terminating a Machine

To close the QEMU virtual machine, use the `Ctrl+a x` keyboard shortcut;
that is press the `Ctrl` and `a` keys at the same time and then, separately,
press the `x` key.

## HAProxy Configuration

The configuration file is `rootfs/etc/haproxy/haproxy.conf`.
It is adapted to the constraints of a unikernel:

```text
global
    maxconn 200
    nbthread 1
    log stdout format raw local0 info
    nosplice

defaults
    mode http
    log global
    option httplog
    timeout connect 5s
    timeout client 30s
    timeout server 30s

frontend http_front
    bind *:8080
    http-request return status 200 content-type text/plain string "Hello from HAProxy on Unikraft!\n"
```

The following choices are required by the execution environment:

- `-db` on the command line and `nbthread 1` keep HAProxy in the foreground,
  single-process mode. Unikraft runs in a single address space and does not provide
  `fork()` with isolated memory, so HAProxy cannot daemonize or spawn worker
  processes.
- There are no `chroot`, `user` or `group` directives. The process runs as UID 0 and
  there is no user database or writable state directory.
- `maxconn 200` stays within the file descriptor limit exposed by the
  binary-compatibility layer. Larger values make HAProxy abort at startup with
  `FD limit (1024) too low for maxconn=...`.
- `log stdout format raw local0 info` logs to the console instead of syslog.
- `http-request return` answers directly with a static `200` response, so no backend
  server is needed to test the application.

## Customize

The root filesystem contains the HAProxy binary at `/usr/bin/haproxy` and its
configuration at `/etc/haproxy/haproxy.conf`.
To add another binary, add the corresponding `COPY` line to `rootfs/Dockerfile`,
together with its shared library dependencies, then rebuild the root filesystem and
the initramfs.

To find the dependencies of a binary, use:

```console
docker run --rm --platform linux/x86_64 haproxy:2.8.3-bullseye ldd /usr/bin/haproxy
```

To change the answer, the port or the timeouts, edit `rootfs/etc/haproxy/haproxy.conf`
and rebuild `initrd.cpio`.
The port must also be changed in `.scripts/run/qemu.x86_64` and in the test script if
you rely on them.

The executable must be a PIE (_Position Independent Executable_).
The binary shipped in the official Debian image is already built as PIE.

## Scripted Runs and Testing

Use the scripts in `.scripts/` for quick actions:

```console
./.scripts/build/qemu.x86_64
sudo ./.scripts/run/qemu.x86_64
```

Test the application with:

```console
./.scripts/test/all.sh
```

The test builds the kernel and the filesystem, starts the virtual machine, waits for
the HTTP endpoint to answer, checks for the `200` status code and then stops QEMU.
Logs are stored in `.scripts/test/log/`.

## Troubleshooting

- `bridge helper failed` - the QEMU bridge helper has no permission file. Create it with
  `echo "allow all" | sudo tee /etc/qemu/bridge.conf`.
  If QEMU is installed under `/usr/local`, use `/usr/local/etc/qemu/bridge.conf`.
- `FD limit (1024) too low for maxconn=...` - lower `maxconn` in
  `rootfs/etc/haproxy/haproxy.conf`.
- `The futex facility returned an unexpected error code.` - the base kernel was built
  without the POSIX and syscall shim options required by HAProxy. Make sure the kernel
  is built with the defconfig in `.scripts/defconfig/`, for example with
  `./.scripts/build/kernel.qemu.x86_64`.
- `Cannot open configuration file /etc/haproxy/haproxy.conf` - the configuration is not
  part of the initramfs. Run `./.scripts/build/rootfs.x86_64` and check the contents
  with `cpio -it < initrd.cpio`.
- `curl: (7) Failed to connect ... No route to host` - the guest has no IP address or the
  bridge is not up. Check `netdev.ip=` in the kernel command line and run
  `ip -br a` and `ip neigh show 172.44.0.2` on the host.
- `[libposix_process] Unsupported resource 6` and
  `Failed to setup watchdog timer ...` are harmless messages from the
  binary-compatibility layer. They do not affect the HTTP service.

## Limitations

- Only QEMU on x86_64 is tested. Firecracker requires a tap device and KVM and is not
  provided by this application yet.
- HAProxy runs single-process, without `fork()`, `chroot`, privilege dropping or a
  runtime state directory.
- The configuration only serves a static response; it does not proxy to a backend.

