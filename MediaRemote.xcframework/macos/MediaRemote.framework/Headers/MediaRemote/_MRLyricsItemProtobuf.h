//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRLyricsItemProtobuf_h
#define _MRLyricsItemProtobuf_h
@import Foundation;

#include "_MRLyricsTokenProtobuf.h"

@class PBCodable;

@interface _MRLyricsItemProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int userProvided : 1;
    } _has;
}

@property(readonly, nonatomic) _Bool hasLyrics;
@property(retain, nonatomic) NSString *lyrics;
@property(nonatomic) _Bool hasUserProvided;
@property(nonatomic) _Bool userProvided;
@property(readonly, nonatomic) _Bool hasToken;
@property(retain, nonatomic) _MRLyricsTokenProtobuf *token;

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

#endif /* _MRLyricsItemProtobuf_h */
