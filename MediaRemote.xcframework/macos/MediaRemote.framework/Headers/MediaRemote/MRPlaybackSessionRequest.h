//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRPlaybackSessionRequest_h
#define MRPlaybackSessionRequest_h
@import Foundation;

#include "_MRPlaybackSessionRequestProtobuf.h"

@interface MRPlaybackSessionRequest : NSObject

@property(readonly, nonatomic) _MRPlaybackSessionRequestProtobuf *protobuf;
@property(copy, nonatomic) NSString *requestIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) unsigned long long location;
@property(nonatomic) _Bool hasLocation;
@property(nonatomic) unsigned long long length;
@property(nonatomic) _Bool hasLength;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) NSRange range;

/* instance methods */
- (id)description;
- (_Bool)isEqual:(id)equal;
- (id)initWithData:(id)data;
- (id)initWithIdentifier:(id)identifier range:(NSRange)range;
- (id)initWithIdentifier:(id)identifier type:(id)type;
- (id)initWithProtobuf:(id)protobuf;

@end

#endif /* MRPlaybackSessionRequest_h */
