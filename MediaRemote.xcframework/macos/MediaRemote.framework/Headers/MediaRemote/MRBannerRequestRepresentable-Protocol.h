//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRBannerRequestRepresentable_Protocol_h
#define MRBannerRequestRepresentable_Protocol_h
@import Foundation;

@protocol MRBannerRequestRepresentable <NSObject, NSSecureCoding>

@required

@property(retain, nonatomic) NSString *requestIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifierAffinity;

@optional

@end

#endif /* MRBannerRequestRepresentable_Protocol_h */
