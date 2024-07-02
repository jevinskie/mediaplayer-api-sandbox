//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRNowPlayingClientCommandQueueEntry_h
#define MRNowPlayingClientCommandQueueEntry_h
@import Foundation;

#include "MRPlayerPath.h"

@interface MRNowPlayingClientCommandQueueEntry : NSObject

@property(nonatomic) unsigned int command;
@property(retain, nonatomic) NSMutableDictionary *options;
@property(retain, nonatomic) MRPlayerPath *playerPath;
@property(retain, nonatomic) NSDate *dateCreated;
@property(copy, nonatomic) id /* block */ commandCompletion;

/* instance methods */
- (id)description;

@end

#endif /* MRNowPlayingClientCommandQueueEntry_h */
