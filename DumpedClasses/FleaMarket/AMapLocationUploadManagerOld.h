//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapLocationFileManager, AMapLocationUploadInfoOld, AMapNetworkManager, NSDate, NSObject<OS_dispatch_queue>, NSTimer;

@interface AMapLocationUploadManagerOld : NSObject
{
    AMapNetworkManager *_networkManager;
    long long _uploadTimeout;
    AMapLocationUploadInfoOld *_lastLocaitonInfo;
    AMapLocationUploadInfoOld *_newLocationInfo;
    NSObject<OS_dispatch_queue> *_uploadDispatchQueue;
    _Bool _isUploading;
    _Bool _isSwitchLoading;
    _Bool _isAllowLocationUpload;
    _Bool _isAllowRealTimeUpload;
    AMapLocationFileManager *_fileManager;
    NSDate *_lastSwitcherRequestDate;
    long long _uploadSwitcherInterval;
    long long _realTimeInterval;
    NSTimer *_currentTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *currentTimer; // @synthesize currentTimer=_currentTimer;
@property(nonatomic) long long realTimeInterval; // @synthesize realTimeInterval=_realTimeInterval;
@property(nonatomic) long long uploadSwitcherInterval; // @synthesize uploadSwitcherInterval=_uploadSwitcherInterval;
@property(retain, nonatomic) NSDate *lastSwitcherRequestDate; // @synthesize lastSwitcherRequestDate=_lastSwitcherRequestDate;
@property(nonatomic) _Bool isAllowRealTimeUpload; // @synthesize isAllowRealTimeUpload=_isAllowRealTimeUpload;
@property(nonatomic) _Bool isAllowLocationUpload; // @synthesize isAllowLocationUpload=_isAllowLocationUpload;
@property(nonatomic) _Bool isSwitchLoading; // @synthesize isSwitchLoading=_isSwitchLoading;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) AMapLocationFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (void)startUploadInfoRequest:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)getFileToUpload;
- (void)requestUploadSwitcherStatusComplete:(CDUnknownBlockType)arg1;
- (void)timerCallback:(id)arg1;
- (void)uploadCacheFileIfNeeded;
- (void)reachabilityChanged:(id)arg1;
- (void)saveLocationUploadInfo:(id)arg1;
- (id)init;
- (void)dealloc;

@end

