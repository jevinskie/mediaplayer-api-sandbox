//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVArtworkServiceConversionRequest_h
#define MSVArtworkServiceConversionRequest_h
@import Foundation;

#include "MSVArtworkServiceRequest.h"

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest

@property(copy, nonatomic) NSURL *sourceURL;
@property(copy, nonatomic) NSURL *destinationURL;
@property(nonatomic) long long destinationFormat;
@property(nonatomic) double destinationCompressionQuality;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)debugDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (Class)operationClass;
- (id)initWithSourceURL:(id)url destinationURL:(id)url destinationFormat:(long long)format;
- (long long)operationPriority;

@end

#endif /* MSVArtworkServiceConversionRequest_h */
