//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRQHONowPlayingControllerDelegate_Protocol_h
#define MRQHONowPlayingControllerDelegate_Protocol_h
@import Foundation;

@protocol MRQHONowPlayingControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)controller:(id)controller contentItemsDidUpdate:(id)update;
- (void)controller:(id)controller deviceLastPlayingDateDidChange:(id)change;
- (void)controller:(id)controller didFailWithError:(id)error;
- (void)controller:(id)controller didLoadArtworkForContentItems:(id)items;
- (void)controller:(id)controller didLoadResponse:(id)response;
- (void)controller:(id)controller didUpdateResponse:(id)response;
- (void)controller:(id)controller playbackQueueDidChangeFrom:(id)from to:(id)to;
- (void)controller:(id)controller playbackStateDidChangeFrom:(unsigned int)from to:(unsigned int)to;
- (void)controller:(id)controller playerLastPlayingDateDidChange:(id)change;
- (void)controller:(id)controller supportedCommandsDidChangeFrom:(id)from to:(id)to;
- (void)controllerWillReloadForInvalidation:(id)invalidation;

@end

#endif /* MRQHONowPlayingControllerDelegate_Protocol_h */
