//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVWatchdog_h
#define MSVWatchdog_h
@import Foundation;

@protocol OS_dispatch_queue
, OS_dispatch_source;

@interface MSVWatchdog : NSObject

@property(retain, nonatomic) NSOperationQueue *operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(retain, nonatomic) NSRunLoop *runLoop;
@property(nonatomic) _Bool scheduled;
@property(nonatomic) _Bool running;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property(nonatomic) double interval;
@property(nonatomic) double timeoutInterval;
@property(copy, nonatomic) id /* block */ timeoutCallback;
@property(retain, nonatomic) NSString *mode;

/* instance methods */
- (id)init;
- (void)resume;
- (void)suspend;
- (void)scheduleInRunLoop:(id)loop;
- (void)_invokeCallback;
- (void)_cancelTimeout;
- (void)_scheduleTest;
- (void)_scheduleTimeout;
- (void)scheduleInDispatchQueue:(id)queue;
- (void)scheduleInOperationQueue:(id)queue;

@end

#endif /* MSVWatchdog_h */
