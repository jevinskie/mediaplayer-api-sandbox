//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef NSError_MRAdditions_h
#define NSError_MRAdditions_h
@import Foundation;

@interface NSError (MRAdditions)

/* instance methods */
- (_Bool)isInformational;
- (id)initWithMRError:(long long)mrerror;
- (id)initWithMRError:(long long)mrerror description:(id)description;
- (id)initWithMRError:(long long)mrerror format:(id)format;
- (id)initWithMRError:(long long)mrerror userInfo:(id)info;
- (id)mr_errorByEnvelopingWithMRError:(long long)mrerror;
- (id)mr_initWithProtobuf:(id)protobuf;
- (id)mr_protobuf;
- (id)recursiveUnderlyingError;

@end

#endif /* NSError_MRAdditions_h */
