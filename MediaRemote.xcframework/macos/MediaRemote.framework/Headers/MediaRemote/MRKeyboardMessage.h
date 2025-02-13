//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRKeyboardMessage_h
#define MRKeyboardMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRTextEditingAttributes.h"

@interface MRKeyboardMessage : MRProtocolMessage

@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) NSData *encryptedTextCyphertext;
@property(readonly, nonatomic) MRTextEditingAttributes *attributes;

/* class methods */
+ (id)encryptedMessageWithState:(unsigned long long)state
                           text:(id)text
                     attributes:(id)attributes
             usingCryptoSession:(id)session;

/* instance methods */
- (unsigned long long)type;
- (id)decryptedTextUsingCryptoSession:(id)session;
- (id)initWithState:(unsigned long long)state
    encryptedTextCyphertext:(id)cyphertext
                 attributes:(id)attributes;

@end

#endif /* MRKeyboardMessage_h */
