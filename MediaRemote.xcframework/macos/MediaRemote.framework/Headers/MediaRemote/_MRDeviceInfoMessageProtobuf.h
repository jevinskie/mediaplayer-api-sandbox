//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRDeviceInfoMessageProtobuf_h
#define _MRDeviceInfoMessageProtobuf_h
@import Foundation;

#include "_MRGroupSessionTokenProtobuf.h"

@class PBCodable;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int protocolVersion : 1;
        unsigned int clusterType : 1;
        unsigned int configuredClusterSize : 1;
        unsigned int deviceClass : 1;
        unsigned int lastKnownClusterType : 1;
        unsigned int lastSupportedMessageType : 1;
        unsigned int logicalDeviceCount : 1;
        unsigned int preferredEncoding : 1;
        unsigned int sharedQueueVersion : 1;
        unsigned int allowsPairing : 1;
        unsigned int connected : 1;
        unsigned int groupContainsDiscoverableGroupLeader : 1;
        unsigned int isAirplayActive : 1;
        unsigned int isClusterAware : 1;
        unsigned int isGroupLeader : 1;
        unsigned int isProxyGroupPlayer : 1;
        unsigned int parentGroupContainsDiscoverableGroupLeader : 1;
        unsigned int supportsACL : 1;
        unsigned int supportsExtendedMotion : 1;
        unsigned int supportsMultiplayer : 1;
        unsigned int supportsOutputContextSync : 1;
        unsigned int supportsSharedQueue : 1;
        unsigned int supportsSystemPairing : 1;
        unsigned int tightlySyncedGroup : 1;
    } _has;
}

@property(readonly, nonatomic) _Bool hasUniqueIdentifier;
@property(retain, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool hasName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool hasLocalizedModelName;
@property(retain, nonatomic) NSString *localizedModelName;
@property(readonly, nonatomic) _Bool hasSystemBuildVersion;
@property(retain, nonatomic) NSString *systemBuildVersion;
@property(readonly, nonatomic) _Bool hasApplicationBundleIdentifier;
@property(retain, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) _Bool hasApplicationBundleVersion;
@property(retain, nonatomic) NSString *applicationBundleVersion;
@property(nonatomic) _Bool hasProtocolVersion;
@property(nonatomic) unsigned long long protocolVersion;
@property(nonatomic) _Bool hasLastSupportedMessageType;
@property(nonatomic) unsigned int lastSupportedMessageType;
@property(nonatomic) _Bool hasSupportsSystemPairing;
@property(nonatomic) _Bool supportsSystemPairing;
@property(nonatomic) _Bool hasAllowsPairing;
@property(nonatomic) _Bool allowsPairing;
@property(nonatomic) _Bool hasConnected;
@property(nonatomic) _Bool connected;
@property(readonly, nonatomic) _Bool hasSystemMediaApplication;
@property(retain, nonatomic) NSString *systemMediaApplication;
@property(nonatomic) _Bool hasSupportsACL;
@property(nonatomic) _Bool supportsACL;
@property(nonatomic) _Bool hasSupportsSharedQueue;
@property(nonatomic) _Bool supportsSharedQueue;
@property(nonatomic) _Bool hasSupportsExtendedMotion;
@property(nonatomic) _Bool supportsExtendedMotion;
@property(readonly, nonatomic) _Bool hasBluetoothAddress;
@property(retain, nonatomic) NSData *bluetoothAddress;
@property(nonatomic) _Bool hasSharedQueueVersion;
@property(nonatomic) unsigned int sharedQueueVersion;
@property(readonly, nonatomic) _Bool hasDeviceUID;
@property(retain, nonatomic) NSString *deviceUID;
@property(readonly, nonatomic) _Bool hasManagedConfigDeviceID;
@property(retain, nonatomic) NSString *managedConfigDeviceID;
@property(nonatomic) _Bool hasDeviceClass;
@property(nonatomic) int deviceClass;
@property(nonatomic) _Bool hasLogicalDeviceCount;
@property(nonatomic) unsigned int logicalDeviceCount;
@property(nonatomic) _Bool hasTightlySyncedGroup;
@property(nonatomic) _Bool tightlySyncedGroup;
@property(nonatomic) _Bool hasIsProxyGroupPlayer;
@property(nonatomic) _Bool isProxyGroupPlayer;
@property(readonly, nonatomic) _Bool hasTightSyncUID;
@property(retain, nonatomic) NSString *tightSyncUID;
@property(readonly, nonatomic) _Bool hasGroupUID;
@property(retain, nonatomic) NSString *groupUID;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(retain, nonatomic) NSString *groupName;
@property(retain, nonatomic) NSMutableArray *groupedDevices;
@property(nonatomic) _Bool hasIsGroupLeader;
@property(nonatomic) _Bool isGroupLeader;
@property(nonatomic) _Bool hasIsAirplayActive;
@property(nonatomic) _Bool isAirplayActive;
@property(readonly, nonatomic) _Bool hasSystemPodcastApplication;
@property(retain, nonatomic) NSString *systemPodcastApplication;
@property(readonly, nonatomic) _Bool hasSenderDefaultGroupUID;
@property(retain, nonatomic) NSString *senderDefaultGroupUID;
@property(retain, nonatomic) NSMutableArray *airplayReceivers;
@property(readonly, nonatomic) _Bool hasLinkAgent;
@property(retain, nonatomic) NSString *linkAgent;
@property(readonly, nonatomic) _Bool hasClusterID;
@property(retain, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) _Bool hasClusterLeaderID;
@property(retain, nonatomic) NSString *clusterLeaderID;
@property(nonatomic) _Bool hasClusterType;
@property(nonatomic) unsigned int clusterType;
@property(nonatomic) _Bool hasIsClusterAware;
@property(nonatomic) _Bool isClusterAware;
@property(readonly, nonatomic) _Bool hasModelID;
@property(retain, nonatomic) NSString *modelID;
@property(nonatomic) _Bool hasSupportsMultiplayer;
@property(nonatomic) _Bool supportsMultiplayer;
@property(readonly, nonatomic) _Bool hasRoutingContextID;
@property(retain, nonatomic) NSString *routingContextID;
@property(readonly, nonatomic) _Bool hasAirPlayGroupID;
@property(retain, nonatomic) NSString *airPlayGroupID;
@property(readonly, nonatomic) _Bool hasSystemBooksApplication;
@property(retain, nonatomic) NSString *systemBooksApplication;
@property(retain, nonatomic) NSMutableArray *clusteredDevices;
@property(nonatomic) _Bool hasParentGroupContainsDiscoverableGroupLeader;
@property(nonatomic) _Bool parentGroupContainsDiscoverableGroupLeader;
@property(nonatomic) _Bool hasGroupContainsDiscoverableGroupLeader;
@property(nonatomic) _Bool groupContainsDiscoverableGroupLeader;
@property(nonatomic) _Bool hasLastKnownClusterType;
@property(nonatomic) unsigned int lastKnownClusterType;
@property(retain, nonatomic) NSMutableArray *allClusteredDevices;
@property(nonatomic) _Bool hasSupportsOutputContextSync;
@property(nonatomic) _Bool supportsOutputContextSync;
@property(readonly, nonatomic) _Bool hasComputerName;
@property(retain, nonatomic) NSString *computerName;
@property(nonatomic) _Bool hasConfiguredClusterSize;
@property(nonatomic) unsigned int configuredClusterSize;
@property(nonatomic) _Bool hasPreferredEncoding;
@property(nonatomic) int preferredEncoding;
@property(readonly, nonatomic) _Bool hasGroupSessionToken;
@property(retain, nonatomic) _MRGroupSessionTokenProtobuf *groupSessionToken;

/* class methods */
+ (Class)airplayReceiversType;
+ (Class)allClusteredDevicesType;
+ (Class)clusteredDevicesType;
+ (Class)groupedDevicesType;

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
- (int)StringAsDeviceClass:(id)_class;
- (id)deviceClassAsString:(int)string;
- (int)StringAsPreferredEncoding:(id)encoding;
- (void)addAirplayReceivers:(id)receivers;
- (void)addAllClusteredDevices:(id)devices;
- (void)addClusteredDevices:(id)devices;
- (void)addGroupedDevices:(id)devices;
- (id)airplayReceiversAtIndex:(unsigned long long)index;
- (unsigned long long)airplayReceiversCount;
- (id)allClusteredDevicesAtIndex:(unsigned long long)index;
- (unsigned long long)allClusteredDevicesCount;
- (void)clearAirplayReceivers;
- (void)clearAllClusteredDevices;
- (void)clearClusteredDevices;
- (void)clearGroupedDevices;
- (id)clusteredDevicesAtIndex:(unsigned long long)index;
- (unsigned long long)clusteredDevicesCount;
- (id)groupedDevicesAtIndex:(unsigned long long)index;
- (unsigned long long)groupedDevicesCount;
- (id)preferredEncodingAsString:(int)string;

@end

#endif /* _MRDeviceInfoMessageProtobuf_h */
