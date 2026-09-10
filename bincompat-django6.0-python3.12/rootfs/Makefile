UK_ROOT ?= $(abspath $(CURDIR)/../workdir/unikraft)
UK_BUILD ?= $(abspath $(CURDIR)/../workdir/build)
UK_APP ?= $(abspath $(CURDIR)/../workdir/apps/elfloader)
LIBS_BASE = $(abspath $(CURDIR)/../workdir/libs)
UK_LIBS ?= $(LIBS_BASE)/libelf

.PHONY: all

all:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $(MAKECMDGOALS)
