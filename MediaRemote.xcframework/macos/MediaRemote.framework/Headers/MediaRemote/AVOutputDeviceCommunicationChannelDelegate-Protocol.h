//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef AVOutputDeviceCommunicationChannelDelegate_Protocol_h
#define AVOutputDeviceCommunicationChannelDelegate_Protocol_h
@import Foundation;

@protocol AVOutputDeviceCommunicationChannelDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)communicationChannel:(id)channel didReceiveData:(id)data;
- (void)communicationChannelDidClose:(id)close;
- (void)outputDevice:(id)device didCloseCommunicationChannel:(id)channel;
- (void)outputDevice:(id)device didReceiveData:(id)data fromCommunicationChannel:(id)channel;

@end

#endif /* AVOutputDeviceCommunicationChannelDelegate_Protocol_h */
