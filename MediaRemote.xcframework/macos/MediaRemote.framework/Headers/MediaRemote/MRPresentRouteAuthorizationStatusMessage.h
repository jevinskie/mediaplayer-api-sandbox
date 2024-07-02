//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRPresentRouteAuthorizationStatusMessage_h
#define MRPresentRouteAuthorizationStatusMessage_h
@import Foundation;

#include "MRAVOutputDevice.h"
#include "MRProtocolMessage.h"

@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage

@property(readonly, nonatomic) MRAVOutputDevice *route;
@property(readonly, nonatomic) int status;

/* instance methods */
- (unsigned long long)type;
- (id)initWithRoute:(id)route status:(int)status;

@end

#endif /* MRPresentRouteAuthorizationStatusMessage_h */
