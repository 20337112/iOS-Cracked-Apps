//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIFormDataRequestMonitor.h"

@class NSString;

@interface QLASIFormDataRequest : ASIFormDataRequestMonitor
{
    struct timeval startTime;
    CDUnknownBlockType _completionBlock;
    _Bool _enableAutoRetry;
    _Bool _isLoading;
    int _modelID;
    int _requestTimes;
    NSString *_backUpHost;
    id <QLASIHTTPDelegate> _userdelegate;
    id <QLASIURLResponse> _response;
    long long _waitingDuration;
    long long _connectDuration;
    long long _downloadDuration;
}

+ (id)getNetQueue;
+ (id)requestWithNSURL:(id)arg1 userdelegate:(id)arg2;
+ (id)requestWithURL:(id)arg1 userdelegate:(id)arg2;
+ (id)requestWithURL:(id)arg1 userdelegate:(id)arg2 useDefaultCookie:(_Bool)arg3;
+ (id)jce_RequestWithDelegate:(id)arg1 withJceBizObject:(id)arg2 requestJCECmd:(long long)arg3;
+ (id)jce_RequestWithDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) long long downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(readonly, nonatomic) long long connectDuration; // @synthesize connectDuration=_connectDuration;
@property(readonly, nonatomic) long long waitingDuration; // @synthesize waitingDuration=_waitingDuration;
@property(retain, nonatomic) id <QLASIURLResponse> response; // @synthesize response=_response;
@property __weak id <QLASIHTTPDelegate> userdelegate; // @synthesize userdelegate=_userdelegate;
@property(nonatomic) _Bool enableAutoRetry; // @synthesize enableAutoRetry=_enableAutoRetry;
@property(retain, nonatomic) NSString *backUpHost; // @synthesize backUpHost=_backUpHost;
@property int requestTimes; // @synthesize requestTimes=_requestTimes;
@property int modelID; // @synthesize modelID=_modelID;
- (void).cxx_destruct;
- (_Bool)shouldReportForModelID:(int)arg1;
- (long long)showtmpDuration;
- (long long)getTimeLengthWithStartTime:(struct timeval)arg1 endTime:(struct timeval)arg2;
- (id)makeBackUpUrl:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestDidFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (id)requestWillFinishedLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (_Bool)isStatusCodeError:(id)arg1;
- (void)setDefaultCookies;
- (id)initWithNSURL:(id)arg1 userdelegate:(id)arg2;
- (id)initWithURL:(id)arg1 userdelegate:(id)arg2;
- (void)send;
- (void)clearDelegatesAndCancel;
- (void)cancel;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;

@end

