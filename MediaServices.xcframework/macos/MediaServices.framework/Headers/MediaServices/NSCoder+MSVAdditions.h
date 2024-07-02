//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef NSCoder_MSVAdditions_h
#define NSCoder_MSVAdditions_h
@import Foundation;

@interface NSCoder (MSVAdditions)

/* instance methods */
- (id)decodeTCCIdentityForKey:(id)key;
- (void)encodeTCCIdentity:(id)tccidentity forKey:(id)key;
- (void)msv_setUserInfo:(id)info;
- (id)msv_userInfo;

@end

#endif /* NSCoder_MSVAdditions_h */
