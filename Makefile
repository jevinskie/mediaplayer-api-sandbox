TARGETS := mediaplayer-monitor-cli

C_CXX_FLAGS := -Wall -Wextra -Wpedantic
C_FLAGS := $(C_CXX_FLAGS) -std=gnu2x
OBJC_FLAGS := $(C_FLAGS) -fobjc-arc

all: $(TARGETS)

.PHONY: clean

clean:
	rm -rf *.dSYM/
	rm -f $(TARGETS)

mediaplayer-monitor-cli: mediaplayer-monitor-cli.m
	$(CC) -o $@ $^ $(OBJC_FLAGS) -framework Foundation -framework mediaplayer
