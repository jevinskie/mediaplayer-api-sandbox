//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRProtobufSerialization_h
#define MRProtobufSerialization_h
@import Foundation;

@interface MRProtobufSerialization : NSObject {
    /* instance variables */
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
}

@property(copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping;
@property(retain, nonatomic) Class protobufClass;
@property(copy, nonatomic) id /* block */ dictionaryValueToProtobufValueTransformer;
@property(copy, nonatomic) id /* block */ protobufValueToDictionaryValueTransformer;
@property(copy, nonatomic) id /* block */ dictionaryValueToProtobufPostTransformer;
@property(copy, nonatomic) id /* block */ protobufValueToDictionaryPostTransformer;

/* instance methods */
- (id)createDictionaryFromProtobuf:(id)protobuf;
- (id)createProtobufFromDictionary:(id)dictionary;

@end

#endif /* MRProtobufSerialization_h */
