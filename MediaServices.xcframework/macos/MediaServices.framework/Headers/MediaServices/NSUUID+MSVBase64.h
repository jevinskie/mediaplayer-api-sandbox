//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef NSUUID_MSVBase64_h
#define NSUUID_MSVBase64_h
@import Foundation;

@interface NSUUID (MSVBase64)

/* class methods */
+ (id)msv_UUIDWithData:(id)data;
+ (id)msv_uuidWithCFUUID:(struct __CFUUID *)cfuuid;
+ (id)uuidWithMSVBase64UUID:(id)uuid;

/* instance methods */
- (id)MSVBase64UUIDString;
- (id)initWithMSVBase64UUIDString:(id)uuidstring;
- (id)msv_UUIDData;
- (struct __CFUUID *)msv_copyCFUUID;

@end

#endif /* NSUUID_MSVBase64_h */
