UK_ROOT ?= $(PWD)/workdir/unikraft
UK_BUILD ?= $(PWD)/out
UK_APP ?= $(PWD)/workdir/apps/elfloader
LIBS_BASE = $(PWD)/workdir/libs
UK_LIBS ?= $(LIBS_BASE)/libelf

.PHONY: all

all:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $(MAKECMDGOALS)
