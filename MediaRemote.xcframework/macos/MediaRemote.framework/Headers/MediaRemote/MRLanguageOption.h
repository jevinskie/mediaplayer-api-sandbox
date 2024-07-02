//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRLanguageOption_h
#define MRLanguageOption_h
@import Foundation;

#include "_MRLanguageOptionProtobuf.h"

@interface MRLanguageOption : NSObject <NSCopying, NSSecureCoding>

@property(readonly, nonatomic) _MRLanguageOptionProtobuf *protobuf;
@property(nonatomic) unsigned int type;
@property(nonatomic) _Bool hasType;
@property(copy, nonatomic) NSString *languageTag;
@property(copy, nonatomic) NSArray *characteristics;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (id)automaticLanguageOptionWithType:(unsigned int)type;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithData:(id)data;
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithType:(unsigned int)type
        languageTag:(id)tag
    characteristics:(id)characteristics
        displayName:(id)name
         identifier:(id)identifier;
- (_Bool)isAutomaticLanguageOptionWithType:(unsigned int)type;

@end

#endif /* MRLanguageOption_h */
