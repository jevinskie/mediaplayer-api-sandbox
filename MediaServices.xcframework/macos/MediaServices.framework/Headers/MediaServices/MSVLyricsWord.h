//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVLyricsWord_h
#define MSVLyricsWord_h
@import Foundation;

@class MSVLyricsLine;

#include "MSVLyricsLine.h"
#include "MSVLyricsTextElement.h"

@interface MSVLyricsWord : MSVLyricsTextElement

@property(weak, nonatomic) MSVLyricsLine *parentLine;
@property(retain, nonatomic) MSVLyricsWord *nextWord;
@property(weak, nonatomic) MSVLyricsWord *parentWord;
@property(retain, nonatomic) NSArray *subwords;
@property(nonatomic) NSRange characterRange;
@property(nonatomic) long long wordIndex;

/* instance methods */
- (id)init;
- (id)agent;

@end

#endif /* MSVLyricsWord_h */
