# project_root/Makefile

# Default platform
PLATFORM ?= gamecube

# Include the platform-specific Makefile
include platform/$(PLATFORM)/Makefile

# Targets
all: build

build:
	@$(MAKE) -C platform/$(PLATFORM) build

clean:
	@$(MAKE) -C platform/$(PLATFORM) clean
