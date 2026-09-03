UK_ROOT ?= $(PWD)/workdir/unikraft
UK_BUILD ?= $(PWD)/workdir/build
UK_APP ?= $(PWD)
LIBS_BASE = $(PWD)/workdir/libs
UK_LIBS ?= $(LIBS_BASE)/pthread-embedded:$(LIBS_BASE)/compiler-rt:$(LIBS_BASE)/libunwind:$(LIBS_BASE)/libcxxabi:$(LIBS_BASE)/libcxx:$(LIBS_BASE)/newlib:$(LIBS_BASE)/lwip:$(LIBS_BASE)/ruby

.PHONY: all

all:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $(MAKECMDGOALS)
