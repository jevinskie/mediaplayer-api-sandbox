//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef NSSet_MSVSequence_h
#define NSSet_MSVSequence_h
@import Foundation;

@interface NSSet (MSVSequence)

/* instance methods */
- (id)msv_firstWhere:(id /* block */)where;
- (id)msv_compactMap:(id /* block */)map;
- (id)msv_filter:(id /* block */)msv_filter;
- (id)msv_flatMap:(id /* block */)map;
- (id)msv_map:(id /* block */)msv_map;
- (_Bool)msv_reduceIntoBool:(_Bool)_bool by:(id /* block */)by;
- (double)msv_reduceIntoCGFloat:(double)cgfloat by:(id /* block */)by;
- (double)msv_reduceIntoDouble:(double)_double by:(id /* block */)by;
- (float)msv_reduceIntoFloat:(float)_float by:(id /* block */)by;
- (int)msv_reduceIntoInt32:(int)int32 by:(id /* block */)by;
- (long long)msv_reduceIntoInt64:(long long)int64 by:(id /* block */)by;
- (long long)msv_reduceIntoInt:(long long)_int by:(id /* block */)by;
- (id)msv_reduceIntoObject:(id)object by:(id /* block */)by;
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)uint32 by:(id /* block */)by;
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)uint64 by:(id /* block */)by;
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)uint by:(id /* block */)by;

@end

#endif /* NSSet_MSVSequence_h */
