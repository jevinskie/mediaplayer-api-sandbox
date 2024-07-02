//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRCreateHostedEndpointRequestMessage_h
#define MRCreateHostedEndpointRequestMessage_h
@import Foundation;

#include "MRProtocolMessage.h"

@interface MRCreateHostedEndpointRequestMessage : MRProtocolMessage

@property(readonly, nonatomic) NSArray *outputDeviceUIDs;

/* instance methods */
- (unsigned long long)type;
- (id)initWithOutputDeviceUIDs:(id)uids;

@end

#endif /* MRCreateHostedEndpointRequestMessage_h */
