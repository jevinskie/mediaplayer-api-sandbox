//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVFileBufferedPipe_h
#define MSVFileBufferedPipe_h
@import Foundation;

@protocol OS_dispatch_queue
, OS_dispatch_source;

@interface MSVFileBufferedPipe : NSObject {
    /* instance variables */
    NSFileHandle *_writeBufferFileHandle;
    NSFileHandle *_readBufferFileHandle;
    NSPipe *_inputPipe;
    NSPipe *_outputPipe;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readyForData;
    _Bool _hasBufferedData;
    _Bool _readSourceClosed;
    NSData *_dataPendingWrite;
    unsigned int _dataPendingOffset;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_uniqueWriteErrors;
    long long _writeSourceState;
}

@property(readonly, retain, nonatomic) NSFileHandle *fileHandleForReading;
@property(readonly, retain, nonatomic) NSFileHandle *fileHandleForWriting;

/* class methods */
+ (id)pipe;

/* instance methods */
- (id)init;
- (void)_createBufferFiles;
- (void)_inputReadyForReading:(unsigned long long)reading;
- (void)_outputReadyForWriting:(unsigned long long)writing;
- (void)_writeBufferedData;

@end

#endif /* MSVFileBufferedPipe_h */
