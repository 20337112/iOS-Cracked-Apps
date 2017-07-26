//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CTDragNavigationControllerDelegate.h"
#import "CTFadeInOutViewViewDelegate.h"
#import "CTFullScreenMaskViewDelegate.h"
#import "CTLoadingViewDelegate.h"
#import "CTServiceControllerDelegate.h"
#import "CTUserOperationCollector.h"
#import "TrainJSCallBackDelegate.h"
#import "UIScrollViewDelegate.h"

@class CTCacheBean, CTFadeInOutView, CTFullScreenMaskView, CTNavigationController, CTServiceController, NSDictionary, NSMutableDictionary, NSNumber, NSString, UITapGestureRecognizer, UIView;

@interface CTRootViewController : UIViewController <UIScrollViewDelegate, TrainJSCallBackDelegate, CTDragNavigationControllerDelegate, CTServiceControllerDelegate, CTLoadingViewDelegate, CTFullScreenMaskViewDelegate, CTFadeInOutViewViewDelegate, CTUserOperationCollector>
{
    CTFullScreenMaskView *coverView_;
    _Bool isCustomizeKeyboard_;
    double preOffsetY_;
    _Bool isShowCustomeKeyboard_;
    _Bool isShowKeyboard_;
    CTFadeInOutView *fadeView_;
    _Bool _isTabViewSwitch;
    _Bool _isNaviBarHidderWhenShown;
    CTCacheBean *_ctripCacheBean;
    CTRootViewController *_ctripParentViewController;
    NSString *_mutexServicetoken;
    CTNavigationController *_ctripNavigationController;
    CTServiceController *_serviceController;
    UIView *_containerView;
    NSString *_pageName;
    NSNumber *_pageviewIdentify;
    UITapGestureRecognizer *_numberKeyBoardTapGesture;
    double _lastRecordTimestamp;
    NSString *_keyboardDoneButtonNormalImage;
    NSString *_keyboardDoneButtonHighlightedImage;
    NSString *_keyboardDoneButtonDisableImage;
}

+ (id)controllerWithTitle:(id)arg1;
@property(copy, nonatomic) NSString *keyboardDoneButtonDisableImage; // @synthesize keyboardDoneButtonDisableImage=_keyboardDoneButtonDisableImage;
@property(copy, nonatomic) NSString *keyboardDoneButtonHighlightedImage; // @synthesize keyboardDoneButtonHighlightedImage=_keyboardDoneButtonHighlightedImage;
@property(copy, nonatomic) NSString *keyboardDoneButtonNormalImage; // @synthesize keyboardDoneButtonNormalImage=_keyboardDoneButtonNormalImage;
@property(nonatomic) double lastRecordTimestamp; // @synthesize lastRecordTimestamp=_lastRecordTimestamp;
@property(retain, nonatomic) UITapGestureRecognizer *numberKeyBoardTapGesture; // @synthesize numberKeyBoardTapGesture=_numberKeyBoardTapGesture;
@property(retain, nonatomic) NSNumber *pageviewIdentify; // @synthesize pageviewIdentify=_pageviewIdentify;
@property(nonatomic) _Bool isNaviBarHidderWhenShown; // @synthesize isNaviBarHidderWhenShown=_isNaviBarHidderWhenShown;
@property(nonatomic) _Bool isTabViewSwitch; // @synthesize isTabViewSwitch=_isTabViewSwitch;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) CTServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(nonatomic) __weak CTNavigationController *ctripNavigationController; // @synthesize ctripNavigationController=_ctripNavigationController;
@property(copy, nonatomic) NSString *mutexServicetoken; // @synthesize mutexServicetoken=_mutexServicetoken;
@property(nonatomic) __weak CTRootViewController *ctripParentViewController; // @synthesize ctripParentViewController=_ctripParentViewController;
@property(retain, nonatomic) CTCacheBean *ctripCacheBean; // @synthesize ctripCacheBean=_ctripCacheBean;
- (void).cxx_destruct;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideFadeInOutView:(id)arg1;
- (void)showFadeInOutViewWithText:(id)arg1 isGoBack:(_Bool)arg2;
- (void)hideCoverView;
- (void)showCoverViewWithContentView:(id)arg1;
- (void)showCoverViewWithContentView:(id)arg1 isHideWhenTouchBackground:(_Bool)arg2;
- (void)showCoverViewWithContentView:(id)arg1 isHideWhenTouchBackground:(_Bool)arg2 position:(int)arg3;
- (void)unregisterKeyboardNumberPad;
- (void)registerKeyboardNumberPad;
- (void)setServiceControllerAlertOn;
- (void)setServiceControllerAlertOff;
- (void)cancelAllServices;
- (void)setTitle:(id)arg1;
- (void)fadeInOutView:(id)arg1 willRemoveFromSuperView:(id)arg2 isGoBack:(_Bool)arg3;
- (void)maskView:(id)arg1 willRemoveFromSuperView:(id)arg2;
- (void)hideKeyboard;
- (void)finishAction:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardDidShow:(id)arg1;
- (void)showCustomeNumberPadKey;
- (void)removeCustomeNumberPadKey;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (int)applyNavigationBarStyle;
- (void)initBaseView;
- (void)initBaseData;
- (void)logTrace:(id)arg1 withParams:(id)arg2;
- (void)logPage:(id)arg1 withParams:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)registerAnimationView:(id)arg1 withToken:(id)arg2 tag:(long long)arg3 text:(id)arg4 style:(int)arg5;
- (void)registerAnimationView:(id)arg1 withToken:(id)arg2 tag:(long long)arg3 text:(id)arg4;
- (void)registerAnimationView:(id)arg1 withToken:(id)arg2 tag:(long long)arg3;
- (void)registerAnimationView:(id)arg1 tag:(long long)arg2 text:(id)arg3 style:(int)arg4;
- (void)registerAnimationView:(id)arg1 tag:(long long)arg2 text:(id)arg3;
- (void)registerAnimationView:(id)arg1 tag:(long long)arg2;
- (void)registerView:(id)arg1 withToken:(id)arg2 tag:(long long)arg3 text:(id)arg4 style:(int)arg5;
- (void)registerView:(id)arg1 withToken:(id)arg2 tag:(long long)arg3 text:(id)arg4;
- (void)registerView:(id)arg1 withToken:(id)arg2 tag:(long long)arg3;
- (void)registerView:(id)arg1 tag:(long long)arg2 text:(id)arg3 style:(int)arg4;
- (void)registerView:(id)arg1 tag:(long long)arg2 text:(id)arg3;
- (void)registerView:(id)arg1 tag:(long long)arg2;
- (void)goToInsideWithCacheBean:(id)arg1 sendServiceBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (void)goToInsideWithCacheBean:(id)arg1 mutexServiceTokenArray:(id)arg2 sendServiceBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 isGoBackAfterCancel:(_Bool)arg3 nextPageClass:(Class)arg4 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 nextPageClass:(Class)arg4 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 nextPageClass:(Class)arg4 animateType:(int)arg5 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg6 sendServiceBlock:(CDUnknownBlockType)arg7 successBlock:(CDUnknownBlockType)arg8 failedBlock:(CDUnknownBlockType)arg9;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 nextPageClass:(Class)arg3 animateType:(int)arg4 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 nextPageClass:(Class)arg3 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg4 sendServiceBlock:(CDUnknownBlockType)arg5 successBlock:(CDUnknownBlockType)arg6 failedBlock:(CDUnknownBlockType)arg7;
- (void)goToInsideWithCacheBean:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 isShowLoading:(_Bool)arg4 isShowCancel:(_Bool)arg5 isGoBackAfterCancel:(_Bool)arg6 isShowErrorInfo:(_Bool)arg7 nextPageClass:(Class)arg8 animateType:(int)arg9 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg10 sendServiceBlock:(CDUnknownBlockType)arg11 successBlock:(CDUnknownBlockType)arg12 failedBlock:(CDUnknownBlockType)arg13;
- (void)goToInsideWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isGoBackAfterCancel:(_Bool)arg5 isShowErrorInfo:(_Bool)arg6 successBlocks:(CDUnknownBlockType)arg7 failedBlocks:(CDUnknownBlockType)arg8;
- (void)goToInsideWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 successBlocks:(CDUnknownBlockType)arg6 failedBlocks:(CDUnknownBlockType)arg7;
- (void)goToInsideWithModel:(id)arg1 successBlocks:(CDUnknownBlockType)arg2 failedBlocks:(CDUnknownBlockType)arg3;
- (void)goToInsideWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 successBlocks:(CDUnknownBlockType)arg3 failedBlocks:(CDUnknownBlockType)arg4;
- (void)cancelServiceWithToken:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showErrorResult:(id)arg1;
- (void)trainCancelAllSender;
- (void)trainAddSenderRequestURLString:(id)arg1 token:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *trainSenderMap;
- (void)checkIsNewGuest;
- (void)buildCRNCallBack:(long long)arg1 data:(id)arg2 message:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)removeCoverView;
- (_Bool)hasCoverView;
@property(copy, nonatomic) CDUnknownBlockType crnCallBackForTrain;
@property(nonatomic) _Bool isFromCRNForTrain;
@property(nonatomic) _Bool isBackTrainHome;
@property(retain, nonatomic) NSDictionary *jsDataForTrain;
@property(copy, nonatomic) NSString *jsCallIdForTrain;
- (void)trainLoadDataFromJS:(id)arg1 callId:(id)arg2;
@property(nonatomic) _Bool isFromURLForTrain;
@property(nonatomic) _Bool isFromJSForTrain;
- (void)refreshFioWithType:(long long)arg1 fetchExtensions:(CDUnknownBlockType)arg2;
- (void)__refreshFioWithType:(long long)arg1 fetchExtensions:(CDUnknownBlockType)arg2;
- (void)__refreshAllFios:(CDUnknownBlockType)arg1;
- (void)refreshAllFios:(CDUnknownBlockType)arg1;
- (void)animation:(id)arg1 adView:(id)arg2 viewType:(long long)arg3 frame:(struct CGRect)arg4 sibFrame:(struct CGRect)arg5;
- (void)setLogTraceBlock:(CDUnknownBlockType)arg1;
- (void)updateFioPageType:(long long)arg1;
- (void)addFIOViewController:(long long)arg1 adPosition:(long long)arg2 frame:(struct CGRect)arg3 view:(id)arg4 viewType:(long long)arg5 showPageControl:(_Bool)arg6 offsetYofPC:(double)arg7 isConstHeight:(_Bool)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (void)addFIOViewController:(long long)arg1 adPosition:(long long)arg2 frame:(struct CGRect)arg3 view:(id)arg4 viewType:(long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)setFioSize:(struct CGSize)arg1;
- (struct CGSize)fioSize;
- (void)setFioSizeValue:(id)arg1;
- (id)fioSizeValue;
- (void)removeProperties;
- (void)addFioOject:(id)arg1;
- (void)setFioArray:(id)arg1;
- (id)fioArray;
- (id)uuid;
- (void)dimissViewWithAnimation:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showInViewController:(id)arg1 animation:(int)arg2 animated:(_Bool)arg3;
- (void)showInViewController:(id)arg1 animation:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showInViewController:(id)arg1 animation:(int)arg2;
@property(nonatomic) int transitionAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

