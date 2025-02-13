//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRVideoThumbnailRequestProtobuf_h
#define _MRVideoThumbnailRequestProtobuf_h
@import Foundation;

@class PBCodable;

@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int thumbnailsHeight : 1;
        unsigned int thumbnailsWidth : 1;
    } _has;
}

@property(readonly, nonatomic) unsigned long long timeIntervalsCount;
@property(readonly, nonatomic) double *timeIntervals;
@property(nonatomic) _Bool hasThumbnailsWidth;
@property(nonatomic) float thumbnailsWidth;
@property(nonatomic) _Bool hasThumbnailsHeight;
@property(nonatomic) float thumbnailsHeight;

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)to;
- (void)mergeFrom:(id)from;
- (_Bool)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)addTimeIntervals:(double)intervals;
- (void)clearTimeIntervals;
- (void)setTimeIntervals:(double *)intervals count:(unsigned long long)count;
- (double)timeIntervalsAtIndex:(unsigned long long)index;

@end

#endif /* _MRVideoThumbnailRequestProtobuf_h */
