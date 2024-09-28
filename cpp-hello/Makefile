UK_ROOT ?= $(PWD)/../repos/unikraft
UK_BUILD ?= $(PWD)/out
UK_APP ?= $(PWD)
LIBS_BASE = $(PWD)/../repos/libs
UK_LIBS := $(LIBS_BASE)/libcxxabi:$(LIBS_BASE)/libcxx:$(LIBS_BASE)/libunwind:$(LIBS_BASE)/compiler-rt:$(LIBS_BASE)/musl

.PHONY: all

all:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $(MAKECMDGOALS)

