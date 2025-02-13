//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRNowPlayingAudioFormatContentInfo_h
#define MRNowPlayingAudioFormatContentInfo_h
@import Foundation;

#include "_MRMRNowPlayingAudioFormatContentInfoProtobuf.h"

@interface MRNowPlayingAudioFormatContentInfo : NSObject

@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic) NSNumber *audioSessionID;
@property(readonly, nonatomic) NSNumber *audioFormat;
@property(readonly, nonatomic) NSNumber *channelCount;
@property(readonly, nonatomic) NSString *bestAvailableContent;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRMRNowPlayingAudioFormatContentInfoProtobuf *protobuf;
@property(copy, nonatomic) NSString *bundleID;
@property(readonly, copy, nonatomic) NSString *audioFormatDescription;
@property(readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property(readonly, nonatomic) long long bestAvailableAudioFormat;
@property(readonly, nonatomic) _Bool multichannel;
@property(readonly, nonatomic) _Bool eligibleForSpatialization;
@property(readonly, nonatomic) _Bool spatialized;
@property(nonatomic) long long intendedSpatialExperience;
@property(nonatomic) long long resolvedSpatialExperience;
@property(nonatomic) long long renderingMode;

/* instance methods */
- (id)description;
- (_Bool)isEqual:(id)equal;
- (id)initWithData:(id)data;
- (id)initWithPid:(int)pid
                       bundleID:(id)id
                 audioSessionID:(id)id
                    audioFormat:(id)format
                   channelCount:(id)count
           bestAvailableContent:(id)content
    isEligibleForSpatialization:(id)spatialization
                  isSpatialized:(id)spatialized;
- (id)initWithProtobuf:(id)protobuf;
- (_Bool)isEligibleForSpatialization;
- (_Bool)isMultichannel;
- (_Bool)isSpatialized;

@end

#endif /* MRNowPlayingAudioFormatContentInfo_h */
