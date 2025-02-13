//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVLRUDictionaryNode_h
#define MSVLRUDictionaryNode_h
@import Foundation;

@interface MSVLRUDictionaryNode : NSObject <NSCopying>

@property(readonly, nonatomic) id key;
@property(retain, nonatomic) id object;
@property(weak, nonatomic) MSVLRUDictionaryNode *next;
@property(weak, nonatomic) MSVLRUDictionaryNode *prev;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithKey:(id)key object:(id)object;

@end

#endif /* MSVLRUDictionaryNode_h */
