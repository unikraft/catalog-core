deps_config := \
	/home/dana/Unikraft/personal/catalog-core/lua/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/app.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/libs/lua/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/libs/musl/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/vfscore/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukvmem/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uktimeconv/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uktest/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukstreambuf/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukstore/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uksp/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uksglist/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukschedcoop/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uksched/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukrust/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukring/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukreloc/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukrandom/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukofw/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uknofault/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uknetdev/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukmpi/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukmmap/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uklock/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uklibparam/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uklibid/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukintctlr/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukgcov/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukfile/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukfallocbuddy/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukfalloc/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukdebug/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukcpio/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukconsole/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukbus/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukboot/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukblkdev/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukbitops/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukbinfmt/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukatomic/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukargparse/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukallocstack/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukallocregion/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukallocpool/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukallocbbuddy/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ukalloc/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/uk9p/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ubsan/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/syscall_shim/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/ramfs/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-user/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-unixsocket/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-tty/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-timerfd/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-time/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-sysinfo/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-socket/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-process/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-poll/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-pipe/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-mmap/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-libdl/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-futex/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-fdtab/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-fdio/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-fd/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-eventfd/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/posix-environ/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/nolibc/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/isrlib/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/fdt/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/devfs/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib/9pfs/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/libs.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/xenheaders/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/xengnttab/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/xenemgcons/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/xencons/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/xenbus/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/netfront/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/blkfront/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/xen/9pfront/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers-xen.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/ring/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/pci/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/net/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/mmio/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/bus/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/blk/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/9p/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers-virtio.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukconsole/vgacons/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukconsole/pl011/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukconsole/ns16550/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers-console.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukrandom/lcpu/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers-random.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukps2/kbd/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers-ukps2.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukintctlr/xpic/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukintctlr/gic/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers-intctlr.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukbus/platform/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukbus/pci/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers-bus.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/virtio/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukrtc/pl031/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukrtc/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers/ukps2/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/drivers.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/plat/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/plat/xen/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/plat/kvm/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/plats.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/arch/arm/arm64/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/arch/arm/arm/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/arch/x86/x86_64/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/arch/Config.uk \
	/home/dana/Unikraft/personal/catalog-core/repos/unikraft/Config.uk

/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: \
	$(deps_config)

ifneq "$(UK_FULLVERSION)" "0.18.0~eabefb07"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_CODENAME)" "Helene"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_ARCH)" "x86_64"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(HOST_ARCH)" "x86_64"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_BASE)" "/home/dana/Unikraft/personal/catalog-core/repos/unikraft"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_APP)" "/home/dana/Unikraft/personal/catalog-core/lua"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_NAME)" "lua"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_DIR)" "/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_PLAT_BASE)" "/home/dana/Unikraft/personal/catalog-core/repos/unikraft/plat"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_EPLAT_DIRS)" ""
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_EXCLUDEDIRS)" ""
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_DRIV_BASE)" "/home/dana/Unikraft/personal/catalog-core/repos/unikraft/drivers"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_LIB_BASE)" "/home/dana/Unikraft/personal/catalog-core/repos/unikraft/lib"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_ELIB_DIRS)" "/home/dana/Unikraft/personal/catalog-core/lua/../repos/libs/musl:/home/dana/Unikraft/personal/catalog-core/lua/../repos/libs/lua"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_EAPP_DIR)" "/home/dana/Unikraft/personal/catalog-core/lua"
/home/dana/Unikraft/personal/catalog-core/lua/workdir/build/kconfig/auto.conf: FORCE
endif

$(deps_config): ;
