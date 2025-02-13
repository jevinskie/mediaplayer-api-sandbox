//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRErrorProtobuf_h
#define _MRErrorProtobuf_h
@import Foundation;

@class PBCodable;

@interface _MRErrorProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int code : 1;
    } _has;
}

@property(readonly, nonatomic) _Bool hasDomain;
@property(retain, nonatomic) NSString *domain;
@property(nonatomic) _Bool hasCode;
@property(nonatomic) int code;
@property(readonly, nonatomic) _Bool hasLocalizedDescription;
@property(retain, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) _Bool hasLocalizedFailureReason;
@property(retain, nonatomic) NSString *localizedFailureReason;
@property(retain, nonatomic) NSMutableArray *underlyingErrors;

/* class methods */
+ (Class)underlyingErrorsType;

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
- (void)addUnderlyingErrors:(id)errors;
- (void)clearUnderlyingErrors;
- (id)underlyingErrorsAtIndex:(unsigned long long)index;
- (unsigned long long)underlyingErrorsCount;

@end

#endif /* _MRErrorProtobuf_h */
