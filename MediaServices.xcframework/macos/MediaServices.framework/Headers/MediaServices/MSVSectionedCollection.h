//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVSectionedCollection_h
#define MSVSectionedCollection_h
@import Foundation;

@interface MSVSectionedCollection
    : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject> {
    /* instance variables */
    NSArray *_sectionedItems;
    NSArray *_sections;
}

@property(readonly, nonatomic) id firstSection;
@property(readonly, nonatomic) id lastSection;
@property(readonly, nonatomic) id firstItem;
@property(readonly, nonatomic) id lastItem;
@property(readonly, nonatomic) long long totalItemCount;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (Class)msv_immutableClass;
+ (Class)msv_mutableClass;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (long long)globalIndexForIndexPath:(id)path;
- (id)itemAtIndexPath:(id)path;
- (long long)numberOfItemsInSection:(long long)section;
- (long long)numberOfSections;
- (id)indexPathForGlobalIndex:(long long)index;
- (id)allItems;
- (id)sectionAtIndex:(long long)index;
- (id)allSections;
- (void)_initializeAsEmptySectionedCollection;
- (id)_stateDumpObject;
- (void)enumerateItemsInSectionAtIndex:(long long)index usingBlock:(id /* block */)block;
- (void)enumerateItemsUsingBlock:(id /* block */)block;
- (void)enumerateSectionsUsingBlock:(id /* block */)block;
- (_Bool)hasSameContentAsSectionedCollection:(id)collection;
- (id)itemsInSectionAtIndex:(long long)index;
- (void)reverseEnumerateSectionsUsingBlock:(id /* block */)block;

@end

#endif /* MSVSectionedCollection_h */
