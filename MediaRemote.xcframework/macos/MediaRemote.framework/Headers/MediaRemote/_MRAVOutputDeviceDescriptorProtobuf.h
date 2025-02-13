//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRAVOutputDeviceDescriptorProtobuf_h
#define _MRAVOutputDeviceDescriptorProtobuf_h
@import Foundation;
@import ProtocolBuffer;

#include "_MRAVOutputDeviceSourceInfoProtobuf.h"
#include "_MRGroupSessionInfoProtobuf.h"

@class PBCodable;

@interface _MRAVOutputDeviceDescriptorProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int batteryLevel : 1;
        unsigned int clusterType : 1;
        unsigned int configuredClusterSize : 1;
        unsigned int deviceSubType : 1;
        unsigned int deviceType : 1;
        unsigned int distance : 1;
        unsigned int hostDeviceClass : 1;
        unsigned int transportType : 1;
        unsigned int volume : 1;
        unsigned int volumeCapabilities : 1;
        unsigned int allowsHeadTrackedSpatialAudio : 1;
        unsigned int canAccessAppleMusic : 1;
        unsigned int canAccessRemoteAssets : 1;
        unsigned int canAccessiCloudMusicLibrary : 1;
        unsigned int canFetchMediaDataFromSender : 1;
        unsigned int canPlayEncryptedProgressiveDownloadAssets : 1;
        unsigned int canRelayCommunicationChannel : 1;
        unsigned int conversationDetectionEnabled : 1;
        unsigned int discoveredOnSameInfra : 1;
        unsigned int engageOnClusterActivate : 1;
        unsigned int groupContainsGroupLeader : 1;
        unsigned int isAddedToHomeKit : 1;
        unsigned int isAirPlayReceiverSessionActive : 1;
        unsigned int isAppleAccessory : 1;
        unsigned int isClusterLeader : 1;
        unsigned int isDeviceGroupable : 1;
        unsigned int isGroupLeader : 1;
        unsigned int isGroupable : 1;
        unsigned int isHeadTrackedSpatialAudioActive : 1;
        unsigned int isLocalDevice : 1;
        unsigned int isPickedOnPairedDevice : 1;
        unsigned int isProxyGroupPlayer : 1;
        unsigned int isRemoteControllable : 1;
        unsigned int isVolumeControlAvailable : 1;
        unsigned int parentGroupContainsDiscoverableLeader : 1;
        unsigned int pickable : 1;
        unsigned int presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets : 1;
        unsigned int producesLowFidelityAudio : 1;
        unsigned int requiresAuthorization : 1;
        unsigned int shouldForceRemoteControlabillity : 1;
        unsigned int supportsBluetoothSharing : 1;
        unsigned int supportsBufferedAirPlay : 1;
        unsigned int supportsConversationDetection : 1;
        unsigned int supportsExternalScreen : 1;
        unsigned int supportsHAP : 1;
        unsigned int supportsHeadTrackedSpatialAudio : 1;
        unsigned int supportsMultiplayer : 1;
        unsigned int supportsRapport : 1;
        unsigned int supportsRapportRemoteControlTransport : 1;
        unsigned int supportsSharePlayHandoff : 1;
        unsigned int usingJSONProtocol : 1;
        unsigned int volumeMuted : 1;
    } _has;
}

@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
@property(retain, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool hasGroupID;
@property(retain, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool hasModelID;
@property(retain, nonatomic) NSString *modelID;
@property(readonly, nonatomic) _Bool hasMacAddress;
@property(retain, nonatomic) NSData *macAddress;
@property(nonatomic) _Bool hasCanAccessRemoteAssets;
@property(nonatomic) _Bool canAccessRemoteAssets;
@property(nonatomic) _Bool hasIsRemoteControllable;
@property(nonatomic) _Bool isRemoteControllable;
@property(nonatomic) _Bool hasIsGroupLeader;
@property(nonatomic) _Bool isGroupLeader;
@property(nonatomic) _Bool hasIsGroupable;
@property(nonatomic) _Bool isGroupable;
@property(nonatomic) _Bool hasDeviceType;
@property(nonatomic) int deviceType;
@property(nonatomic) _Bool hasDeviceSubType;
@property(nonatomic) int deviceSubType;
@property(readonly, nonatomic) _Bool hasModelSpecificInfoData;
@property(retain, nonatomic) NSData *modelSpecificInfoData;
@property(nonatomic) _Bool hasBatteryLevel;
@property(nonatomic) float batteryLevel;
@property(nonatomic) _Bool hasIsLocalDevice;
@property(nonatomic) _Bool isLocalDevice;
@property(nonatomic) _Bool hasSupportsExternalScreen;
@property(nonatomic) _Bool supportsExternalScreen;
@property(nonatomic) _Bool hasRequiresAuthorization;
@property(nonatomic) _Bool requiresAuthorization;
@property(nonatomic) _Bool hasShouldForceRemoteControlabillity;
@property(nonatomic) _Bool shouldForceRemoteControlabillity;
@property(readonly, nonatomic) _Bool hasSourceInfo;
@property(retain, nonatomic) _MRAVOutputDeviceSourceInfoProtobuf *sourceInfo;
@property(nonatomic) _Bool hasIsDeviceGroupable;
@property(nonatomic) _Bool isDeviceGroupable;
@property(nonatomic) _Bool hasCanRelayCommunicationChannel;
@property(nonatomic) _Bool canRelayCommunicationChannel;
@property(readonly, nonatomic) _Bool hasLogicalDeviceID;
@property(retain, nonatomic) NSString *logicalDeviceID;
@property(nonatomic) _Bool hasIsProxyGroupPlayer;
@property(nonatomic) _Bool isProxyGroupPlayer;
@property(readonly, nonatomic) _Bool hasFirmwareVersion;
@property(retain, nonatomic) NSString *firmwareVersion;
@property(nonatomic) _Bool hasVolume;
@property(nonatomic) float volume;
@property(nonatomic) _Bool hasIsVolumeControlAvailable;
@property(nonatomic) _Bool isVolumeControlAvailable;
@property(nonatomic) _Bool hasCanAccessAppleMusic;
@property(nonatomic) _Bool canAccessAppleMusic;
@property(nonatomic) _Bool hasCanAccessiCloudMusicLibrary;
@property(nonatomic) _Bool canAccessiCloudMusicLibrary;
@property(nonatomic) _Bool hasGroupContainsGroupLeader;
@property(nonatomic) _Bool groupContainsGroupLeader;
@property(nonatomic) _Bool hasSupportsBufferedAirPlay;
@property(nonatomic) _Bool supportsBufferedAirPlay;
@property(nonatomic) _Bool hasCanPlayEncryptedProgressiveDownloadAssets;
@property(nonatomic) _Bool canPlayEncryptedProgressiveDownloadAssets;
@property(nonatomic) _Bool hasCanFetchMediaDataFromSender;
@property(nonatomic) _Bool canFetchMediaDataFromSender;
@property(nonatomic) _Bool hasPresentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(nonatomic) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(nonatomic) _Bool hasIsAirPlayReceiverSessionActive;
@property(nonatomic) _Bool isAirPlayReceiverSessionActive;
@property(readonly, nonatomic) _Bool hasParentGroupIdentifier;
@property(retain, nonatomic) NSString *parentGroupIdentifier;
@property(nonatomic) _Bool hasParentGroupContainsDiscoverableLeader;
@property(nonatomic) _Bool parentGroupContainsDiscoverableLeader;
@property(nonatomic) _Bool hasIsAddedToHomeKit;
@property(nonatomic) _Bool isAddedToHomeKit;
@property(nonatomic) _Bool hasVolumeCapabilities;
@property(nonatomic) int volumeCapabilities;
@property(readonly, nonatomic) _Bool hasBluetoothID;
@property(retain, nonatomic) NSString *bluetoothID;
@property(nonatomic) _Bool hasSupportsHAP;
@property(nonatomic) _Bool supportsHAP;
@property(nonatomic) _Bool hasUsingJSONProtocol;
@property(nonatomic) _Bool usingJSONProtocol;
@property(retain, nonatomic) NSMutableArray *clusterCompositions;
@property(nonatomic) _Bool hasClusterType;
@property(nonatomic) unsigned int clusterType;
@property(readonly, nonatomic) _Bool hasPrimaryUID;
@property(retain, nonatomic) NSString *primaryUID;
@property(nonatomic) _Bool hasConfiguredClusterSize;
@property(nonatomic) unsigned int configuredClusterSize;
@property(nonatomic) _Bool hasSupportsRapportRemoteControlTransport;
@property(nonatomic) _Bool supportsRapportRemoteControlTransport;
@property(readonly, nonatomic) _Bool hasCurrentBluetoothListeningMode;
@property(retain, nonatomic) NSString *currentBluetoothListeningMode;
@property(retain, nonatomic) NSMutableArray *availableBluetoothListeningModes;
@property(nonatomic) _Bool hasSupportsMultiplayer;
@property(nonatomic) _Bool supportsMultiplayer;
@property(nonatomic) _Bool hasProducesLowFidelityAudio;
@property(nonatomic) _Bool producesLowFidelityAudio;
@property(nonatomic) _Bool hasHostDeviceClass;
@property(nonatomic) int hostDeviceClass;
@property(readonly, nonatomic) _Bool hasAirPlayGroupID;
@property(retain, nonatomic) NSString *airPlayGroupID;
@property(nonatomic) _Bool hasSupportsSharePlayHandoff;
@property(nonatomic) _Bool supportsSharePlayHandoff;
@property(nonatomic) _Bool hasDistance;
@property(nonatomic) float distance;
@property(nonatomic) _Bool hasDiscoveredOnSameInfra;
@property(nonatomic) _Bool discoveredOnSameInfra;
@property(retain, nonatomic) NSMutableArray *activatedClusterMembers;
@property(nonatomic) _Bool hasPickable;
@property(nonatomic) _Bool pickable;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType;
@property(readonly, nonatomic) _Bool hasClusterID;
@property(retain, nonatomic) NSString *clusterID;
@property(nonatomic) _Bool hasIsClusterLeader;
@property(nonatomic) _Bool isClusterLeader;
@property(nonatomic) _Bool hasIsAppleAccessory;
@property(nonatomic) _Bool isAppleAccessory;
@property(readonly, nonatomic) _Bool hasParentUniqueIdentifier;
@property(retain, nonatomic) NSString *parentUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasRoomID;
@property(retain, nonatomic) NSString *roomID;
@property(readonly, nonatomic) _Bool hasRoomName;
@property(retain, nonatomic) NSString *roomName;
@property(retain, nonatomic) NSMutableArray *allClusterMembers;
@property(nonatomic) _Bool hasSupportsConversationDetection;
@property(nonatomic) _Bool supportsConversationDetection;
@property(nonatomic) _Bool hasConversationDetectionEnabled;
@property(nonatomic) _Bool conversationDetectionEnabled;
@property(nonatomic) _Bool hasEngageOnClusterActivate;
@property(nonatomic) _Bool engageOnClusterActivate;
@property(nonatomic) _Bool hasVolumeMuted;
@property(nonatomic) _Bool volumeMuted;
@property(readonly, nonatomic) _Bool hasGroupSessionInfo;
@property(retain, nonatomic) _MRGroupSessionInfoProtobuf *groupSessionInfo;
@property(nonatomic) _Bool hasSupportsBluetoothSharing;
@property(nonatomic) _Bool supportsBluetoothSharing;
@property(readonly, nonatomic) _Bool hasDeviceEnclosureColor;
@property(retain, nonatomic) NSString *deviceEnclosureColor;
@property(readonly, nonatomic) _Bool hasPlayingPairedDeviceName;
@property(retain, nonatomic) NSString *playingPairedDeviceName;
@property(nonatomic) _Bool hasSupportsRapport;
@property(nonatomic) _Bool supportsRapport;
@property(nonatomic) _Bool hasIsPickedOnPairedDevice;
@property(nonatomic) _Bool isPickedOnPairedDevice;
@property(nonatomic) _Bool hasSupportsHeadTrackedSpatialAudio;
@property(nonatomic) _Bool supportsHeadTrackedSpatialAudio;
@property(nonatomic) _Bool hasAllowsHeadTrackedSpatialAudio;
@property(nonatomic) _Bool allowsHeadTrackedSpatialAudio;
@property(nonatomic) _Bool hasIsHeadTrackedSpatialAudioActive;
@property(nonatomic) _Bool isHeadTrackedSpatialAudioActive;
@property(readonly, nonatomic) _Bool hasHeadTrackedSpatialAudioMode;
@property(retain, nonatomic) NSString *headTrackedSpatialAudioMode;
@property(retain, nonatomic) NSMutableArray *dnsNames;

/* class methods */
+ (Class)activatedClusterMembersType;
+ (Class)allClusterMembersType;
+ (Class)availableBluetoothListeningModesType;
+ (Class)clusterCompositionType;
+ (Class)dnsNamesType;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)to;
- (void)mergeFrom:(id)from;
- (_Bool)readFrom:(id)from;
- (void)writeTo:(id)to;
- (int)StringAsTransportType:(id)type;
- (id)transportTypeAsString:(int)string;
- (int)StringAsDeviceType:(id)type;
- (id)deviceTypeAsString:(int)string;
- (int)StringAsHostDeviceClass:(id)_class;
- (id)activatedClusterMembersAtIndex:(unsigned long long)index;
- (int)StringAsDeviceSubType:(id)type;
- (unsigned long long)activatedClusterMembersCount;
- (void)addActivatedClusterMembers:(id)members;
- (void)addAllClusterMembers:(id)members;
- (void)addAvailableBluetoothListeningModes:(id)modes;
- (void)addClusterComposition:(id)composition;
- (void)addDnsNames:(id)names;
- (id)allClusterMembersAtIndex:(unsigned long long)index;
- (unsigned long long)allClusterMembersCount;
- (id)availableBluetoothListeningModesAtIndex:(unsigned long long)index;
- (unsigned long long)availableBluetoothListeningModesCount;
- (void)clearActivatedClusterMembers;
- (void)clearAllClusterMembers;
- (void)clearAvailableBluetoothListeningModes;
- (void)clearClusterCompositions;
- (void)clearDnsNames;
- (id)clusterCompositionAtIndex:(unsigned long long)index;
- (unsigned long long)clusterCompositionsCount;
- (id)deviceSubTypeAsString:(int)string;
- (id)dnsNamesAtIndex:(unsigned long long)index;
- (unsigned long long)dnsNamesCount;
- (id)hostDeviceClassAsString:(int)string;

@end

#endif /* _MRAVOutputDeviceDescriptorProtobuf_h */
