//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVTimer_h
#define MSVTimer_h
@import Foundation;

@protocol OS_dispatch_source;

@interface MSVTimer : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_source> *_timerSource;
}

/* class methods */
+ (id)timerWithInterval:(double)interval
                repeats:(_Bool)repeats
                  queue:(id)queue
                  block:(id /* block */)block;
+ (id)timerWithInterval:(double)interval block:(id /* block */)block;
+ (id)timerWithInterval:(double)interval queue:(id)queue block:(id /* block */)block;
+ (id)timerWithInterval:(double)interval repeats:(_Bool)repeats block:(id /* block */)block;

/* instance methods */
- (void)dealloc;
- (void)invalidate;
- (id)initWithInterval:(double)interval
               repeats:(_Bool)repeats
                 queue:(id)queue
                 block:(id /* block */)block;
- (id)initWithInterval:(double)interval queue:(id)queue block:(id /* block */)block;

@end

#endif /* MSVTimer_h */
