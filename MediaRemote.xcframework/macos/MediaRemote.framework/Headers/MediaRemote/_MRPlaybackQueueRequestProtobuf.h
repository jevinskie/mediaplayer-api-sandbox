//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRPlaybackQueueRequestProtobuf_h
#define _MRPlaybackQueueRequestProtobuf_h
@import Foundation;

#include "_MRNowPlayingPlayerPathProtobuf.h"
#include "_MRPlaybackQueueContextProtobuf.h"

@class PBCodable;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int artworkHeight : 1;
        unsigned int artworkWidth : 1;
        unsigned int cachingPolicy : 1;
        unsigned int length : 1;
        unsigned int location : 1;
        unsigned int includeAvailableArtworkFormats : 1;
        unsigned int includeInfo : 1;
        unsigned int includeLanguageOptions : 1;
        unsigned int includeLyrics : 1;
        unsigned int includeMetadata : 1;
        unsigned int includeParticipants : 1;
        unsigned int includeSections : 1;
        unsigned int isLegacyNowPlayingInfoRequest : 1;
        unsigned int returnContentItemAssetsInUserCompletion : 1;
    } _has;
}

@property(nonatomic) _Bool hasLocation;
@property(nonatomic) int location;
@property(nonatomic) _Bool hasLength;
@property(nonatomic) int length;
@property(nonatomic) _Bool hasIncludeMetadata;
@property(nonatomic) _Bool includeMetadata;
@property(nonatomic) _Bool hasArtworkWidth;
@property(nonatomic) double artworkWidth;
@property(nonatomic) _Bool hasArtworkHeight;
@property(nonatomic) double artworkHeight;
@property(nonatomic) _Bool hasIncludeLyrics;
@property(nonatomic) _Bool includeLyrics;
@property(nonatomic) _Bool hasIncludeSections;
@property(nonatomic) _Bool includeSections;
@property(nonatomic) _Bool hasIncludeInfo;
@property(nonatomic) _Bool includeInfo;
@property(nonatomic) _Bool hasIncludeLanguageOptions;
@property(nonatomic) _Bool includeLanguageOptions;
@property(readonly, nonatomic) _Bool hasContext;
@property(retain, nonatomic) _MRPlaybackQueueContextProtobuf *context;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(retain, nonatomic) NSString *requestID;
@property(retain, nonatomic) NSMutableArray *contentItemIdentifiers;
@property(nonatomic) _Bool hasReturnContentItemAssetsInUserCompletion;
@property(nonatomic) _Bool returnContentItemAssetsInUserCompletion;
@property(readonly, nonatomic) _Bool hasPlayerPath;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(nonatomic) _Bool hasCachingPolicy;
@property(nonatomic) int cachingPolicy;
@property(readonly, nonatomic) _Bool hasLabel;
@property(retain, nonatomic) NSString *label;
@property(nonatomic) _Bool hasIsLegacyNowPlayingInfoRequest;
@property(nonatomic) _Bool isLegacyNowPlayingInfoRequest;
@property(nonatomic) _Bool hasIncludeParticipants;
@property(nonatomic) _Bool includeParticipants;
@property(nonatomic) _Bool hasIncludeAvailableArtworkFormats;
@property(nonatomic) _Bool includeAvailableArtworkFormats;
@property(retain, nonatomic) NSMutableArray *requestedArtworkFormats;
@property(retain, nonatomic) NSMutableArray *requestedRemoteArtworkFormats;

/* class methods */
+ (Class)contentItemIdentifiersType;
+ (Class)requestedArtworkFormatsType;
+ (Class)requestedRemoteArtworkFormatsType;

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
- (id)requestedArtworkFormatsAtIndex:(unsigned long long)index;
- (void)addContentItemIdentifiers:(id)identifiers;
- (void)addRequestedArtworkFormats:(id)formats;
- (void)addRequestedRemoteArtworkFormats:(id)formats;
- (void)clearContentItemIdentifiers;
- (void)clearRequestedArtworkFormats;
- (void)clearRequestedRemoteArtworkFormats;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)index;
- (unsigned long long)contentItemIdentifiersCount;
- (unsigned long long)requestedArtworkFormatsCount;
- (id)requestedRemoteArtworkFormatsAtIndex:(unsigned long long)index;
- (unsigned long long)requestedRemoteArtworkFormatsCount;

@end

#endif /* _MRPlaybackQueueRequestProtobuf_h */
