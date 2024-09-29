UK_ROOT ?= $(PWD)/../repos/unikraft
UK_BUILD ?= $(PWD)/out
UK_APP ?= $(PWD)
LIBS_BASE = $(PWD)/../repos/libs
UK_LIBS ?=

.PHONY: all

all:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $(MAKECMDGOALS)
