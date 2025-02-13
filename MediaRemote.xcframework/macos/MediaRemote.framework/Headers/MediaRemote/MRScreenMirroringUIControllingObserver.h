//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRScreenMirroringUIControllingObserver_h
#define MRScreenMirroringUIControllingObserver_h
@import Foundation;

#include "MRScreenMirroringObserver.h"
#include "MRScreenMirroringQuickControlsUIControllable-Protocol.h"

@interface MRScreenMirroringUIControllingObserver : MRScreenMirroringObserver

@property(retain, nonatomic) id<MRScreenMirroringQuickControlsUIControllable> uiController;
@property(readonly, nonatomic) MRScreenMirroringObserver *internalObserver;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)_mirrorStateChanged:(_Bool)changed screenType:(unsigned int)type;

@end

#endif /* MRScreenMirroringUIControllingObserver_h */
