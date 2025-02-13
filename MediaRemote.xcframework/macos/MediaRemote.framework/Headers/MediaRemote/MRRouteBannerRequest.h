//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRRouteBannerRequest_h
#define MRRouteBannerRequest_h
@import Foundation;

#include "MRBaseBannerRequest.h"
#include "MRStaticRouteBannerRequest.h"

@interface MRRouteBannerRequest : MRBaseBannerRequest

@property(retain, nonatomic) NSString *routeIdentifier;
@property(nonatomic) unsigned long long bannerType;
@property(retain, nonatomic) MRStaticRouteBannerRequest *staticRequest;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)requestWithStaticRequest:(id)request;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithRouteIdentifier:(id)identifier staticRequest:(id)request;

@end

#endif /* MRRouteBannerRequest_h */
