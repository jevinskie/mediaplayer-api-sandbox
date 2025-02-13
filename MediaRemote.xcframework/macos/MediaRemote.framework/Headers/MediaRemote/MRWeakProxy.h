//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRWeakProxy_h
#define MRWeakProxy_h
@import Foundation;

@interface MRWeakProxy : NSObject

@property(weak, nonatomic) id object;
@property(retain, nonatomic) Protocol *protocol;

/* class methods */
+ (id)weakProxyWithObject:(id)object protocol:(id)protocol;

/* instance methods */
- (void)forwardInvocation:(id)invocation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)methodSignatureForSelector:(SEL)selector;

@end

#endif /* MRWeakProxy_h */
