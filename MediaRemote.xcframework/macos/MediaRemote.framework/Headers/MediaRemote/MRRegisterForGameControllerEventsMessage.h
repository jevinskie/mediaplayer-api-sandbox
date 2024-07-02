//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRRegisterForGameControllerEventsMessage_h
#define MRRegisterForGameControllerEventsMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage

@property(readonly, nonatomic) unsigned int inputMode;

/* instance methods */
- (unsigned long long)type;
- (id)initWithInputMode:(unsigned int)mode;

@end

#endif /* MRRegisterForGameControllerEventsMessage_h */
