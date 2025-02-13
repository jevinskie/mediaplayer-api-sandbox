//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRGameControllerButtonsProtobuf_h
#define _MRGameControllerButtonsProtobuf_h
@import Foundation;

@class PBCodable;

@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int a : 1;
        unsigned int b : 1;
        unsigned int dPadX : 1;
        unsigned int dPadY : 1;
        unsigned int leftShoulder : 1;
        unsigned int leftThumbstickX : 1;
        unsigned int leftThumbstickY : 1;
        unsigned int leftTrigger : 1;
        unsigned int pause : 1;
        unsigned int rightShoulder : 1;
        unsigned int rightThumbstickX : 1;
        unsigned int rightThumbstickY : 1;
        unsigned int rightTrigger : 1;
        unsigned int x : 1;
        unsigned int y : 1;
    } _has;
}

@property(nonatomic) _Bool hasDPadX;
@property(nonatomic) float dPadX;
@property(nonatomic) _Bool hasDPadY;
@property(nonatomic) float dPadY;
@property(nonatomic) _Bool hasA;
@property(nonatomic) float a;
@property(nonatomic) _Bool hasB;
@property(nonatomic) float b;
@property(nonatomic) _Bool hasX;
@property(nonatomic) float x;
@property(nonatomic) _Bool hasY;
@property(nonatomic) float y;
@property(nonatomic) _Bool hasLeftShoulder;
@property(nonatomic) float leftShoulder;
@property(nonatomic) _Bool hasRightShoulder;
@property(nonatomic) float rightShoulder;
@property(nonatomic) _Bool hasLeftThumbstickX;
@property(nonatomic) float leftThumbstickX;
@property(nonatomic) _Bool hasLeftThumbstickY;
@property(nonatomic) float leftThumbstickY;
@property(nonatomic) _Bool hasRightThumbstickX;
@property(nonatomic) float rightThumbstickX;
@property(nonatomic) _Bool hasRightThumbstickY;
@property(nonatomic) float rightThumbstickY;
@property(nonatomic) _Bool hasLeftTrigger;
@property(nonatomic) float leftTrigger;
@property(nonatomic) _Bool hasRightTrigger;
@property(nonatomic) float rightTrigger;
@property(nonatomic) _Bool hasPause;
@property(nonatomic) float pause;

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

#endif /* _MRGameControllerButtonsProtobuf_h */
