//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRRegisterVoiceInputDeviceMessage_h
#define MRRegisterVoiceInputDeviceMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRVirtualVoiceInputDeviceDescriptor.h"

@interface MRRegisterVoiceInputDeviceMessage : MRProtocolMessage

@property(readonly, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;

/* instance methods */
- (unsigned long long)type;
- (id)initWithDescriptor:(id)descriptor;

@end

#endif /* MRRegisterVoiceInputDeviceMessage_h */
