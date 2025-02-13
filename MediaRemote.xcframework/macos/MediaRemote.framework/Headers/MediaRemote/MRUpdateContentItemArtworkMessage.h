//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRUpdateContentItemArtworkMessage_h
#define MRUpdateContentItemArtworkMessage_h
@import Foundation;

#include "MRPlayerPath.h"
#include "MRProtocolMessage.h"

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property(readonly, nonatomic) MRPlayerPath *playerPath;
@property(readonly, nonatomic) NSArray *contentItems;

/* instance methods */
- (unsigned long long)type;
- (id)initWithContentItems:(id)items forPlayerPath:(id)path encoding:(long long)encoding;

@end

#endif /* MRUpdateContentItemArtworkMessage_h */
