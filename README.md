# Catalog Core

This is a catalog of applications that are configured, build and run with first principles tools: Make, GCC, Clang, Kconfig, QEMU, Firecracker, Xen.
Each directory belongs to a given application and it typically consists of source code, `Makefile`, `Makefile.uk`, filesystem and a `README.md` file with instructions.

This catalog is targeted towards core developers (i.e. developers of [`unikraft` core repository](https://github.com/unikraft/unikraft) or [library repositories](https://github.com/search?q=topic%3Alibrary+org%3Aunikraft&type=Repositories)), maintainers, testers and those who want to learn about the [internals of Unikraft](https://unikraft.org/docs/internals).
Application and tooling developers and general users should use the [official `catalog` repository](https://github.com/unikraft/catalog).

In order to use this catalog, clone this repository and enter the preferred application directory:

```console
git clone https://github.com/unikraft/catalog-core
cd catalog-core/<application-directory>
```

Inside the directory, follow the instructions in the application `README.md`.

Before and while you are using this catalog, read about the [internals of Unikraft](https://unikraft.org/docs/internals).
