# Testing the Unikraft ELF Loader with Networking Support

These are companion instructions to the main instructions in the [`README`](../../README.md) and to the scripted run instructions in the [`scripts/README`](../README.md).
Use these scripts to test the Unikraft ELF Loader with networking support.

**Note**: Run scripts from the application directory.

Use the `all.sh` script to test all builds and all available runs:

```console
./scripts/test/all.sh
```

The command prints out a summary of the passed or failed tests.

Logs are stored in the `./scripts/test/log/` directory.

Use the `single.sh` script to only run a query test for a running instance.
That is, first run the instance, e.g:

```console
./scripts/run/qemu.x86_64
```

And then query it with the `single.sh` script:

```console
./single.sh
```

The command prints out the output of the commands that query the instance.
