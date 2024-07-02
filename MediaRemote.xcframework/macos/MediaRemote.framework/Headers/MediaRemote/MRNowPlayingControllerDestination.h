//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRNowPlayingControllerDestination_h
#define MRNowPlayingControllerDestination_h
@import Foundation;

#include "MRDestination.h"
#include "MRPlayerPath.h"

@interface MRNowPlayingControllerDestination : MRDestination

@property(retain, nonatomic) MRPlayerPath *unresolvedPlayerPath;
@property(retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property(nonatomic) _Bool isEndpointSet;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (void)setEndpoint:(id)endpoint;
- (id)initWithConfiguration:(id)configuration;

@end

#endif /* MRNowPlayingControllerDestination_h */
