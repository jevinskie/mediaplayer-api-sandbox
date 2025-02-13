//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef _MSVSQLDatabaseFunctionContext_h
#define _MSVSQLDatabaseFunctionContext_h
@import Foundation;

@interface _MSVSQLDatabaseFunctionContext : NSObject <NSObject> {
    /* instance variables */
    struct sqlite3_context *_context;
    int _argc;
    struct sqlite3_value **_argv;
}

@property(readonly, nonatomic) long long numberOfArguments;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)memoizeObject:(id)object forArgumentIndex:(long long)index;
- (id)jsonValueAtArgumentIndex:(long long)index error:(id *)error;
- (id)memoizedObjectForArgumentIndex:(long long)index;
- (struct sqlite3_value *)_valueAtIndex:(long long)index;
- (_Bool)boolValueAtArgumentIndex:(long long)index;
- (id)dataValueAtArgumentIndex:(long long)index;
- (id)dateValueAtArgumentIndex:(long long)index;
- (double)doubleValueAtArgumentIndex:(long long)index;
- (float)floatValueAtArgumentIndex:(long long)index;
- (id)functionContextOfClass:(Class)_class atArgumentIndex:(long long)index;
- (long long)int64ValueAtArgumentIndex:(long long)index;
- (_Bool)isNullValueAtArgumentIndex:(long long)index;
- (id)jsonDataAtArgumentIndex:(long long)index;
- (id)objectValueAtArgumentIndex:(long long)index;
- (id)returnBool:(_Bool)_bool;
- (id)returnData:(id)data;
- (id)returnDate:(id)date;
- (id)returnDouble:(double)_double;
- (id)returnError:(id)error;
- (id)returnError:(id)error sqliteCode:(int)code;
- (id)returnErrorNoMemory;
- (id)returnErrorTooBig;
- (id)returnFloat:(float)_float;
- (id)returnFunctionContext:(id)context;
- (id)returnInt64:(long long)int64;
- (id)returnJSON:(id)json error:(id *)error;
- (id)returnNull;
- (id)returnString:(id)string;
- (id)returnUInt64:(unsigned long long)uint64;
- (id)stringValueAtArgumentIndex:(long long)index;
- (unsigned long long)uint64ValueAtArgumentIndex:(long long)index;

@end

#endif /* _MSVSQLDatabaseFunctionContext_h */
