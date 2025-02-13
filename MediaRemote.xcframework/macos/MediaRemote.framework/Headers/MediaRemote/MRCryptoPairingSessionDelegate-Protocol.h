//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRCryptoPairingSessionDelegate_Protocol_h
#define MRCryptoPairingSessionDelegate_Protocol_h
@import Foundation;

@protocol MRCryptoPairingSessionDelegate <NSObject>

@required

/* required instance methods */
- (void)pairingSession:(id)session didPrepareExchangeData:(id)data;

@optional

/* optional instance methods */
- (void)pairingSession:(id)session didCompleteExchangeWithError:(id)error;
- (void)pairingSession:(id)session
    promptForSetupCodeWithDelay:(double)delay
                     completion:(id /* block */)completion;
- (void)pairingSession:(id)session showSetupCode:(id)code;
- (void)pairingSessionHideSetupCode:(id)code;

@end

#endif /* MRCryptoPairingSessionDelegate_Protocol_h */
