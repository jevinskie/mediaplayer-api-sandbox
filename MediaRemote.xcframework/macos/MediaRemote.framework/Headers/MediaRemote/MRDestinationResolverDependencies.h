//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRDestinationResolverDependencies_h
#define MRDestinationResolverDependencies_h
@import Foundation;

@interface MRDestinationResolverDependencies : NSObject

/* class methods */
+ (id)defaultDependencies;

/* instance methods */
- (id)addPlayerPathInvalidationHandler:(id)handler queue:(id)queue handler:(id /* block */)handler;
- (id)createEndpointObserverWithUID:(id)uid;
- (void)createPlayerPathForEndpoint:(id)endpoint
                             client:(id)client
                             player:(id)player
                              queue:(id)queue
                         completion:(id /* block */)completion;
- (void)removePlayerPathInvalidationHandler:(id)handler;
- (void)resolvePlayerPath:(id)path queue:(id)queue completion:(id /* block */)completion;
- (void)retrieveEndpointForContextUID:(id)uid queue:(id)queue completion:(id /* block */)completion;
- (void)retrieveEndpointForUID:(id)uid
              endpointGroupUID:(id)uid
                         queue:(id)queue
                    completion:(id /* block */)completion;
- (void)retrieveOutputDeviceUIDForOrigin:(id)origin
                                   queue:(id)queue
                              completion:(id /* block */)completion;

@end

#endif /* MRDestinationResolverDependencies_h */
