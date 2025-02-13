//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRContentItem_h
#define MRContentItem_h
@import Foundation;

#include "MRArtwork.h"
#include "MRContentItemMetadata.h"

@interface MRContentItem : NSObject <NSCopying>

@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) MRContentItemMetadata *metadata;
@property(copy, nonatomic) NSString *info;
@property(copy, nonatomic) NSArray *availableLanguageOptions;
@property(copy, nonatomic) NSArray *currentLanguageOptions;
@property(copy, nonatomic) NSArray *sections;
@property(copy, nonatomic) NSString *parentIdentifier;
@property(copy, nonatomic) NSString *ancestorIdentifier;
@property(copy, nonatomic) NSString *associatedParticipantIdentifier;
@property(copy, nonatomic) NSString *queueIdentifier;
@property(copy, nonatomic) NSString *requestIdentifier;
@property(retain, nonatomic) MRArtwork *artwork;
@property(retain, nonatomic) NSArray *availableArtworkFormats;
@property(retain, nonatomic) NSArray *availableRemoteArtworkFormats;
@property(retain, nonatomic) NSDictionary *artworks;
@property(retain, nonatomic) NSDictionary *remoteArtworks;
@property(readonly, nonatomic) MRContentItem *skeleton;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSDictionary *nowPlayingInfo;

/* class methods */
+ (id)extractedIdentifierFromNowPlayingInfo:(id)info;
+ (id)mergeContentItems:(id)items;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (id)initWithData:(id)data;
- (id)initWithIdentifier:(id)identifier;
- (void)mergeFrom:(id)from;
- (_Bool)isEffectivelyEqual:(id)equal;
- (id)initWithNowPlayingInfo:(id)info;
- (id)initWithProtobuf:(id)protobuf;
- (id)protobufWithEncoding:(long long)encoding;
- (void)setNowPlayingInfo:(id)info policy:(unsigned char)policy request:(id)request;

@end

#endif /* MRContentItem_h */
