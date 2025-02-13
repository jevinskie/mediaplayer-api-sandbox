//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef _MSVSQLDatabaseTransactionSavepoint_h
#define _MSVSQLDatabaseTransactionSavepoint_h
@import Foundation;

#include "MSVSQLDatabaseTransaction.h"
#include "MSVSQLDatabaseTransactionSavepoint-Protocol.h"

@interface _MSVSQLDatabaseTransactionSavepoint : NSObject <MSVSQLDatabaseTransactionSavepoint> {
    /* instance variables */
    MSVSQLDatabaseTransaction *_transaction;
}

@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (_Bool)commit;

@end

#endif /* _MSVSQLDatabaseTransactionSavepoint_h */
