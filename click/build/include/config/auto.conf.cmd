deps_config := \
	/home/stefan/unikraft_project/click/build/kconfig/app.uk \
	/home/stefan/unikraft_project/click/.unikraft/libs/click/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/libs/lwip/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/libs/musl/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/vfscore/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukvmem/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uktimeconv/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uktest/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukstreambuf/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukstore/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uksp/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uksglist/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukschedcoop/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uksched/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukrust/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukring/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukreloc/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukrandom/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukofw/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uknofault/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uknetdev/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukmpi/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukmmap/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uklock/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uklibparam/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uklibid/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukintctlr/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukgcov/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukfile/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukfallocbuddy/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukfalloc/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukdebug/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukcpio/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukconsole/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukbus/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukboot/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukblkdev/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukbitops/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukbinfmt/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukatomic/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukargparse/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukallocstack/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukallocregion/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukallocpool/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukallocbbuddy/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ukalloc/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/uk9p/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ubsan/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/syscall_shim/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/ramfs/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-user/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-unixsocket/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-tty/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-timerfd/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-time/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-sysinfo/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-socket/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-process/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-poll/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-pipe/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-mmap/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-libdl/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-futex/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-fdtab/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-fdio/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-fd/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-eventfd/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/posix-environ/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/nolibc/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/isrlib/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/fdt/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/devfs/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/lib/9pfs/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/libs.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/xenheaders/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/xengnttab/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/xenemgcons/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/xencons/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/xenbus/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/netfront/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/blkfront/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/xen/9pfront/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers-xen.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/ring/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/pci/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/net/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/mmio/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/bus/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/blk/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/9p/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers-virtio.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukconsole/vgacons/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukconsole/pl011/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukconsole/ns16550/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers-console.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukrandom/lcpu/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers-random.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukps2/kbd/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers-ukps2.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukintctlr/xpic/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukintctlr/gic/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers-intctlr.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukbus/platform/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukbus/pci/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers-bus.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/virtio/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukrtc/pl031/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukrtc/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers/ukps2/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/drivers.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/plat/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/plat/xen/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/plat/kvm/Config.uk \
	/home/stefan/unikraft_project/click/build/kconfig/plats.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/arch/arm/arm64/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/arch/arm/arm/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/arch/x86/x86_64/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/arch/Config.uk \
	/home/stefan/unikraft_project/click/.unikraft/unikraft/Config.uk

/home/stefan/unikraft_project/click/build/kconfig/auto.conf: \
	$(deps_config)

ifneq "$(UK_FULLVERSION)" "0.19.0~c5384ea0"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_CODENAME)" "Pan"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_ARCH)" "x86_64"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(HOST_ARCH)" "x86_64"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_BASE)" "/home/stefan/unikraft_project/click/.unikraft/unikraft"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_APP)" "/home/stefan/unikraft_project/click"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(UK_NAME)" "click"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_DIR)" "/home/stefan/unikraft_project/click/build/kconfig"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_PLAT_BASE)" "/home/stefan/unikraft_project/click/.unikraft/unikraft/plat"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_EPLAT_DIRS)" ""
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_EXCLUDEDIRS)" ""
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_DRIV_BASE)" "/home/stefan/unikraft_project/click/.unikraft/unikraft/drivers"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_LIB_BASE)" "/home/stefan/unikraft_project/click/.unikraft/unikraft/lib"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_ELIB_DIRS)" "/home/stefan/unikraft_project/click/.unikraft/libs/musl:/home/stefan/unikraft_project/click/.unikraft/libs/lwip:/home/stefan/unikraft_project/click/.unikraft/libs/click"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif
ifneq "$(KCONFIG_EAPP_DIR)" "/home/stefan/unikraft_project/click"
/home/stefan/unikraft_project/click/build/kconfig/auto.conf: FORCE
endif

$(deps_config): ;
