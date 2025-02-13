//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef _MRAVModifyOutputContextRequestProtobuf_h
#define _MRAVModifyOutputContextRequestProtobuf_h
@import Foundation;

#include "_MRGroupTopologyModificationRequestProtobuf.h"

@class PBCodable;

@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying> {
    /* instance variables */
    struct {
        unsigned int outputContextType : 1;
    } _has;
}

@property(nonatomic) _Bool hasOutputContextType;
@property(nonatomic) int outputContextType;
@property(retain, nonatomic) NSMutableArray *addingOutputDeviceUIDs;
@property(retain, nonatomic) NSMutableArray *removingOutputDeviceUIDs;
@property(retain, nonatomic) NSMutableArray *settingOutputDeviceUIDs;
@property(retain, nonatomic) NSMutableArray *clusterAwareAddingOutputDeviceUIDs;
@property(retain, nonatomic) NSMutableArray *clusterAwareRemovingOutputDeviceUIDs;
@property(retain, nonatomic) NSMutableArray *clusterAwareSettingOutputDeviceUIDs;
@property(readonly, nonatomic) _Bool hasRequest;
@property(retain, nonatomic) _MRGroupTopologyModificationRequestProtobuf *request;

/* class methods */
+ (Class)addingOutputDeviceUIDType;
+ (Class)clusterAwareAddingOutputDeviceUIDType;
+ (Class)clusterAwareRemovingOutputDeviceUIDType;
+ (Class)clusterAwareSettingOutputDeviceUIDType;
+ (Class)removingOutputDeviceUIDType;
+ (Class)settingOutputDeviceUIDType;

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
- (int)StringAsOutputContextType:(id)type;
- (id)removingOutputDeviceUIDAtIndex:(unsigned long long)index;
- (void)addAddingOutputDeviceUID:(id)uid;
- (void)addClusterAwareAddingOutputDeviceUID:(id)uid;
- (void)addClusterAwareRemovingOutputDeviceUID:(id)uid;
- (void)addClusterAwareSettingOutputDeviceUID:(id)uid;
- (void)addRemovingOutputDeviceUID:(id)uid;
- (void)addSettingOutputDeviceUID:(id)uid;
- (id)addingOutputDeviceUIDAtIndex:(unsigned long long)index;
- (unsigned long long)addingOutputDeviceUIDsCount;
- (void)clearAddingOutputDeviceUIDs;
- (void)clearClusterAwareAddingOutputDeviceUIDs;
- (void)clearClusterAwareRemovingOutputDeviceUIDs;
- (void)clearClusterAwareSettingOutputDeviceUIDs;
- (void)clearRemovingOutputDeviceUIDs;
- (void)clearSettingOutputDeviceUIDs;
- (id)clusterAwareAddingOutputDeviceUIDAtIndex:(unsigned long long)index;
- (unsigned long long)clusterAwareAddingOutputDeviceUIDsCount;
- (id)clusterAwareRemovingOutputDeviceUIDAtIndex:(unsigned long long)index;
- (unsigned long long)clusterAwareRemovingOutputDeviceUIDsCount;
- (id)clusterAwareSettingOutputDeviceUIDAtIndex:(unsigned long long)index;
- (unsigned long long)clusterAwareSettingOutputDeviceUIDsCount;
- (id)outputContextTypeAsString:(int)string;
- (unsigned long long)removingOutputDeviceUIDsCount;
- (id)settingOutputDeviceUIDAtIndex:(unsigned long long)index;
- (unsigned long long)settingOutputDeviceUIDsCount;

@end

#endif /* _MRAVModifyOutputContextRequestProtobuf_h */
