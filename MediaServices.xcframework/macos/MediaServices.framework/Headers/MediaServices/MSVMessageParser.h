//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVMessageParser_h
#define MSVMessageParser_h
@import Foundation;

@protocol MSVMessageParserDelegate;

@interface MSVMessageParser : NSObject

@property(retain, nonatomic) NSMutableData *unhandledPartialObjectData;
@property(nonatomic) long long unhandledObjectDataExpectedLength;
@property(retain, nonatomic) NSMutableData *unhandledPartialData;
@property(weak, nonatomic) id<MSVMessageParserDelegate> delegate;

/* class methods */
+ (id)createHeader:(unsigned long long)header;

/* instance methods */
- (void)processData:(id)data;
- (void)_notifyDelegate:(id)delegate;

@end

#endif /* MSVMessageParser_h */
