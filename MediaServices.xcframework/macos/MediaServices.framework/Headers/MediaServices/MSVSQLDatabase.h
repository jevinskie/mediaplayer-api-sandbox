//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVSQLDatabase_h
#define MSVSQLDatabase_h
@import Foundation;

#include "MSVSQLExecutable-Protocol.h"
#include "_MSVSQLConnection.h"

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {
    /* instance variables */
    _MSVSQLConnection *_connection;
}

@property(copy, nonatomic) NSURL *databaseURL;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithURL:(id)url error:(id *)error;
- (_Bool)executeStatement:(id)statement error:(id *)error;
- (_Bool)executeStatementString:(id)string error:(id *)error;
- (id)initWithMemory;
- (id)markdownTableForSQL:(id)sql;
- (id)markdownTableForStatement:(id)statement;
- (id)markdownTableForTableNamed:(id)named;
- (void)registerAggregateFunctionNamed:(id)named
                             arguments:(long long)arguments
                               options:(unsigned long long)options
                                 start:(id /* block */)start
                                   add:(id /* block */)add
                                remove:(id /* block */)remove
                                 value:(id /* block */)value;
- (void)registerFunctionNamed:(id)named
                    arguments:(long long)arguments
                      options:(unsigned long long)options
                        block:(id /* block */)block;
- (id)resultsForStatement:(id)statement;
- (id)statementWithString:(id)string error:(id *)error;
- (id)transactionWithName:(id)name error:(id *)error;
- (void)unregisterFunctionNamed:(id)named arguments:(long long)arguments;

@end

#endif /* MSVSQLDatabase_h */
