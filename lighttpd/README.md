# lighttpd on Unikraft

Build and run [lighttpd 1.4.84](https://www.lighttpd.net/) as a unikernel.
Install the [requirements](../README.md#requirements) first, and run the
[top-level `setup.sh`](../setup.sh) once to fetch the repositories.

## Quick Setup (aka TLDR)

Install the [requirements](../README.md#requirements) and run the
[top-level `setup.sh`](../setup.sh) first. This is a network application, so
enable bridged networking:

```console
echo "allow all" | sudo tee /etc/qemu/bridge.conf
```

Build and run for `x86_64` (swap `x86_64` for `arm64`, or `qemu` for `fc`):

```console
./setup.sh
./.scripts/build/qemu.x86_64
sudo ./.scripts/run/qemu.x86_64
```

The server comes up at `172.44.0.2:80`. From another terminal:

```console
curl 172.44.0.2      # or:  ./test.sh
```

Close QEMU with `Ctrl+a x`.
Every step is detailed below.

## Build

`./setup.sh` symlinks the repositories (`unikraft`, `musl`, `lwip`, `lighttpd`,
`openssl`, `zlib`, `pcre`) from `../repos/` into `workdir/`.

The `./.scripts/build/<plat>.<arch>` scripts apply the matching
[defconfig](.scripts/defconfig/) and build `workdir/build/lighttpd_<plat>-<arch>`,
where `<plat>` is `qemu` or `fc` and `<arch>` is `x86_64` or `arm64`.

Configure interactively with `make menuconfig`; optional modules live under
*Library Configuration → liblighttpd*. Pass `CC=clang`/etc. to the build
script to use a different compiler.

## Test

With an instance running, from another terminal:

```console
./test.sh
```

## TLS / HTTPS (optional, x86_64 only)

HTTPS comes from `mod_openssl` linked against
[lib-openssl](https://github.com/unikraft/lib-openssl). Two switches control it and must agree —
loading `mod_openssl` in a kernel built without it is a fatal startup error:

| Switch | Where |
|--------|-------|
| `CONFIG_LIBLIGHTTPD_OPENSSL=y` | enable via `make menuconfig` or add to the `*.x86_64` defconfig |
| the `mod_openssl` / `:443` block | [`rootfs/lighttpd.conf`](rootfs/lighttpd.conf) — shipped commented out |

Provide your own certificate and key files at
`rootfs/etc/lighttpd/server.{crt+key}`. To generate a CA-signed
pair:

```console
openssl genrsa -des3 -out rootCA.key 2048
openssl req -x509 -new -nodes -key rootCA.key -sha256 -days 1024 -out rootCA.pem
openssl req -new -nodes -out server.csr -newkey rsa:2048 -keyout server.key
openssl x509 -req -in server.csr -CA rootCA.pem -CAkey rootCA.key -CAcreateserial -out server.crt -days 500 -sha256
```

Move `server.crt` and `server.key` into `rootfs/etc/lighttpd/`, uncomment the
TLS block in `rootfs/lighttpd.conf`, and re-run the run script (it repacks the
initrd). Then:

```console
curl -k https://172.44.0.2          # or --cacert rootCA.pem
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
