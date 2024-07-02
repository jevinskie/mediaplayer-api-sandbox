//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRUIContextServerXPCProtocol_Protocol_h
#define MRUIContextServerXPCProtocol_Protocol_h
@import Foundation;

@protocol MRUIContextServerXPCProtocol <NSObject>

@required

/* required instance methods */
- (void)contextForActivityIdentifier:(id)identifier reply:(id /* block */)reply;

@optional

@end

#endif /* MRUIContextServerXPCProtocol_Protocol_h */
