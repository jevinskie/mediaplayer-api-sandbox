//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRVirtualVoiceInputDeviceDescriptor_h
#define MRVirtualVoiceInputDeviceDescriptor_h
@import Foundation;

#include "_MRVoiceInputDeviceDescriptorProtobuf.h"

@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying>

@property(readonly, nonatomic) NSArray *supportedFormats;
@property(readonly, nonatomic) NSDictionary *defaultFormat;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *protobuf;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithData:(id)data;
- (id)_copyWithZone:(struct _NSZone *)zone usingConcreteClass:(Class)_class;
- (id)initWithProtobuf:(id)protobuf;

@end

#endif /* MRVirtualVoiceInputDeviceDescriptor_h */
