//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRExternalDeviceTransportConnection_h
#define MRExternalDeviceTransportConnection_h
@import Foundation;

#include "MRExternalDeviceTransportConnectionDelegate-Protocol.h"

@interface MRExternalDeviceTransportConnection : NSObject

@property(retain, nonatomic) NSString *label;
@property(retain, nonatomic) NSString *destinationOutputDeviceUID;
@property(retain, nonatomic) NSString *destinationGroupUID;
@property(nonatomic) unsigned int connectOptions;
@property(retain, nonatomic) NSDictionary *connectUserInfo;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) NSError *error;
@property(weak, nonatomic) id<MRExternalDeviceTransportConnectionDelegate> delegate;

/* instance methods */
- (void)close;
- (void)closeWithError:(id)error;
- (id)exportEndpoint:(id)endpoint;
- (void)_notifyDelegateDidCloseWithError:(id)error;
- (void)_notifyDelegateDidReceiveData:(id)data;
- (void)_notifyDelegateHasSpaceAvailable;
- (id)exportEndpoints:(id)endpoints;
- (id)exportOutputDevice:(id)device endpoint:(id)endpoint;
- (id)exportOutputDevices:(id)devices endpoint:(id)endpoint;
- (_Bool)hasAccessToPlayerPath:(id)path;
- (_Bool)isAllowedToSendCommand:(unsigned int)command;
- (_Bool)isAllowedToSendMessageType:(unsigned long long)type;
- (unsigned long long)sendTransportData:(id)data options:(id)options;

@end

#endif /* MRExternalDeviceTransportConnection_h */
