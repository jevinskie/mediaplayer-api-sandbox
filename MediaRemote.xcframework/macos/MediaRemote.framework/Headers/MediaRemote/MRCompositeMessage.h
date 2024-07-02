//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRCompositeMessage_h
#define MRCompositeMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRProtocolMessageOptions.h"

@interface MRCompositeMessage : MRProtocolMessage {
    /* instance variables */
    MRProtocolMessageOptions *_transportOptions;
}

@property(readonly, nonatomic) NSArray *messages;

/* instance methods */
- (id)description;
- (id)init;
- (void)addMessage:(id)message;
- (void)setTransportOptions:(id)options;
- (id)transportOptions;

@end

#endif /* MRCompositeMessage_h */
