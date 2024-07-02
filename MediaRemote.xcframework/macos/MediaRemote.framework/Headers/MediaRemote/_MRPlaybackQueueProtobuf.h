//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRPlaybackQueueProtobuf_h
#define _MRPlaybackQueueProtobuf_h
@import Foundation;

#include "_MRNowPlayingPlayerPathProtobuf.h"
#include "_MRPlaybackQueueContextProtobuf.h"

@class PBCodable;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int location : 1;
        unsigned int sendingPlaybackQueueTransaction : 1;
    } _has;
}

@property(nonatomic) _Bool hasLocation;
@property(nonatomic) int location;
@property(retain, nonatomic) NSMutableArray *contentItems;
@property(readonly, nonatomic) _Bool hasContext;
@property(retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(retain, nonatomic) NSString *requestID;
@property(readonly, nonatomic) _Bool hasResolvedPlayerPath;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property(nonatomic) _Bool hasSendingPlaybackQueueTransaction;
@property(nonatomic) _Bool sendingPlaybackQueueTransaction;
@property(readonly, nonatomic) _Bool hasQueueIdentifier;
@property(retain, nonatomic) NSString *queueIdentifier;
@property(retain, nonatomic) NSMutableArray *participants;
@property(retain, nonatomic) NSMutableArray *homeUserIdentifiers;

/* class methods */
+ (Class)participantsType;
+ (Class)contentItemType;
+ (Class)homeUserIdentifiersType;

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
- (void)addParticipants:(id)participants;
- (void)clearParticipants;
- (id)participantsAtIndex:(unsigned long long)index;
- (unsigned long long)participantsCount;
- (void)addContentItem:(id)item;
- (void)addHomeUserIdentifiers:(id)identifiers;
- (void)clearContentItems;
- (void)clearHomeUserIdentifiers;
- (id)contentItemAtIndex:(unsigned long long)index;
- (unsigned long long)contentItemsCount;
- (id)homeUserIdentifiersAtIndex:(unsigned long long)index;
- (unsigned long long)homeUserIdentifiersCount;

@end

#endif /* _MRPlaybackQueueProtobuf_h */
