//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRMutableAudioDataBlock_h
#define MRMutableAudioDataBlock_h
@import Foundation;

#include "MRAudioBuffer.h"
#include "MRAudioDataBlock.h"

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property(retain, nonatomic) MRAudioBuffer *buffer;
@property(nonatomic) struct {
    double x0;
    double x1;
} time;
@property(nonatomic) float gain;

@end

#endif /* MRMutableAudioDataBlock_h */
