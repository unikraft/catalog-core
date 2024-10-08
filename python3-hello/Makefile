UK_ROOT ?= $(PWD)/../repos/unikraft
UK_BUILD ?= $(PWD)/out
UK_APP ?= $(PWD)
LIBS_BASE = $(PWD)/../repos/libs
UK_LIBS ?= $(LIBS_BASE)/musl:$(LIBS_BASE)/lwip:$(LIBS_BASE)/python3:$(LIBS_BASE)/compiler-rt

.PHONY: all

all:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $(MAKECMDGOALS)
