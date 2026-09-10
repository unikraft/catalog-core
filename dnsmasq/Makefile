UK_ROOT  ?= $(PWD)/workdir/unikraft
UK_LIBS  ?= $(PWD)/workdir/libs/musl:$(PWD)/workdir/libs/lwip:$(PWD)/workdir/libs/nettle:$(PWD)/workdir/libs/dnsmasq
UK_BUILD ?= $(PWD)/workdir/build

.PHONY: all
all:
	@$(MAKE) -C $(UK_ROOT) A=$(PWD) L=$(UK_LIBS) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) A=$(PWD) L=$(UK_LIBS) O=$(UK_BUILD) $(MAKECMDGOALS)
