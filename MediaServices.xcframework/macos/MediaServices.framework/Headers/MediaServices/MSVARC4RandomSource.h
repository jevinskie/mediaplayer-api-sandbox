//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVARC4RandomSource_h
#define MSVARC4RandomSource_h
@import Foundation;

#include "MSVRandomSource-Protocol.h"

@interface MSVARC4RandomSource : NSObject <MSVRandomSource, NSSecureCoding, NSCopying> {
    /* instance variables */
    struct MSVArc4State {
        unsigned int x0;
        unsigned int x1;
        char *x2;
    } *_state;
}

@property(copy, nonatomic) NSData *seed;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)sharedSource;

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithSeed:(id)seed;
- (id)bytesWithLength:(long long)length;
- (id)mutableBytesWithLength:(long long)length;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)bound;

@end

#endif /* MSVARC4RandomSource_h */
