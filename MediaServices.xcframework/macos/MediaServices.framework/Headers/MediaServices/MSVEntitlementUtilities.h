//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVEntitlementUtilities_h
#define MSVEntitlementUtilities_h
@import Foundation;

@interface MSVEntitlementUtilities : NSObject

/* class methods */
+ (_Bool)hasBoolEntitlement:(id)entitlement;
+ (id)_checkArrayEntitlement:(id)entitlement group:(id)group task:(struct __SecTask *)task;
+ (id)_checkBooleanEntitlement:(id)entitlement task:(struct __SecTask *)task;
+ (_Bool)_checkEntitlement:(id)entitlement
                           inGroup:(id)group
    shouldLogForMissingEntitlement:(_Bool)entitlement;
+ (void)_logForMissingEntitlementWithResult:(id)result;
+ (_Bool)hasBoolEntitlement:(id)entitlement shouldLogForMissingEntitlement:(_Bool)entitlement;
+ (_Bool)hasEntitlement:(id)entitlement inGroup:(id)group;
+ (_Bool)hasEntitlement:(id)entitlement
                           inGroup:(id)group
    shouldLogForMissingEntitlement:(_Bool)entitlement;

@end

#endif /* MSVEntitlementUtilities_h */
