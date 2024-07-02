//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVBlockGuard_h
#define MSVBlockGuard_h
@import Foundation;

#include "MSVTimer.h"

@protocol OS_dispatch_queue;

@interface MSVBlockGuard : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _disarmed;
    _Bool _didTimeout;
    MSVTimer *_timeoutTimer;
    id /* block */ _interruptionHandler;
}

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithTimeout:(double)timeout;
- (_Bool)disarm;
- (id)initWithDeallocHandler:(id /* block */)handler;
- (id)initWithTimeout:(double)timeout interruptionHandler:(id /* block */)handler;
- (void)_interruptWithReason:(long long)reason;

@end

#endif /* MSVBlockGuard_h */
