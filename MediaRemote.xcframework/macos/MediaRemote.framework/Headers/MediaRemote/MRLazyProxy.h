//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRLazyProxy_h
#define MRLazyProxy_h
@import Foundation;

@interface MRLazyProxy : NSProxy

@property(readonly, nonatomic) id /* block */ objectCallback;
@property(readonly, nonatomic) Protocol *protocol;

/* class methods */
+ (id)proxyWithProtocol:(id)protocol objectCallback:(id /* block */)callback;

/* instance methods */
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;

@end

#endif /* MRLazyProxy_h */
