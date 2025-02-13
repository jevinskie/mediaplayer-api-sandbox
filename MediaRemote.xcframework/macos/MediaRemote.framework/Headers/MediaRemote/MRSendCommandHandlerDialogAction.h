//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRSendCommandHandlerDialogAction_h
#define MRSendCommandHandlerDialogAction_h
@import Foundation;

#include "MRSendCommandHandlerEvent.h"
#include "_MRSendCommandResultHandlerDialogActionProtobuf.h"

@interface MRSendCommandHandlerDialogAction : NSObject <NSCopying>

@property(readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogActionProtobuf *protobuf;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) MRSendCommandHandlerEvent *event;
@property(readonly, nonatomic) long long type;

/* class methods */
+ (id)actionWithTitle:(id)title type:(long long)type commandEvent:(id)event;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithTitle:(id)title type:(long long)type commandEvent:(id)event;

@end

#endif /* MRSendCommandHandlerDialogAction_h */
