//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRGroupSessionBannerRequest_h
#define MRGroupSessionBannerRequest_h
@import Foundation;

#include "MRBaseBannerRequest.h"

@interface MRGroupSessionBannerRequest : MRBaseBannerRequest

@property(retain, nonatomic) NSString *hostDisplayName;
@property(nonatomic) unsigned char routeType;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)requestWithBundleIdentifierAffinity:(id)affinity
                          hostDisplayName:(id)name
                                routeType:(unsigned char)type;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithBundleIdentifierAffinity:(id)affinity
                       hostDisplayName:(id)name
                             routeType:(unsigned char)type;

@end

#endif /* MRGroupSessionBannerRequest_h */
