//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRIRRoute_h
#define MRIRRoute_h
@import Foundation;

#include "MRRouteRepresentable-Protocol.h"

@interface MRIRRoute : NSObject <MRRouteRepresentable>

@property(retain, nonatomic) NSString *routeIdentifier;
@property(retain, nonatomic) NSSet *nodes;
@property(nonatomic) _Bool donateAsCandidate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)debugRouteWithDebugIdentifier:(id)identifier;
+ (id)routeWithEndpoint:(id)endpoint;
+ (id)routeWithOutputDevices:(id)devices;

/* instance methods */
- (_Bool)isEqual:(id)equal;

@end

#endif /* MRIRRoute_h */
