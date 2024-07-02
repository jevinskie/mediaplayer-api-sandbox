//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRUpdateActiveSystemEndpointRequest_h
#define MRUpdateActiveSystemEndpointRequest_h
@import Foundation;

#include "_MRUpdateActiveSystemEndpointRequestProtobuf.h"

@interface MRUpdateActiveSystemEndpointRequest : NSObject <NSCopying>

@property(copy, nonatomic) NSString *clientBundleIdentifier;
@property(nonatomic) _Bool pairedDeviceSync;
@property(nonatomic) long long type;
@property(nonatomic) _Bool demoteWhenSyncingToCompanion;
@property(nonatomic) double disableDuration;
@property(readonly, nonatomic) _MRUpdateActiveSystemEndpointRequestProtobuf *protobuf;
@property(copy, nonatomic) NSString *outputDeviceUID;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long changeType;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithOutputDeviceUID:(id)uid reason:(id)reason;
- (id)initWithOutputDeviceUID:(id)uid type:(long long)type reason:(id)reason;
- (id)initWithProtobuf:(id)protobuf;
- (_Bool)isPairedDeviceSync;
- (void)perform:(id)perform completion:(id /* block */)completion;

@end

#endif /* MRUpdateActiveSystemEndpointRequest_h */
