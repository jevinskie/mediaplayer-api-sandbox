//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef NSArray_MRAVAdditions_h
#define NSArray_MRAVAdditions_h
@import Foundation;

@interface NSArray (MRAVAdditions)

/* instance methods */
- (_Bool)mr_any:(id /* block */)mr_any;
- (_Bool)mr_isEqualToOutputDevicesArray:(id)array;
- (_Bool)mr_all:(id /* block */)mr_all;
- (id)mr_arrayByRemovingLocalEndpoint;
- (id)mr_map:(id /* block */)mr_map;
- (id)changeDescriptionTo:(id)to
                 keyBlock:(id /* block */)block
           isUpdatedBlock:(id /* block */)block
         descriptionBlock:(id /* block */)block;
- (id)mr_allOutputDevices;
- (id)mr_compactMap:(id /* block */)map;
- (_Bool)mr_containsAnyOf:(id)of;
- (_Bool)mr_containsVideoOutputDevice;
- (id)mr_distantEndpoints;
- (id)mr_distantOutputDevices;
- (id)mr_filter:(id /* block */)mr_filter;
- (id)mr_first:(id /* block */)mr_first;
- (id)mr_flatMap:(id /* block */)map;
- (id)mr_formattedDebugDescription;
- (int)mr_ifDisabledWhyDisabled:(unsigned int)disabled;
- (_Bool)mr_isCommandSupported:(unsigned int)supported;
- (_Bool)mr_isCommandSupportedAndEnabled:(unsigned int)enabled;
- (id)mr_redactClusterMembers;
- (id)mr_replaceEndpointsWithEndpoints:(id)endpoints;
- (id)mr_replaceOutputDevicesWithOutputDevices:(id)devices;

@end

#endif /* NSArray_MRAVAdditions_h */
