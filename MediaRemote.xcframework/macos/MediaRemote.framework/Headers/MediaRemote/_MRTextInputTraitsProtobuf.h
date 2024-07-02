//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRTextInputTraitsProtobuf_h
#define _MRTextInputTraitsProtobuf_h
@import Foundation;

@class PBCodable;

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int validTextRangeLength : 1;
        unsigned int validTextRangeLocation : 1;
        unsigned int autocapitalizationType : 1;
        unsigned int keyboardType : 1;
        unsigned int returnKeyType : 1;
        unsigned int autocorrection : 1;
        unsigned int enablesReturnKeyAutomatically : 1;
        unsigned int secureTextEntry : 1;
        unsigned int spellchecking : 1;
    } _has;
}

@property(nonatomic) _Bool hasAutocapitalizationType;
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) _Bool hasKeyboardType;
@property(nonatomic) int keyboardType;
@property(nonatomic) _Bool hasReturnKeyType;
@property(nonatomic) int returnKeyType;
@property(nonatomic) _Bool hasAutocorrection;
@property(nonatomic) _Bool autocorrection;
@property(nonatomic) _Bool hasSpellchecking;
@property(nonatomic) _Bool spellchecking;
@property(nonatomic) _Bool hasEnablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool hasSecureTextEntry;
@property(nonatomic) _Bool secureTextEntry;
@property(nonatomic) _Bool hasValidTextRangeLocation;
@property(nonatomic) unsigned long long validTextRangeLocation;
@property(nonatomic) _Bool hasValidTextRangeLength;
@property(nonatomic) unsigned long long validTextRangeLength;
@property(readonly, nonatomic) unsigned long long pINEntrySeparatorIndexesCount;
@property(readonly, nonatomic) unsigned long long *pINEntrySeparatorIndexes;

/* instance methods */
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)to;
- (void)mergeFrom:(id)from;
- (_Bool)readFrom:(id)from;
- (void)writeTo:(id)to;
- (int)StringAsAutocapitalizationType:(id)type;
- (int)StringAsKeyboardType:(id)type;
- (int)StringAsReturnKeyType:(id)type;
- (id)autocapitalizationTypeAsString:(int)string;
- (void)addPINEntrySeparatorIndexes:(unsigned long long)indexes;
- (void)clearPINEntrySeparatorIndexes;
- (id)keyboardTypeAsString:(int)string;
- (unsigned long long)pINEntrySeparatorIndexesAtIndex:(unsigned long long)index;
- (id)returnKeyTypeAsString:(int)string;
- (void)setPINEntrySeparatorIndexes:(unsigned long long *)indexes count:(unsigned long long)count;

@end

#endif /* _MRTextInputTraitsProtobuf_h */
