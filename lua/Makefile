# UK_ROOT ?= $(PWD)/workdir/unikraft
# UK_BUILD ?= $(PWD)/workdir/build
# UK_APP   ?= $(PWD)
# LIBS_BASE = $(PWD)/workdir/libs

# UK_LIBS   ?= $(LIBS_BASE)/musl:$(LIBS_BASE)/lua


# .PHONY: all

# all:
# 	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD)

# %:
# 	@$(MAKE) -C $(UK_ROOT) L=$(UK_LIBS) A=$(UK_APP) O=$(UK_BUILD) $@
# Unikraft app Makefile for Lua 5.4
# Makefile for Lua 5.4 Unikraft app in catalog-core
# Makefile for Lua 5.4 Unikraft app in catalog-core

UK_ROOT   ?= $(PWD)/../repos/unikraft
UK_BUILD  ?= $(PWD)/workdir/build
UK_APP    ?= $(PWD)
LIBS_BASE := $(PWD)/../repos/libs


UK_LIBS   ?= $(LIBS_BASE)/musl:$(LIBS_BASE)/lua

.PHONY: all clean run

all:
	@$(MAKE) -C $(UK_ROOT) \
		L=$(UK_LIBS) \
		A=$(UK_APP) \
		O=$(UK_BUILD)

clean:
	@$(MAKE) -C $(UK_ROOT) \
		L=$(UK_LIBS) \
		A=$(UK_APP) \
		O=$(UK_BUILD) \
		properclean
	@rm -rf $(UK_BUILD)

# run: all
# 	@$(MAKE) -C $(UK_ROOT) \
# 		L=$(UK_LIBS) \
# 		A=$(UK_APP) \
# 		O=$(UK_BUILD) \
# 		run

%:
	@$(MAKE) -C $(UK_ROOT) \
		L=$(UK_LIBS) \
		A=$(UK_APP) \
		O=$(UK_BUILD) \
		$@
