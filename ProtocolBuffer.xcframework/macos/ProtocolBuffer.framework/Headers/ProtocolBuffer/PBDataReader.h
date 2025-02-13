//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 300.23.11.14.2
//
#ifndef PBDataReader_h
#define PBDataReader_h
@import Foundation;

@interface PBDataReader : NSObject {
    /* instance variables */
    unsigned long long _pos;
    _Bool _error;
    const char *_bytes;
    NSData *_data;
}

@property(nonatomic) unsigned long long length;
@property(nonatomic) unsigned long long position;

/* instance methods */
- (id)data;
- (id)initWithData:(id)data;
- (unsigned long long)offset;
- (_Bool)isAtEnd;
- (float)readFloat;
- (id)readProtoBuffer;
- (void)recall:(const struct {
    unsigned long long x0;
    unsigned long long x1;
} *)recall;
- (_Bool)hasError;
- (_Bool)hasMoreData;
- (_Bool)mark:(struct {
    unsigned long long x0;
    unsigned long long x1;
} *)mark;
- (_Bool)readBOOL;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)bytes;
- (id)readData;
- (double)readDouble;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (int)readInt32;
- (long long)readInt64;
- (signed char)readInt8;
- (int)readSfixed32;
- (long long)readSfixed64;
- (int)readSint32;
- (long long)readSint64;
- (id)readString;
- (void)readTag:(unsigned short *)tag andType:(char *)type;
- (void)readTag:(unsigned int *)tag type:(char *)type;
- (unsigned int)readUint32;
- (unsigned long long)readUint64;
- (long long)readVarInt;
- (_Bool)seekToOffset:(unsigned long long)offset;
- (_Bool)skipValueWithTag:(unsigned short)tag andType:(unsigned char)type;
- (_Bool)skipValueWithTag:(unsigned int)tag type:(unsigned char)type;
- (void)updateData:(id)data;

@end

#endif /* PBDataReader_h */
