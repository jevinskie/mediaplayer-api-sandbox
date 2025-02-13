//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRAVRoutingDiscoverySessionConfiguration_h
#define MRAVRoutingDiscoverySessionConfiguration_h
@import Foundation;

#include "_MRDiscoverySessionConfigurationProtobuf.h"

@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying, NSSecureCoding>

@property(nonatomic) _Bool populatesExternalDevice;
@property(copy, nonatomic) NSString *outputDeviceUID;
@property(readonly, copy, nonatomic) _MRDiscoverySessionConfigurationProtobuf *protobuf;
@property(readonly, nonatomic) unsigned int features;
@property(copy, nonatomic) NSString *routingContextUID;
@property(nonatomic) _Bool enableThrottling;
@property(nonatomic) _Bool alwaysAllowUpdates;
@property(nonatomic) unsigned int targetAudioSessionID;
@property(readonly, nonatomic) _Bool isLocal;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)configurationWithEndpointFeatures:(unsigned int)features;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithEndpointFeatures:(unsigned int)features;
- (id)initWithProtobuf:(id)protobuf;

@end

#endif /* MRAVRoutingDiscoverySessionConfiguration_h */
