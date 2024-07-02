//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRSendVirtualTouchEventMessage_h
#define MRSendVirtualTouchEventMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property(readonly, nonatomic) MRHIDTouchEvent event;
@property(readonly, nonatomic) unsigned long long virtualDeviceID;

/* instance methods */
- (unsigned long long)type;
- (id)initWithTouchEvent:(MRHIDTouchEvent)event virtualDeviceID:(unsigned long long)id;

@end

#endif /* MRSendVirtualTouchEventMessage_h */
