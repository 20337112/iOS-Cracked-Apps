//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLock, NSMutableDictionary, NSString;

@interface CTServiceController : NSObject
{
    NSString *currentServiceQueueToken_;
    NSMutableDictionary *loadWithTokenDictionary_;
    NSLock *targetLock_;
    NSLock *cancelLock_;
    NSLock *deleteLock_;
    id owner;
    NSArray *_serviceThreadList;
}

+ (id)createServiceFinishDictionaryWithQueueToken:(id)arg1 returnModel:(id)arg2;
+ (id)createServiceDictionaryWithToken:(id)arg1 threadObject:(id)arg2 queueFlags:(id)arg3 threadState:(int)arg4 successBlocks:(id)arg5 failedBlocks:(id)arg6;
@property(retain) NSArray *serviceThreadList; // @synthesize serviceThreadList=_serviceThreadList;
@property(retain) NSMutableDictionary *loadWithTokenDictionary; // @synthesize loadWithTokenDictionary=loadWithTokenDictionary_;
@property(copy) NSString *currentServiceQueueToken; // @synthesize currentServiceQueueToken=currentServiceQueueToken_;
@property(nonatomic) __weak id owner; // @synthesize owner;
- (void).cxx_destruct;
- (id)createResponseModelForErrorWithToken:(id)arg1 isMainService:(_Bool)arg2;
- (void)goToInsideWithCacheBean:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 isShowLoading:(_Bool)arg4 isShowCancel:(_Bool)arg5 isGoBackAfterCancel:(_Bool)arg6 isShowErrorInfo:(_Bool)arg7 nextPageClass:(Class)arg8 animateType:(int)arg9 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg10 sendServiceBlock:(CDUnknownBlockType)arg11 successBlock:(CDUnknownBlockType)arg12 failedBlock:(CDUnknownBlockType)arg13;
- (void)getTargetNowWithModel:(id)arg1 isShowLoading:(_Bool)arg2 isShowCancel:(_Bool)arg3 isGoBackAfterCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 isShowProgress:(_Bool)arg6 nextPageCacheBean:(id)arg7 isCurrentPageSendRequest:(_Bool)arg8 goToPreView:(id)arg9 nextPageClass:(Class)arg10 animateType:(int)arg11 successBlocks:(CDUnknownBlockType)arg12 failedBlocks:(CDUnknownBlockType)arg13;
- (void)getTargetNowWithModel:(id)arg1 isShowLoading:(_Bool)arg2 isShowCancel:(_Bool)arg3 isGoBackAfterCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 isShowProgress:(_Bool)arg6 nextPageCacheBean:(id)arg7 isCurrentPageSendRequest:(_Bool)arg8 goToPreViewController:(id)arg9 nextPageClass:(Class)arg10 animateType:(int)arg11 successBlocks:(CDUnknownBlockType)arg12 failedBlocks:(CDUnknownBlockType)arg13;
- (void)getTargetNowWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 isShowLoading:(_Bool)arg4 isShowCancel:(_Bool)arg5 isGoBackAfterCancel:(_Bool)arg6 isShowErrorInfo:(_Bool)arg7 isShowProgress:(_Bool)arg8 isCurrentPageSendRequest:(_Bool)arg9 goToPrePage:(id)arg10 nextPageClass:(Class)arg11 animateType:(int)arg12 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg13 sendServiceBlock:(CDUnknownBlockType)arg14 successBlock:(CDUnknownBlockType)arg15 failedBlock:(CDUnknownBlockType)arg16;
- (long long)getSequenceWithServiceToken:(id)arg1;
- (id)getQueueTokenWithServiceToken:(id)arg1;
- (void)afterCancelActionWithToken:(id)arg1;
- (void)removeBlock:(id)arg1;
- (void)cancelAllServices;
- (void)cancelServiceWithToken:(id)arg1;
- (void)cancelNotManagedServieceWithToken:(id)arg1;
- (void)showErrorInfoWithTitle:(id)arg1 message:(id)arg2 goBackFlag:(_Bool)arg3;
- (void)showErrorInfoWithMessage:(id)arg1 goBackFlag:(_Bool)arg2;
- (void)cancelLoadingWithToken:(id)arg1;
- (void)stopLoadingWithToken:(id)arg1;
- (void)startLoadingWithToken:(id)arg1 cancel:(_Bool)arg2;
- (void)startAnimationLoadingWithToken:(id)arg1 inView:(id)arg2 cancel:(_Bool)arg3 text:(id)arg4 loadingType:(int)arg5;
- (void)startLoadingWithToken:(id)arg1 inView:(id)arg2 cancel:(_Bool)arg3 text:(id)arg4 loadingType:(int)arg5;
- (void)serviceFinished:(id)arg1;
- (void)listenServiceThread:(id)arg1;
- (void)checkThreadMapState;
- (void)getTargetNowWithModel:(id)arg1 isShowLoading:(_Bool)arg2 isShowCancel:(_Bool)arg3 isGoBackAfterCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 isShowProgress:(_Bool)arg6 cacheBean:(id)arg7 saveParam:(id)arg8 isCurrentPageSendRequest:(_Bool)arg9 goToPreView:(id)arg10 nextPageClass:(Class)arg11 animateType:(int)arg12 successBlocks:(CDUnknownBlockType)arg13 failedBlocks:(CDUnknownBlockType)arg14;
- (void)getTargetNowWithModel:(id)arg1 isShowLoading:(_Bool)arg2 isShowCancel:(_Bool)arg3 isGoBackAfterCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 isShowProgress:(_Bool)arg6 cacheBean:(id)arg7 saveParam:(id)arg8 isCurrentPageSendRequest:(_Bool)arg9 goToPreViewController:(id)arg10 nextPageClass:(Class)arg11 animateType:(int)arg12 successBlocks:(CDUnknownBlockType)arg13 failedBlocks:(CDUnknownBlockType)arg14;
- (void)getTargetNowWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isGoBackAfterCancel:(_Bool)arg5 isShowErrorInfo:(_Bool)arg6 isShowProgress:(_Bool)arg7 cacheBean:(id)arg8 saveParam:(id)arg9 isCurrentPageSendRequest:(_Bool)arg10 goToPrePage:(id)arg11 nextPageClass:(Class)arg12 animateType:(int)arg13 successBlocks:(CDUnknownBlockType)arg14 failedBlocks:(CDUnknownBlockType)arg15;
- (void)goToInsideWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isGoBackAfterCancel:(_Bool)arg5 isShowErrorInfo:(_Bool)arg6 successBlocks:(CDUnknownBlockType)arg7 failedBlocks:(CDUnknownBlockType)arg8;
- (void)goToInsideWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 successBlocks:(CDUnknownBlockType)arg6 failedBlocks:(CDUnknownBlockType)arg7;
- (void)clickAlertView:(_Bool)arg1;
- (void)cancelAllWaitingMainService;
- (void)deleteRecordWithToken:(id)arg1;
- (void)setThreadState:(int)arg1 withToken:(id)arg2;
- (id)getThreadObjectWithToken:(id)arg1;
- (id)getQueueFlagsWithToken:(id)arg1;
- (id)getFailedBlocksWithToken:(id)arg1;
- (id)getSuccessBlocksWithToken:(id)arg1;
- (_Bool)hasQueueToken:(id)arg1;
- (void)removeServiceThreads:(id)arg1;
- (void)removeServiceThread:(id)arg1;
- (void)addServiceThread:(id)arg1;
- (void)initBaseData;
- (id)init;
- (void)dealloc;

@end

