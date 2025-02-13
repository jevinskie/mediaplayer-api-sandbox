//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.340.1.0.0
//
#ifndef MSVStreamWriter_h
#define MSVStreamWriter_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {
    /* instance variables */
    NSMutableArray *_pendingWriteDataList;
    _Bool _stopped;
    _Bool _closeOnStop;
    // struct z_stream_s { char *x0; unsigned int x1; unsigned long long x2; char *x3; unsigned int
    // x4; unsigned long long x5; char *x6; struct internal_state *x7; void * /* function */ x8;
    // void * /* function */ x9; void *x10; int x11; unsigned long long x12; unsigned long long x13;
    // } * _zstreamp;
}

@property(retain, nonatomic) NSOutputStream *outputStream;
@property(retain, nonatomic) NSInputStream *inputStream;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(nonatomic) double timestamp;
@property(nonatomic) unsigned long long bytesWritten;
@property(nonatomic) unsigned long long maximumBufferSize;
@property(nonatomic) _Bool compressed;
@property(copy, nonatomic) id /* block */ canWriteDataBlock;
@property(copy, nonatomic) id /* block */ didFinishWritingBlock;
@property(copy, nonatomic) id /* block */ didEncounterErrorBlock;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
- (void)start;
- (_Bool)isCompressed;
- (void)stop;
- (id)initWithQueue:(id)queue;
- (void)stopWithCompletion:(id /* block */)completion;
- (void)_onQueue_stop;
- (_Bool)_processInput:(id)input generatingDecompressedData:(id *)data;
- (void)_writeAvailablePendingData;
- (id)initWithOutputStream:(id)stream queue:(id)queue;
- (_Bool)writeAllData:(id)data error:(id *)error;
- (void)writeAllData:(id)data withCompletion:(id /* block */)completion;
- (void)writeData:(id)data withCompletion:(id /* block */)completion;
- (void)writeStreamError:(struct {
    long long x0;
    int x1;
})error;

@end

#endif /* MSVStreamWriter_h */
