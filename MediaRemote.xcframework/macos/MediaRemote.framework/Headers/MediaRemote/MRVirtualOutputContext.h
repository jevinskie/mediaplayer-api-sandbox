//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRVirtualOutputContext_h
#define MRVirtualOutputContext_h
@import Foundation;

#include "MRAVOutputContext.h"

@interface MRVirtualOutputContext : MRAVOutputContext {
    /* instance variables */
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

/* instance methods */
- (unsigned int)type;
- (id)uniqueIdentifier;
- (float)volume;
- (id)contextID;
- (void)setVolume:(float)volume;
- (id)initWithUID:(id)uid;
- (id)outputDevices;
- (id)predictedOutputDevice;
- (void)resetPredictedOutputDevice;
- (_Bool)supportsMultipleBluetoothOutputDevices;
- (void)addOutputDevices:(id)devices
               initiator:(id)initiator
       withCallbackQueue:(id)queue
                   block:(id /* block */)block;
- (_Bool)isVolumeControlAvailable;
- (void)removeOutputDevices:(id)devices
                  initiator:(id)initiator
          withCallbackQueue:(id)queue
                      block:(id /* block */)block;
- (void)setOutputDevices:(id)devices
               initiator:(id)initiator
       withCallbackQueue:(id)queue
                   block:(id /* block */)block;
- (void)setOutputDevices:(id)devices
            withPassword:(id)password
       withCallbackQueue:(id)queue
                   block:(id /* block */)block;
- (_Bool)supportsVolumeControl;

@end

#endif /* MRVirtualOutputContext_h */
