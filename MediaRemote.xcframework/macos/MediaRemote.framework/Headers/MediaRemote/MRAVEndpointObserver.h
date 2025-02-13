//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRAVEndpointObserver_h
#define MRAVEndpointObserver_h
@import Foundation;

#include "MRAVEndpoint.h"
#include "MRAVRoutingDiscoverySession.h"

@interface MRAVEndpointObserver : NSObject {
    /* instance variables */
    MRAVRoutingDiscoverySession *_discoverySession;
    NSArray *_endpoints;
    _Bool _didBegin;
}

@property(copy, nonatomic) id /* block */ endpointChangedCallback;
@property(readonly, nonatomic) NSString *outputDeviceUID;
@property(readonly, nonatomic) MRAVEndpoint *endpoint;
@property(readonly, nonatomic) NSString *label;

/* instance methods */
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)end;
- (void)begin;
- (void)_handleOutputContextDidChangeNotification;
- (id)initWithOutputDeviceUID:(id)uid;
- (id)initWithOutputDeviceUID:(id)uid label:(id)label callback:(id /* block */)callback;

@end

#endif /* MRAVEndpointObserver_h */
