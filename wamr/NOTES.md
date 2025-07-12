**2024-09-20**

Hardware randomness support requires a newer version of QEMU (>=8.1) and / or KVM support on newer CPUs.
If you don't have KVM support or if you using an older version QEMU, add this config to the `defconfig*` files:

```text
CONFIG_LIBUKRANDOM_SEED_INSECURE=y
```

And patch the Unikraft core in `../repos/unikraft`:

```console
wget https://gist.githubusercontent.com/razvand/929d0c9a4d1709d12e2fe1352d98d0a2/raw/de7da30778c3611fbebb6bd557abfeb353e8ea98/0001-lib-ukrandom-Do-not-initialize-hwrandom-for-insecure.patch
git am 0001-lib-ukrandom-Do-not-initialize-hwrandom-for-insecure.patch
```