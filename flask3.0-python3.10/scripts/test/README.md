# Testing Flask 3.0 Python3.10 on Unikraft

These are companion instructions to the main instructions in the [`README`](../../README.md) and to the scripted run instructions in the [`scripts/README`](../README.md).
Use these scripts to test Flask 3.0 Python3.10 on Unikraft.

**Note**: Run scripts from the application directory.

Use the `all.sh` script to test all builds and available scripted runs:

```console
./scripts/test/all.sh
```

The command prints out a summary of the passed or failed tests.

Logs are stored in the `./scripts/test/log/` directory.

Use the `single.sh` script to query a running HTTP server instance:

```console
./scripts/test/single.sh
```

Or specify a custom host and port:

```console
./scripts/test/single.sh localhost 8080
```
