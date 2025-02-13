//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRAVConcreteOutputDevice_h
#define MRAVConcreteOutputDevice_h
@import Foundation;

#include "MRAVOutputDevice.h"
#include "MRAVOutputDeviceSourceInfo.h"

@class AVOutputDevice, NINearbyObject;
@protocol OS_dispatch_queue;

@interface MRAVConcreteOutputDevice : MRAVOutputDevice {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSString *_uid;
    _Bool _overrideUID;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_logicalDeviceID;
    NSString *_airPlayGroupID;
    _Bool _overrideGroupID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
    NINearbyObject *_nearbyObject;
    NSArray *_clusterComposition;
}

@property(retain, nonatomic) AVOutputDevice *avOutputDevice;
@property(retain, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo;

/* instance methods */
- (id)name;
- (id)uid;
- (float)volume;
- (unsigned int)deviceType;
- (long long)transportType;
- (id)firmwareVersion;
- (float)distance;
- (id)deviceEnclosureColor;
- (unsigned int)deviceSubtype;
- (id)modelID;
- (float)batteryLevel;
- (id)bluetoothID;
- (id)rooms;
- (unsigned int)clusterType;
- (_Bool)requiresAuthorization;
- (_Bool)hasBatteryLevel;
- (_Bool)supportsHeadTrackedSpatialAudio;
- (id)MACAddress;
- (_Bool)isClusterLeader;
- (_Bool)isHeadTrackedSpatialAudioActive;
- (id)logicalDeviceID;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (_Bool)allowsHeadTrackedSpatialAudio;
- (id)availableBluetoothListeningModes;
- (_Bool)canAccessAppleMusic;
- (_Bool)canAccessRemoteAssets;
- (_Bool)canAccessiCloudMusicLibrary;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canRelayCommunicationChannel;
- (id)clusterID;
- (unsigned long long)configuredClusterSize;
- (id)currentBluetoothListeningMode;
- (_Bool)groupContainsGroupLeader;
- (id)headTrackedSpatialAudioMode;
- (_Bool)isAppleAccessory;
- (_Bool)isConversationDetectionEnabled;
- (_Bool)isGroupLeader;
- (_Bool)producesLowFidelityAudio;
- (_Bool)setAllowsHeadTrackedSpatialAudio:(_Bool)audio error:(id *)error;
- (_Bool)setConversationDetectionEnabled:(_Bool)enabled error:(id *)error;
- (_Bool)setCurrentBluetoothListeningMode:(id)mode error:(id *)error;
- (_Bool)setHeadTrackedSpatialAudioMode:(id)mode error:(id *)error;
- (_Bool)supportsBluetoothSharing;
- (_Bool)supportsBufferedAirPlay;
- (_Bool)supportsConversationDetection;
- (_Bool)supportsRapport;
- (id)activatedClusterMembersOutputDevices;
- (void)adjustVolume:(long long)volume details:(id)details;
- (id)airPlayGroupID;
- (id)allClusterMembers;
- (id)clusterComposition;
- (_Bool)containsUID:(id)uid;
- (_Bool)discoveredOnSameInfra;
- (id)dnsNames;
- (id)initWithAVOutputDevice:(id)device sourceInfo:(id)info;
- (_Bool)isAddedToHomeKit;
- (_Bool)isAirPlayReceiverSessionActive;
- (_Bool)isDeviceGroupable;
- (_Bool)isGroupable;
- (_Bool)isLocalDevice;
- (_Bool)isPickedOnPairedDevice;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isRemoteControllable;
- (_Bool)isVolumeMuted;
- (id)modelSpecificInfo;
- (_Bool)parentGroupContainsDiscoverableLeader;
- (id)parentGroupIdentifier;
- (id)playingPairedDeviceName;
- (void)setAVOutputDevice:(id)device;
- (void)setAirPlayGroupID:(id)id;
- (void)setVolume:(float)volume details:(id)details;
- (void)setVolumeMuted:(_Bool)muted details:(id)details;
- (_Bool)supportsEngageOnClusterActivation;
- (_Bool)supportsExternalScreen;
- (_Bool)supportsHAP;
- (_Bool)supportsMultiplayer;
- (_Bool)supportsRapportRemoteControlTransport;
- (_Bool)supportsSharePlayHandoff;
- (id)tightSyncID;
- (unsigned int)volumeCapabilities;

@end

#endif /* MRAVConcreteOutputDevice_h */
