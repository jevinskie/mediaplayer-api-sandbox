//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRDeviceInfo_h
#define MRDeviceInfo_h
@import Foundation;

#include "MRGroupSessionToken.h"
#include "_MRDeviceInfoMessageProtobuf.h"

@interface MRDeviceInfo : NSObject <NSCopying, NSSecureCoding>

@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *protobuf;
@property(readonly, copy, nonatomic) NSString *WHAIdentifier;
@property(readonly, nonatomic)
    _Bool supportsImplicitChangeShuffleAndRepeatModeInSetPlaybackQueueCommandOptions;
@property(nonatomic) unsigned int lastKnownClusterType;
@property(nonatomic) _Bool supportsOutputContextSync;
@property(nonatomic) unsigned long long lastSupportedProtocolMessageType;
@property(nonatomic) long long deviceClass;
@property(nonatomic) _Bool hasDeviceClass;
@property(nonatomic) unsigned long long protocolVersion;
@property(nonatomic) _Bool hasProtocolVersion;
@property(nonatomic) unsigned long long groupedDeviceCount;
@property(nonatomic) _Bool hasGroupedDeviceCount;
@property(nonatomic) unsigned long long sharedQueueVersion;
@property(nonatomic) _Bool hasSharedQueueVersion;
@property(nonatomic) unsigned long long groupLogicalDeviceCount;
@property(nonatomic) _Bool hasGroupLogicalDeviceCount;
@property(nonatomic) _Bool supportsSystemPairing;
@property(nonatomic) _Bool hasSupportsSystemPairing;
@property(nonatomic) _Bool supportsACL;
@property(nonatomic) _Bool hasSupportsACL;
@property(nonatomic) _Bool supportsSharedQueue;
@property(nonatomic) _Bool hasSupportsSharedQueue;
@property(nonatomic) _Bool supportsExtendedMotion;
@property(nonatomic) _Bool hasSupportsExtendedMotion;
@property(nonatomic) _Bool tightSyncGroup;
@property(nonatomic) _Bool hasTightSyncGroup;
@property(nonatomic) _Bool pairingAllowed;
@property(nonatomic) _Bool hasPairingAllowed;
@property(nonatomic) _Bool proxyGroupPlayer;
@property(nonatomic) _Bool hasProxyGroupPlayer;
@property(nonatomic) _Bool connected;
@property(nonatomic) _Bool hasConnected;
@property(nonatomic) _Bool groupLeader;
@property(nonatomic) _Bool hasGroupLeader;
@property(nonatomic) _Bool airPlayActive;
@property(nonatomic) _Bool hasAirPlayActive;
@property(nonatomic) _Bool supportsMultiplayer;
@property(nonatomic) _Bool hasSupportsMultiplayer;
@property(nonatomic) _Bool parentGroupContainsDiscoverableGroupLeader;
@property(nonatomic) _Bool hasParentGroupContainsDiscoverableGroupLeader;
@property(nonatomic) _Bool groupContainsDiscoverableGroupLeader;
@property(nonatomic) _Bool hasGroupContainsDiscoverableGroupLeader;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *localizedModelName;
@property(copy, nonatomic) NSString *buildVersion;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSString *bundleVersion;
@property(copy, nonatomic) NSString *systemMediaApplication;
@property(copy, nonatomic) NSString *systemPodcastApplication;
@property(copy, nonatomic) NSString *systemBooksApplication;
@property(copy, nonatomic) NSString *deviceUID;
@property(copy, nonatomic) NSString *localReceiverPairingIdentity;
@property(copy, nonatomic) NSString *managedConfigurationDeviceIdentifier;
@property(copy, nonatomic) NSString *tightSyncUID;
@property(copy, nonatomic) NSString *groupUID;
@property(copy, nonatomic) NSString *airPlayGroupUID;
@property(copy, nonatomic) NSString *groupName;
@property(copy, nonatomic) NSString *senderDefaultGroupUID;
@property(copy, nonatomic) NSData *bluetoothAddress;
@property(copy, nonatomic) NSArray *groupedDevices;
@property(copy, nonatomic) NSArray *clusteredDevices;
@property(copy, nonatomic) NSArray *allClusteredDevices;
@property(copy, nonatomic) NSArray *airPlayReceivers;
@property(copy, nonatomic) NSString *linkAgent;
@property(copy, nonatomic) NSString *clusterID;
@property(copy, nonatomic) NSString *clusterLeaderID;
@property(nonatomic) unsigned int clusterType;
@property(nonatomic) _Bool clusterAware;
@property(nonatomic) unsigned long long configuredClusterSize;
@property(copy, nonatomic) NSString *modelID;
@property(copy, nonatomic) NSString *routingContextID;
@property(copy, nonatomic) NSString *computerName;
@property(copy, nonatomic) MRGroupSessionToken *groupSessionToken;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, nonatomic) long long preferredEncoding;
@property(readonly, nonatomic) _Bool hasPreferredEncoding;
@property(readonly, nonatomic) _Bool isCompanion;
@property(readonly, nonatomic) _Bool isGizmo;
@property(readonly, copy, nonatomic) NSString *parentGroupID;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSString *minimalDescription;
@property(readonly, nonatomic) MRDeviceInfo *skeleton;
@property(readonly, nonatomic) _Bool containsLocalDevice;

/* class methods */
+ (_Bool)supportsSecureCoding;
+ (long long)deviceClass;
+ (id)dataFromDeviceInfos:(id)infos;
+ (id)deviceInfosFromData:(id)data;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithData:(id)data;
- (void)mergeFrom:(id)from;
- (_Bool)isConnected;
- (_Bool)isGroupLeader;
- (_Bool)containsDevice:(id)device;
- (id)deltaDescriptionFromDeviceInfo:(id)info;
- (_Bool)isAirPlayActive;
- (id)deltaDescriptionFromDeviceInfo:(id)info minimal:(_Bool)minimal;
- (id)initWithOutputDevice:(id)device;
- (id)initWithOutputDeviceDescription:(id)description;
- (id)initWithProtobuf:(id)protobuf;
- (_Bool)isAwareOfCluster:(unsigned int)cluster;
- (_Bool)isClusterAware;
- (_Bool)isPairingAllowed;
- (_Bool)isProxyGroupPlayer;
- (_Bool)isTightSyncGroup;
- (id)minimalDeltaDescriptionFromDeviceInfo:(id)info;

@end

#endif /* MRDeviceInfo_h */
