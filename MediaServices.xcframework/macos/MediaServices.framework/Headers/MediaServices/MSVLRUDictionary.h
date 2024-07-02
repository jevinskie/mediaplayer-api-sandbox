//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVLRUDictionary_h
#define MSVLRUDictionary_h
@import Foundation;

#include "MSVLRUDictionaryNode.h"

@protocol MSVLRUDictionaryDelegate;

@interface MSVLRUDictionary : NSObject <NSCopying>

@property(retain, nonatomic) NSMutableDictionary *dictionary;
@property(retain, nonatomic) MSVLRUDictionaryNode *head;
@property(retain, nonatomic) MSVLRUDictionaryNode *tail;
@property(nonatomic) long long transactionCount;
@property(weak, nonatomic) id<MSVLRUDictionaryDelegate> delegate;
@property(nonatomic) long long maximumCapacity;
@property(readonly, nonatomic) long long count;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)allKeys;
- (id)allValues;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)block;
- (id)objectForKey:(id)key;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (void)beginTransaction;
- (void)endTransaction;
- (void)performTransaction:(id /* block */)transaction;
- (id)peekObjectForKey:(id)key;
- (void)_addNodeToFront:(id)front;
- (void)_moveNodeToFront:(id)front;
- (void)_removeNode:(id)node;
- (void)_removeNodeFromLinkedList:(id)list;
- (id)initWithMaximumCapacity:(unsigned long long)capacity;
- (void)_shrinkToCapacity;
- (void)pokeKey:(id)key;

@end

#endif /* MSVLRUDictionary_h */
