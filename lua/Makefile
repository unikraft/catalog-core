UK_ROOT   ?= $(PWD)/../repos/unikraft
UK_BUILD  ?= $(PWD)/workdir/build
UK_APP    ?= $(PWD)
LIBS_BASE := $(PWD)/../repos/libs

UK_LIBS   ?= $(LIBS_BASE)/musl:$(LIBS_BASE)/lua

.PHONY: all clean run

all:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

clean:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) properclean
	@rm -rf $(UK_BUILD)

%:
	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $@
