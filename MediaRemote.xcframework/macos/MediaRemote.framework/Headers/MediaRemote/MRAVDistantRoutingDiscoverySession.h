//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRAVDistantRoutingDiscoverySession_h
#define MRAVDistantRoutingDiscoverySession_h
@import Foundation;

#include "MRAVDistantEndpoint.h"
#include "MRAVDistantRoutingDiscoveryClientProtocol-Protocol.h"
#include "MRAVLocalEndpoint.h"
#include "MRAVRoutingDiscoverySession.h"

@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession
    : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    NSDate *_discoveryModeDate;
    _Bool _enableThrottling;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    _Bool _hostedRoutingConnectionDidInitialize;
    NSDate *_hostedRoutingConnectionDate;
    NSArray *_notificationTokens;
}

@property(retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property(readonly, nonatomic) NSArray *distantEndpoints;
@property(readonly, nonatomic) NSArray *distantOutputDevices;
@property(retain, nonatomic) MRAVLocalEndpoint *localEndpoint;
@property(retain, nonatomic) MRAVDistantEndpoint *distantLocalEndpoint;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)clientInterface;
+ (id)serviceInterface;

/* instance methods */
- (void)dealloc;
- (id)initWithConfiguration:(id)configuration;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)mode;
- (id)availableOutputDevices;
- (_Bool)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)_hostedRoutingConnection;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)completion;
- (void)_notifyEndpointsChanged;
- (void)_registerForPerRoutingContextNotifications;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)endpoints;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)devices;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (id)_resolveDistantEndpoints:(id)endpoints;
- (id)_resolveEndpoints:(id)endpoints;
- (_Bool)_shouldAddLocalEndpoint;
- (id)availableEndpoints;
- (void)availableEndpointsDidChange:(id)change;
- (void)availableOutputDevicesDidChange:(id)change;
- (unsigned int)endpointFeatures;
- (void)setRoutingContextUID:(id)uid;

@end

#endif /* MRAVDistantRoutingDiscoverySession_h */
