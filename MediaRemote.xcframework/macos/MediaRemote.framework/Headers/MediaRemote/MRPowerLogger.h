//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRPowerLogger_h
#define MRPowerLogger_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface MRPowerLogger : NSObject

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (id)sharedLogger;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)logEvent:(id)event withInfo:(id)info;

@end

#endif /* MRPowerLogger_h */
