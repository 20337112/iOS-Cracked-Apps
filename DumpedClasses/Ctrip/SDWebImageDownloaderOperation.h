//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"
#import "SDWebImageOperation.h"

@class NSMutableData, NSString, NSThread, NSURLCredential, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTask;

@interface SDWebImageDownloaderOperation : NSOperation <SDWebImageOperation, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    unsigned long long width;
    unsigned long long height;
    long long orientation;
    _Bool responseFromCached;
    _Bool _executing;
    _Bool _finished;
    _Bool _shouldDecompressImages;
    _Bool _shouldUseCredentialStorage;
    NSURLRequest *_request;
    NSURLSessionTask *_dataTask;
    NSURLCredential *_credential;
    unsigned long long _options;
    long long _expectedSize;
    NSURLResponse *_response;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _cancelBlock;
    NSMutableData *_imageData;
    NSURLSession *_unownedSession;
    NSURLSession *_ownedSession;
    NSThread *_thread;
    unsigned long long _backgroundTaskId;
}

+ (long long)orientationFromPropertyValue:(long long)arg1;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSURLSession *ownedSession; // @synthesize ownedSession=_ownedSession;
@property(nonatomic) __weak NSURLSession *unownedSession; // @synthesize unownedSession=_unownedSession;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) _Bool shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(nonatomic) _Bool shouldDecompressImages; // @synthesize shouldDecompressImages=_shouldDecompressImages;
@property(retain, nonatomic) NSURLSessionTask *dataTask; // @synthesize dataTask=_dataTask;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (_Bool)shouldContinueWhenAppEntersBackground;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)isConcurrent;
- (void)reset;
- (void)done;
- (void)cancelInternal;
- (void)cancelInternalAndStop;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 inSession:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5 cancelled:(CDUnknownBlockType)arg6;
- (id)initWithRequest:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4 cancelled:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

