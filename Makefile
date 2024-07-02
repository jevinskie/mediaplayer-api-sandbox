TARGETS := mediaplayer-monitor-cli

C_CXX_FLAGS := -Wall -Wextra -Wpedantic
C_FLAGS := $(C_CXX_FLAGS) -std=gnu2x
OBJC_FLAGS := $(C_FLAGS) -fobjc-arc

all: $(TARGETS)

.PHONY: clean

clean:
	rm -rf *.dSYM/
	rm -f $(TARGETS)

mediaplayer-monitor-cli: mediaplayer-monitor-cli.m mediaplayer-monitor-cli-Info.plist
	$(CC) -o $@ $< $(OBJC_FLAGS) -framework Foundation -framework MediaPlayer -F ProtocolBuffer.xcframework/macos -framework ProtocolBuffer -F MediaServices.xcframework/macos -framework MediaServices -F MediaRemote.xcframework/macos -framework MediaRemote -fmodules -Wl,-sectcreate,__TEXT,__info_plist,$(basename $<)-Info.plist
	codesign -f -s "Developer ID Application: Jevin Sweval (ZK96P738ZR)" $@
