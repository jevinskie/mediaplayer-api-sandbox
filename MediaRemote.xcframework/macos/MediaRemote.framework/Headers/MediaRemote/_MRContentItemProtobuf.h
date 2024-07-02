//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRContentItemProtobuf_h
#define _MRContentItemProtobuf_h
@import Foundation;

#include "_MRContentItemMetadataProtobuf.h"
#include "_MRLyricsItemProtobuf.h"

@class PBCodable;

@interface _MRContentItemProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int artworkDataHeight : 1;
        unsigned int artworkDataWidth : 1;
    } _has;
}

@property(readonly, nonatomic) _Bool hasIdentifier;
@property(retain, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(retain, nonatomic) _MRContentItemMetadataProtobuf *metadata;
@property(readonly, nonatomic) _Bool hasArtworkData;
@property(retain, nonatomic) NSData *artworkData;
@property(readonly, nonatomic) _Bool hasInfo;
@property(retain, nonatomic) NSString *info;
@property(retain, nonatomic) NSMutableArray *availableLanguageOptions;
@property(retain, nonatomic) NSMutableArray *currentLanguageOptions;
@property(readonly, nonatomic) _Bool hasLyrics;
@property(retain, nonatomic) _MRLyricsItemProtobuf *lyrics;
@property(retain, nonatomic) NSMutableArray *sections;
@property(readonly, nonatomic) _Bool hasParentIdentifier;
@property(retain, nonatomic) NSString *parentIdentifier;
@property(readonly, nonatomic) _Bool hasAncestorIdentifier;
@property(retain, nonatomic) NSString *ancestorIdentifier;
@property(readonly, nonatomic) _Bool hasQueueIdentifier;
@property(retain, nonatomic) NSString *queueIdentifier;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;
@property(retain, nonatomic) NSString *requestIdentifier;
@property(nonatomic) _Bool hasArtworkDataWidth;
@property(nonatomic) int artworkDataWidth;
@property(nonatomic) _Bool hasArtworkDataHeight;
@property(nonatomic) int artworkDataHeight;
@property(readonly, nonatomic) _Bool hasAssociatedParticipantIdentifier;
@property(retain, nonatomic) NSString *associatedParticipantIdentifier;
@property(retain, nonatomic) NSMutableArray *availableArtworkFormats;
@property(retain, nonatomic) NSMutableArray *availableRemoteArtworkFormats;
@property(retain, nonatomic) NSMutableArray *dataArtworks;
@property(retain, nonatomic) NSMutableArray *remoteArtworks;

/* class methods */
+ (Class)availableArtworkFormatsType;
+ (Class)availableLanguageOptionsType;
+ (Class)availableRemoteArtworkFormatsType;
+ (Class)currentLanguageOptionsType;
+ (Class)dataArtworksType;
+ (Class)remoteArtworksType;
+ (Class)sectionsType;

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
- (void)clearSections;
- (unsigned long long)sectionsCount;
- (id)availableArtworkFormatsAtIndex:(unsigned long long)index;
- (void)addAvailableArtworkFormats:(id)formats;
- (void)addAvailableLanguageOptions:(id)options;
- (void)addAvailableRemoteArtworkFormats:(id)formats;
- (void)addCurrentLanguageOptions:(id)options;
- (void)addDataArtworks:(id)artworks;
- (void)addRemoteArtworks:(id)artworks;
- (void)addSections:(id)sections;
- (unsigned long long)availableArtworkFormatsCount;
- (id)availableLanguageOptionsAtIndex:(unsigned long long)index;
- (unsigned long long)availableLanguageOptionsCount;
- (id)availableRemoteArtworkFormatsAtIndex:(unsigned long long)index;
- (unsigned long long)availableRemoteArtworkFormatsCount;
- (void)clearAvailableArtworkFormats;
- (void)clearAvailableLanguageOptions;
- (void)clearAvailableRemoteArtworkFormats;
- (void)clearCurrentLanguageOptions;
- (void)clearDataArtworks;
- (void)clearRemoteArtworks;
- (id)currentLanguageOptionsAtIndex:(unsigned long long)index;
- (unsigned long long)currentLanguageOptionsCount;
- (id)dataArtworksAtIndex:(unsigned long long)index;
- (unsigned long long)dataArtworksCount;
- (id)remoteArtworksAtIndex:(unsigned long long)index;
- (unsigned long long)remoteArtworksCount;
- (id)sectionsAtIndex:(unsigned long long)index;

@end

#endif /* _MRContentItemProtobuf_h */
