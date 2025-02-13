//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRNowPlayingControllerConfiguration_h
#define MRNowPlayingControllerConfiguration_h
@import Foundation;

#include "MRDestination.h"
#include "MRPlaybackQueueRequest.h"

@interface MRNowPlayingControllerConfiguration : NSObject <NSCopying>

@property(nonatomic) _Bool singleShot;
@property(copy, nonatomic) id /* block */ discoveryPredicate;
@property(copy, nonatomic) MRPlaybackQueueRequest *playbackQueueRequest;
@property(copy, nonatomic) MRDestination *destination;
@property(nonatomic) _Bool requestSupportedCommands;
@property(nonatomic) _Bool requestPlaybackState;
@property(nonatomic) _Bool requestLastPlayingDate;
@property(nonatomic) _Bool requestClientProperties;
@property(nonatomic) _Bool requestPlaybackQueue;
@property(copy, nonatomic) NSString *label;
@property(nonatomic) _Bool wantsChangeCallbacksDuringInitialLoad;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
- (id)description;
- (id)initWithEndpoint:(id)endpoint;
- (id)initWithOrigin:(id)origin;
- (id)initWithDestination:(id)destination;
- (id)initWithOutputDeviceUID:(id)uid;
- (_Bool)isSingleShot;

@end

#endif /* MRNowPlayingControllerConfiguration_h */
