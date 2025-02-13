//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRAVConcreteOutputDeviceDescriptionImpl_h
#define MRAVConcreteOutputDeviceDescriptionImpl_h
@import Foundation;

#include "MRAVOutputDeviceDescriptionImpl-Protocol.h"

@protocol AVOutputDeviceDescription;

@interface MRAVConcreteOutputDeviceDescriptionImpl : NSObject <MRAVOutputDeviceDescriptionImpl>

@property(readonly, nonatomic) id<AVOutputDeviceDescription> avDescription;
@property(readonly, nonatomic) NSString *uid;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned int deviceType;
@property(readonly, nonatomic) unsigned int deviceSubtype;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *roomID;
@property(readonly, nonatomic) NSString *roomName;
@property(readonly, nonatomic) unsigned int clusterType;
@property(readonly, nonatomic) _Bool clusterLeader;
@property(readonly, nonatomic) NSArray *subComponents;
@property(readonly, nonatomic) _Bool supportsEngageOnClusterActivation;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* instance methods */
- (_Bool)isClusterLeader;
- (id)initWithAVDescription:(id)avdescription;

@end

#endif /* MRAVConcreteOutputDeviceDescriptionImpl_h */
