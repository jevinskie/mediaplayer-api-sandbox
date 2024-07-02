//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRGroupSessionParticipantProtobuf_h
#define _MRGroupSessionParticipantProtobuf_h
@import Foundation;

#include "_MRUserIdentityProtobuf.h"

@class PBCodable;

@interface _MRGroupSessionParticipantProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int connected : 1;
        unsigned int guest : 1;
    } _has;
}

@property(readonly, nonatomic) _Bool hasIdentifier;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasIdentity;
@property(retain, nonatomic) _MRUserIdentityProtobuf *identity;
@property(nonatomic) _Bool hasConnected;
@property(nonatomic) _Bool connected;
@property(nonatomic) _Bool hasGuest;
@property(nonatomic) _Bool guest;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)to;
- (void)mergeFrom:(id)from;
- (_Bool)readFrom:(id)from;
- (void)writeTo:(id)to;

@end

#endif /* _MRGroupSessionParticipantProtobuf_h */
