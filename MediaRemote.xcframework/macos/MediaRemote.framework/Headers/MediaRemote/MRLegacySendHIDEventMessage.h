//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRLegacySendHIDEventMessage_h
#define MRLegacySendHIDEventMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@interface MRLegacySendHIDEventMessage : MRProtocolMessage {
    /* instance variables */
    struct __IOHIDEvent *_event;
}

@property(readonly, nonatomic) MRHIDButtonEvent buttonEvent;

/* instance methods */
- (void)dealloc;
- (id)description;
- (unsigned long long)type;
- (id)initWithHIDEvent:(struct __IOHIDEvent *)hidevent;

@end

#endif /* MRLegacySendHIDEventMessage_h */
