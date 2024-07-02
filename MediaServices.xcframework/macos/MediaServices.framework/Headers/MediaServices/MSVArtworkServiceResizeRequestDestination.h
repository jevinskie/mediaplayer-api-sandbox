//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVArtworkServiceResizeRequestDestination_h
#define MSVArtworkServiceResizeRequestDestination_h
@import Foundation;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding>

@property(readonly, nonatomic) long long format;
@property(readonly, nonatomic) CGSize size;
@property(readonly, nonatomic) NSURL *destinationURL;
@property(readonly, nonatomic) double compressionQuality;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)destinationWithFormat:(long long)format size:(struct CGSize {
    double x0;
    double x1;
})size url:(id)url;
+ (id)jpegDestinationWithSize:(struct CGSize {
    double x0;
    double x1;
})size compressionQuality:(double)quality url:(id)url;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithFormat:(long long)format size:(struct CGSize {
    double x0;
    double x1;
})size compressionQuality:(double)quality destinationURL:(id)url;

@end

#endif /* MSVArtworkServiceResizeRequestDestination_h */
