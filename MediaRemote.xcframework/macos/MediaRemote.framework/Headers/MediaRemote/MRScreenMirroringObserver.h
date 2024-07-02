//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRScreenMirroringObserver_h
#define MRScreenMirroringObserver_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface MRScreenMirroringObserver : NSObject

@property(readonly, nonatomic) id /* block */ callback;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(nonatomic) long long deviceCount;

/* class methods */
+ (id)UIControllingObserver;
+ (id)observerWithStateChangeCallback:(id /* block */)callback;

/* instance methods */
- (void)dealloc;
- (void)_init;
- (void)_notifyIfNeeded;
- (void)_contextChangeNotification:(id)notification;
- (id)initWithStateChangeCallback:(id /* block */)callback;

@end

#endif /* MRScreenMirroringObserver_h */
