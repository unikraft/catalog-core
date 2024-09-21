UK_ROOT ?= $(PWD)/../repos/unikraft
UK_BUILD ?= $(PWD)/out
UK_APP ?= $(PWD)

.PHONY: all defconfig

all:
	@$(MAKE) -C $(UK_ROOT) A=$(UK_APP) O=$(UK_BUILD)

$(MAKECMDGOALS):
	@$(MAKE) -C $(UK_ROOT) A=$(UK_APP) O=$(UK_BUILD) $(MAKECMDGOALS)
