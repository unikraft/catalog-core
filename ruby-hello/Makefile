UK_ROOT ?= $(PWD)/workdir/unikraft
UK_LIBS ?= $(PWD)/workdir/libs
LIBS := $(UK_LIBS)/newlib:$(UK_LIBS)/lwip:$(UK_LIBS)/pthread-embedded:$(UK_LIBS)/ruby:$(UK_LIBS)/compiler-rt

all:
	@make -C $(UK_ROOT) A=$(PWD) L=$(LIBS)

$(MAKECMDGOALS):
	@make -C $(UK_ROOT) A=$(PWD) L=$(LIBS) $(MAKECMDGOALS)
