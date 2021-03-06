//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDate, NSDictionary, TBMeasureARBottomAreaControl, TBMeasureARCameraView, TBMeasureARNavibar, TBMeasureARStateMachine, TBMeasureDataEngine, TBMeasureGuideView, TBMeasureSizeChartViewModel, TBSDKMTOPServer, TBSDKUploadService, UIActivityIndicatorView;

@interface TBMeasureARViewController : UIViewController
{
    _Bool _isViewDidLoad;
    _Bool _isGoBack;
    _Bool _oneOfProcessReady;
    _Bool _isGuideViewShowed;
    _Bool _isCameraFirstInit;
    _Bool _isCameraInitFailed;
    TBMeasureDataEngine *_measureDataEngine;
    TBMeasureSizeChartViewModel *_sizeChartModel;
    TBSDKMTOPServer *_getSizeChartServer;
    TBSDKMTOPServer *_saveMySizeServer;
    TBSDKUploadService *_uploadService;
    TBSDKMTOPServer *_caculateSizeServer;
    unsigned long long _lastState;
    TBMeasureARStateMachine *_stateMachine;
    TBMeasureARCameraView *_cameraView;
    TBMeasureARBottomAreaControl *_bottomAreaControl;
    TBMeasureARNavibar *_navibar;
    TBMeasureGuideView *_guidView;
    NSDictionary *_caculateCache;
    UIActivityIndicatorView *_loading;
    NSDate *_performanceStart;
    NSDate *_networkStart;
}

@property(retain, nonatomic) NSDate *networkStart; // @synthesize networkStart=_networkStart;
@property(retain, nonatomic) NSDate *performanceStart; // @synthesize performanceStart=_performanceStart;
@property(nonatomic) _Bool isCameraInitFailed; // @synthesize isCameraInitFailed=_isCameraInitFailed;
@property(nonatomic) _Bool isCameraFirstInit; // @synthesize isCameraFirstInit=_isCameraFirstInit;
@property(nonatomic) _Bool isGuideViewShowed; // @synthesize isGuideViewShowed=_isGuideViewShowed;
@property(nonatomic) _Bool oneOfProcessReady; // @synthesize oneOfProcessReady=_oneOfProcessReady;
@property(nonatomic) _Bool isGoBack; // @synthesize isGoBack=_isGoBack;
@property(nonatomic) _Bool isViewDidLoad; // @synthesize isViewDidLoad=_isViewDidLoad;
@property(retain, nonatomic) UIActivityIndicatorView *loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSDictionary *caculateCache; // @synthesize caculateCache=_caculateCache;
@property(retain, nonatomic) TBMeasureGuideView *guidView; // @synthesize guidView=_guidView;
@property(retain, nonatomic) TBMeasureARNavibar *navibar; // @synthesize navibar=_navibar;
@property(retain, nonatomic) TBMeasureARBottomAreaControl *bottomAreaControl; // @synthesize bottomAreaControl=_bottomAreaControl;
@property(retain, nonatomic) TBMeasureARCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) TBMeasureARStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) unsigned long long lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) TBSDKMTOPServer *caculateSizeServer; // @synthesize caculateSizeServer=_caculateSizeServer;
@property(retain, nonatomic) TBSDKUploadService *uploadService; // @synthesize uploadService=_uploadService;
@property(retain, nonatomic) TBSDKMTOPServer *saveMySizeServer; // @synthesize saveMySizeServer=_saveMySizeServer;
@property(retain, nonatomic) TBSDKMTOPServer *getSizeChartServer; // @synthesize getSizeChartServer=_getSizeChartServer;
@property(retain, nonatomic) TBMeasureSizeChartViewModel *sizeChartModel; // @synthesize sizeChartModel=_sizeChartModel;
@property(retain, nonatomic) TBMeasureDataEngine *measureDataEngine; // @synthesize measureDataEngine=_measureDataEngine;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long state;
- (void)showGuideView;
- (void)goback;
- (void)commonInit:(id)arg1;
- (id)getCaculateData:(id)arg1;
- (id)getMeasureData;
- (void)executeUploadFileFailed:(id)arg1 code:(id)arg2 msg:(id)arg3 needMonitorUploadFile:(_Bool)arg4;
- (void)executeUploadFileSuccess:(id)arg1 needMonitorUploadFile:(_Bool)arg2;
- (void)executeCaculateSizeFailed:(id)arg1 needMonitor:(_Bool)arg2;
- (void)executeCaculateSizeSuccess:(id)arg1;
- (_Bool)checkCaculateResult:(_Bool)arg1 measureInfo:(id)arg2;
- (void)executeSaveSizeChartFailed:(id)arg1;
- (void)executeSaveSizeChartSuccess:(id)arg1;
- (void)executeGetSizeChartFailed:(id)arg1;
- (void)executeGetSizeChartSuccess:(id)arg1;
- (void)uploadFile;
- (void)sendCaculateRequest;
- (void)sendSaveSizeRequest;
- (void)sendGetSizeChartRequest;
- (struct CGSize)getImageSize:(id)arg1 height:(double)arg2;
- (void)configContent;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNativeParames:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

