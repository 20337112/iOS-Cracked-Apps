//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTAnimationLoadingViewDelegate.h"
#import "TranslateVideoCaptureDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CTAnimationLoadingView, CTImageTranslateResultView, CTLanguageSelectView, CTTranslateLanguagesModel, CTTranslateVideoCapture, NSString, Reachability, UIButton, UIImageView, UILabel, UIView;

@interface CTTranslateTakePhotosViewController : CTRootViewController <TranslateVideoCaptureDelegate, CTAnimationLoadingViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _isStopRequestTranslate;
    _Bool _stopSystem;
    _Bool _leaveUs;
    _Bool _netError;
    long long _toLanguageIndex;
    long long _fromLanguageIndex;
    UIView *_cameraView;
    UIView *_coverView;
    UIView *_bottomView;
    UIView *_localPhotosView;
    UIView *_focusCursor;
    UIView *_zoomControlView;
    UIView *_zoomProgressBarView;
    UIImageView *_zoomBallView;
    CTTranslateLanguagesModel *_tranlaterToLanguageModel;
    CTTranslateLanguagesModel *_tranlaterFromlanguageModel;
    UIButton *_lightButton;
    UIButton *_translateButton;
    CTLanguageSelectView *_languageSelectView;
    UILabel *_sourceTitlelabel;
    UILabel *_destinationTitleLabel;
    CTTranslateVideoCapture *_vedioCapturer;
    CTAnimationLoadingView *_translateLoadingView;
    CTImageTranslateResultView *_translateResultView;
    Reachability *_hostReachability;
    double _deviceScale;
    double _videoMaxZoomFactor;
}

@property(nonatomic) _Bool netError; // @synthesize netError=_netError;
@property(nonatomic) double videoMaxZoomFactor; // @synthesize videoMaxZoomFactor=_videoMaxZoomFactor;
@property(nonatomic) double deviceScale; // @synthesize deviceScale=_deviceScale;
@property(nonatomic) _Bool leaveUs; // @synthesize leaveUs=_leaveUs;
@property(nonatomic) _Bool stopSystem; // @synthesize stopSystem=_stopSystem;
@property(nonatomic) _Bool isStopRequestTranslate; // @synthesize isStopRequestTranslate=_isStopRequestTranslate;
@property(retain, nonatomic) Reachability *hostReachability; // @synthesize hostReachability=_hostReachability;
@property(retain, nonatomic) CTImageTranslateResultView *translateResultView; // @synthesize translateResultView=_translateResultView;
@property(retain, nonatomic) CTAnimationLoadingView *translateLoadingView; // @synthesize translateLoadingView=_translateLoadingView;
@property(retain, nonatomic) CTTranslateVideoCapture *vedioCapturer; // @synthesize vedioCapturer=_vedioCapturer;
@property(nonatomic) __weak UILabel *destinationTitleLabel; // @synthesize destinationTitleLabel=_destinationTitleLabel;
@property(nonatomic) __weak UILabel *sourceTitlelabel; // @synthesize sourceTitlelabel=_sourceTitlelabel;
@property(retain, nonatomic) CTLanguageSelectView *languageSelectView; // @synthesize languageSelectView=_languageSelectView;
@property(nonatomic) __weak UIButton *translateButton; // @synthesize translateButton=_translateButton;
@property(nonatomic) __weak UIButton *lightButton; // @synthesize lightButton=_lightButton;
@property(retain, nonatomic) CTTranslateLanguagesModel *tranlaterFromlanguageModel; // @synthesize tranlaterFromlanguageModel=_tranlaterFromlanguageModel;
@property(retain, nonatomic) CTTranslateLanguagesModel *tranlaterToLanguageModel; // @synthesize tranlaterToLanguageModel=_tranlaterToLanguageModel;
@property(retain, nonatomic) UIImageView *zoomBallView; // @synthesize zoomBallView=_zoomBallView;
@property(retain, nonatomic) UIView *zoomProgressBarView; // @synthesize zoomProgressBarView=_zoomProgressBarView;
@property(retain, nonatomic) UIView *zoomControlView; // @synthesize zoomControlView=_zoomControlView;
@property(nonatomic) __weak UIView *focusCursor; // @synthesize focusCursor=_focusCursor;
@property(nonatomic) __weak UIView *localPhotosView; // @synthesize localPhotosView=_localPhotosView;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) long long fromLanguageIndex; // @synthesize fromLanguageIndex=_fromLanguageIndex;
@property(nonatomic) long long toLanguageIndex; // @synthesize toLanguageIndex=_toLanguageIndex;
- (void).cxx_destruct;
- (void)turnTorchOn:(_Bool)arg1;
- (void)afterCancelLoadingWithView:(id)arg1;
- (id)fixOrientation:(id)arg1;
- (void)goToImageTranslateVC:(id)arg1 isFromPhoto:(_Bool)arg2;
- (void)ctranViewCaptureComingWithImage:(id)arg1;
- (void)translateButtonClick:(id)arg1;
- (void)lightExchangeClick:(id)arg1;
- (void)backBtnClick:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)choosePhotoByAlbum;
- (void)initData;
- (void)initCameraView;
- (void)changeDeviceProperty:(CDUnknownBlockType)arg1;
- (void)setDeviceVideoZoomFactor:(double)arg1;
- (void)focusWithMode:(long long)arg1 exposureMode:(long long)arg2 atPoint:(struct CGPoint)arg3;
- (void)setZoomWithScale:(double)arg1;
- (void)setFocusCursorWithPoint:(struct CGPoint)arg1;
- (void)pinchCameraView:(id)arg1;
- (void)tapCameraView:(id)arg1;
- (void)addGenstureRecognizer;
- (void)initRequestCamera;
- (void)initPinchView;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)appWillResignActive;
- (void)appWillBecomeActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

