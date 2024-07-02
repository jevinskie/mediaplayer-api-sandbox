//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRSetStateMessageProtobuf_h
#define _MRSetStateMessageProtobuf_h
@import Foundation;

#include "_MRNowPlayingInfoProtobuf.h"
#include "_MRNowPlayingPlayerPathProtobuf.h"
#include "_MRPlaybackQueueCapabilitiesProtobuf.h"
#include "_MRPlaybackQueueProtobuf.h"
#include "_MRPlaybackQueueRequestProtobuf.h"
#include "_MRSupportedCommandsProtobuf.h"

@class PBCodable;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int playbackStateTimestamp : 1;
        unsigned int playbackState : 1;
    } _has;
}

@property(readonly, nonatomic) _Bool hasNowPlayingInfo;
@property(retain, nonatomic) _MRNowPlayingInfoProtobuf *nowPlayingInfo;
@property(readonly, nonatomic) _Bool hasSupportedCommands;
@property(retain, nonatomic) _MRSupportedCommandsProtobuf *supportedCommands;
@property(readonly, nonatomic) _Bool hasPlaybackQueue;
@property(retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property(readonly, nonatomic) _Bool hasDisplayID;
@property(retain, nonatomic) NSString *displayID;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(retain, nonatomic) NSString *displayName;
@property(nonatomic) _Bool hasPlaybackState;
@property(nonatomic) int playbackState;
@property(readonly, nonatomic) _Bool hasPlaybackQueueCapabilities;
@property(retain, nonatomic) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities;
@property(readonly, nonatomic) _Bool hasPlayerPath;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) _Bool hasRequest;
@property(retain, nonatomic) _MRPlaybackQueueRequestProtobuf *request;
@property(nonatomic) _Bool hasPlaybackStateTimestamp;
@property(nonatomic) double playbackStateTimestamp;

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
- (int)StringAsPlaybackState:(id)state;
- (id)playbackStateAsString:(int)string;

@end

#endif /* _MRSetStateMessageProtobuf_h */
