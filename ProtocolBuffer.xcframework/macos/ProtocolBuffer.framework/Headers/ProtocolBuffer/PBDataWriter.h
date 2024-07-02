//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 300.23.11.14.2
//
#ifndef PBDataWriter_h
#define PBDataWriter_h
@import Foundation;

#include "PBMutableData.h"

@interface PBDataWriter : NSObject {
    /* instance variables */
    PBMutableData *_data;
}

/* instance methods */
- (id)init;
- (id)data;
- (unsigned long long)write:(const char *)write maxLength:(unsigned long long)length;
- (_Bool)writeData:(id)data;
- (id)immutableData;
- (id)initWithInitialCapacity:(unsigned long long)capacity;
- (void)writeBOOL:(_Bool)_bool forTag:(unsigned int)tag;
- (void)writeBareVarint:(unsigned long long)varint;
- (void)writeBigEndianFixed16:(unsigned short)fixed16;
- (void)writeBigEndianFixed32:(unsigned int)fixed32;
- (void)writeBigEndianShortThenString:(id)string;
- (void)writeData:(id)data forTag:(unsigned int)tag;
- (void)writeDouble:(double)_double forTag:(unsigned int)tag;
- (void)writeFixed32:(unsigned int)fixed32 forTag:(unsigned int)tag;
- (void)writeFixed64:(unsigned long long)fixed64 forTag:(unsigned int)tag;
- (void)writeFloat:(float)_float forTag:(unsigned int)tag;
- (void)writeInt32:(int)int32 forTag:(unsigned int)tag;
- (void)writeInt64:(long long)int64 forTag:(unsigned int)tag;
- (void)writeInt8:(signed char)int8;
- (void)writeProtoBuffer:(id)buffer;
- (void)writeSfixed32:(int)sfixed32 forTag:(unsigned int)tag;
- (void)writeSfixed64:(long long)sfixed64 forTag:(unsigned int)tag;
- (void)writeSint32:(int)sint32 forTag:(unsigned int)tag;
- (void)writeSint64:(long long)sint64 forTag:(unsigned int)tag;
- (void)writeString:(id)string forTag:(unsigned int)tag;
- (void)writeTag:(unsigned int)tag andType:(unsigned char)type;
- (void)writeUint32:(unsigned int)uint32 forTag:(unsigned int)tag;
- (void)writeUint64:(unsigned long long)uint64 forTag:(unsigned int)tag;
- (void)writeUint8:(unsigned char)uint8;

@end

#endif /* PBDataWriter_h */
