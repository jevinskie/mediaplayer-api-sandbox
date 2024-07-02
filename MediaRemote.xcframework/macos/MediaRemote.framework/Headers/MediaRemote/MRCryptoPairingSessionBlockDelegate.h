//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRCryptoPairingSessionBlockDelegate_h
#define MRCryptoPairingSessionBlockDelegate_h
@import Foundation;

#include "MRCryptoPairingSessionDelegate-Protocol.h"

@interface MRCryptoPairingSessionBlockDelegate : NSObject <MRCryptoPairingSessionDelegate>

@property(copy, nonatomic) id /* block */ dataExchangeBlock;
@property(copy, nonatomic) id /* block */ showSetupCodeBlock;
@property(copy, nonatomic) id /* block */ hideSetupCodeBlock;
@property(copy, nonatomic) id /* block */ promptForSetupCodeBlock;
@property(copy, nonatomic) id /* block */ exchangeCompleteBlock;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)pairingSession:(id)session didCompleteExchangeWithError:(id)error;
- (void)pairingSession:(id)session didPrepareExchangeData:(id)data;
- (void)pairingSession:(id)session promptForSetupCodeWithCompletion:(id /* block */)completion;
- (void)pairingSession:(id)session
    promptForSetupCodeWithDelay:(double)delay
                     completion:(id /* block */)completion;
- (void)pairingSession:(id)session showSetupCode:(id)code;
- (void)pairingSessionHideSetupCode:(id)code;

@end

#endif /* MRCryptoPairingSessionBlockDelegate_h */
