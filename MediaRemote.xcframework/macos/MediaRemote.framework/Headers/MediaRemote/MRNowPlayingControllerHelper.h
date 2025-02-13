//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRNowPlayingControllerHelper_h
#define MRNowPlayingControllerHelper_h
@import Foundation;

#include "MRNowPlayingControllerDelegate-Protocol.h"

@interface MRNowPlayingControllerHelper : NSObject <MRNowPlayingControllerDelegate>

@property(copy, nonatomic) id /* block */ didLoadResponse;
@property(copy, nonatomic) id /* block */ playbackStateDidChange;
@property(copy, nonatomic) id /* block */ playbackRateDidChange;
@property(copy, nonatomic) id /* block */ playbackQueueDidChange;
@property(copy, nonatomic) id /* block */ contentItemsDidUpdate;
@property(copy, nonatomic) id /* block */ contentItemsDidLoadArtwork;
@property(copy, nonatomic) id /* block */ supportedCommandsDidChange;
@property(copy, nonatomic) id /* block */ playerLastPlayingDateDidChange;
@property(copy, nonatomic) id /* block */ clientPropertiesDidChange;
@property(copy, nonatomic) id /* block */ playerPathDidChange;
@property(copy, nonatomic) id /* block */ didInvalidate;
@property(copy, nonatomic) id /* block */ didFailWithError;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)controller:(id)controller playerPathDidChange:(id)change;
- (void)controller:(id)controller clientPropertiesDidChangeFrom:(id)from to:(id)to;
- (void)controller:(id)controller contentItemsDidUpdateWithContentItemChanges:(id)changes;
- (void)controller:(id)controller didFailWithError:(id)error;
- (void)controller:(id)controller didLoadArtworkForContentItems:(id)items;
- (void)controller:(id)controller didLoadResponse:(id)response;
- (void)controller:(id)controller playbackQueueDidChangeFrom:(id)from to:(id)to;
- (void)controller:(id)controller playbackRateDidChangeFrom:(float)from to:(float)to;
- (void)controller:(id)controller playbackStateDidChangeFrom:(unsigned int)from to:(unsigned int)to;
- (void)controller:(id)controller playerLastPlayingDateDidChange:(id)change;
- (void)controller:(id)controller supportedCommandsDidChangeFrom:(id)from to:(id)to;
- (void)controllerWillReloadForInvalidation:(id)invalidation;

@end

#endif /* MRNowPlayingControllerHelper_h */
