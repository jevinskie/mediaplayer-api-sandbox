//
//   Generated by https://github.com/blacktop/ipsw (Version: v3.1.508, BuildCommit: 5831334d9)
//
//    - LC_BUILD_VERSION:  Platform: macOS, MinOS: 14.3, SDK: 14.3, Tool: ld (902.8)
//    - LC_BUILD_VERSION:  Platform: macCatalyst, MinOS: 17.3, SDK: 17.3, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.440.1.0.0
//
#ifndef MRV3NowPlayingController_h
#define MRV3NowPlayingController_h
@import Foundation;

#include "MRDestinationResolver.h"
#include "MRDestinationResolverDelegate-Protocol.h"
#include "MRNowPlayingControllerConfiguration.h"
#include "MRNowPlayingControllerDestination.h"
#include "MRNowPlayingControllerHelper.h"
#include "MRNowPlayingControllerImpl-Protocol.h"
#include "MRNowPlayingPlayerResponse.h"

@class MSVVariableIntervalTimer;
@protocol OS_dispatch_queue;

@interface MRV3NowPlayingController
    : NSObject <MRDestinationResolverDelegate, MRNowPlayingControllerImpl>

@property(retain, nonatomic) MRDestinationResolver *destinationResolver;
@property(copy, nonatomic) MRNowPlayingPlayerResponse *response;
@property(copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property(retain, nonatomic) NSMutableArray *deferredContentItemsToMerge;
@property(nonatomic) _Bool registeredForNotifications;
@property(nonatomic) _Bool isUpdating;
@property(nonatomic) _Bool isResolving;
@property(nonatomic) _Bool requestingQueue;
@property(retain, nonatomic) NSDate *lastQueueRequestDate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(retain, nonatomic) MSVVariableIntervalTimer *loadRetryTimer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) MRNowPlayingControllerHelper *helper;
@property(readonly, copy, nonatomic) MRNowPlayingControllerDestination *destination;

/* instance methods */
- (void)dealloc;
- (id)initWithConfiguration:(id)configuration;
- (void)_unregisterNotificationHandlers;
- (void)_handleClientPropertiesDidChange:(id)change;
- (void)_handlePlaybackQueueChangedNotification:(id)notification;
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)notification;
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)notification;
- (void)_handlePlaybackStateChangedNotification:(id)notification;
- (void)_handleSupportedCommandsChangedNotification:(id)notification;
- (id)_loadNowPlayingStateForPlayerPath:(id)path error:(id *)error;
- (void)_notifyDelegateOfError:(id)error;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfNewResponse:(id)response;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)change;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)change;
- (void)_notifyDelegateOfPlayerPathChange:(id)change;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)change;
- (void)_notifyDelegateOfUpdatedArtwork:(id)artwork;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)properties;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)items;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)date;
- (void)_onQueue_clearStateForResolvedPlayerPath;
- (void)_registerNotificationHandlersForResolvedPlayerPath:(id)path;
- (void)_reloadWithReason:(id)reason;
- (void)_requestClientPropertiesForPlayerPath:(id)path
                                        queue:(id)queue
                                   completion:(id /* block */)completion;
- (void)_requestContentItemArtwork:(id)artwork
                     forPlayerPath:(id)path
                             queue:(id)queue
                        completion:(id /* block */)completion;
- (void)_requestPlaybackQueueForPlayerPath:(id)path
                                   request:(id)request
                                     queue:(id)queue
                                completion:(id /* block */)completion;
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)path
                                             queue:(id)queue
                                        completion:(id /* block */)completion;
- (void)_requestSupportedCommandsForPlayerPath:(id)path
                                         queue:(id)queue
                                    completion:(id /* block */)completion;
- (void)beginLoadingUpdates;
- (void)beginResolving;
- (void)destinationResolver:(id)resolver didFailWithError:(id)error;
- (void)destinationResolver:(id)resolver playerPathDidChange:(id)change;
- (void)destinationResolverDestinationDidInvalidate:(id)invalidate;
- (void)destinationWithCompletion:(id /* block */)completion;
- (void)endLoadingUpdates;
- (void)sendCommand:(unsigned int)command
            options:(id)options
         appOptions:(unsigned int)options
         completion:(id /* block */)completion;

@end

#endif /* MRV3NowPlayingController_h */
