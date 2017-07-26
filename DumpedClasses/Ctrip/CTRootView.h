//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTFadeInOutViewViewDelegate.h"
#import "CTFullScreenMaskViewDelegate.h"
#import "CTLoadingViewDelegate.h"
#import "CTRootViewDelegate.h"
#import "CTServiceControllerDelegate.h"
#import "CTTableViewDelegate.h"
#import "CTUniformTableViewDelegate.h"

@class CTCacheBean, CTFadeInOutView, CTFullScreenMaskView, CTServiceController, NSString, UITapGestureRecognizer, UIWindow;

@interface CTRootView : UIView <CTServiceControllerDelegate, CTTableViewDelegate, CTLoadingViewDelegate, CTRootViewDelegate, CTFullScreenMaskViewDelegate, CTFadeInOutViewViewDelegate, CTUniformTableViewDelegate>
{
    UIWindow *myNewWindow_;
    _Bool isShowCustomeKeyboard_;
    _Bool isShowKeyboard_;
    double preOffsetY_;
    CTFullScreenMaskView *coverView_;
    CTFadeInOutView *fadeView_;
    CTServiceController *serviceController_;
    UIView *containerView_;
    NSString *keyboardDoneButtonNormalImage_;
    NSString *keyboardDoneButtonHighlightedImage_;
    NSString *keyboardDoneButtonDisableImage_;
    UIWindow *applicationWindow_;
    CTCacheBean *_ctripCacheBean;
    NSString *_mutexServicetoken;
    UITapGestureRecognizer *_numberKeyBoardTapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *numberKeyBoardTapGesture; // @synthesize numberKeyBoardTapGesture=_numberKeyBoardTapGesture;
@property(copy, nonatomic) NSString *mutexServicetoken; // @synthesize mutexServicetoken=_mutexServicetoken;
@property(retain, nonatomic) CTCacheBean *ctripCacheBean; // @synthesize ctripCacheBean=_ctripCacheBean;
@property(copy, nonatomic) NSString *keyboardDoneButtonDisableImage; // @synthesize keyboardDoneButtonDisableImage=keyboardDoneButtonDisableImage_;
@property(copy, nonatomic) NSString *keyboardDoneButtonHighlightedImage; // @synthesize keyboardDoneButtonHighlightedImage=keyboardDoneButtonHighlightedImage_;
@property(copy, nonatomic) NSString *keyboardDoneButtonNormalImage; // @synthesize keyboardDoneButtonNormalImage=keyboardDoneButtonNormalImage_;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=containerView_;
@property(retain, nonatomic) CTServiceController *serviceController; // @synthesize serviceController=serviceController_;
- (void).cxx_destruct;
- (void)goToInsideWithCacheBean:(id)arg1 sendServiceBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (void)goToInsideWithCacheBean:(id)arg1 mutexServiceTokenArray:(id)arg2 sendServiceBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 isGoBackAfterCancel:(_Bool)arg3 nextPageClass:(Class)arg4 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 nextPageClass:(Class)arg4 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 nextPageClass:(Class)arg4 animateType:(int)arg5 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg6 sendServiceBlock:(CDUnknownBlockType)arg7 successBlock:(CDUnknownBlockType)arg8 failedBlock:(CDUnknownBlockType)arg9;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 nextPageClass:(Class)arg3 animateType:(int)arg4 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 nextPageClass:(Class)arg3 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg4 sendServiceBlock:(CDUnknownBlockType)arg5 successBlock:(CDUnknownBlockType)arg6 failedBlock:(CDUnknownBlockType)arg7;
- (void)goToInsideWithCacheBean:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 sendServiceBlock:(CDUnknownBlockType)arg6 successBlock:(CDUnknownBlockType)arg7 failedBlock:(CDUnknownBlockType)arg8;
- (void)goToNextPageWithCacheBean:(id)arg1 saveParam:(id)arg2 mutexServiceTokenArray:(id)arg3 isShowLoading:(_Bool)arg4 isShowCancel:(_Bool)arg5 isGoBackAfterCancel:(_Bool)arg6 isShowErrorInfo:(_Bool)arg7 nextPageClass:(Class)arg8 animateType:(int)arg9 nextCacheBeanCreateBlock:(CDUnknownBlockType)arg10 sendServiceBlock:(CDUnknownBlockType)arg11 successBlock:(CDUnknownBlockType)arg12 failedBlock:(CDUnknownBlockType)arg13;
- (void)goToInsideWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 isShowLoading:(_Bool)arg3 isShowCancel:(_Bool)arg4 isShowErrorInfo:(_Bool)arg5 successBlocks:(CDUnknownBlockType)arg6 failedBlocks:(CDUnknownBlockType)arg7;
- (void)goToInsideWithModel:(id)arg1 successBlocks:(CDUnknownBlockType)arg2 failedBlocks:(CDUnknownBlockType)arg3;
- (void)goToInsideWithModel:(id)arg1 mutexServiceTokenArray:(id)arg2 successBlocks:(CDUnknownBlockType)arg3 failedBlocks:(CDUnknownBlockType)arg4;
- (void)cancelServiceWithToken:(id)arg1;
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
- (void)hideFadeInOutView:(id)arg1;
- (void)showFadeInOutViewWithText:(id)arg1 size:(struct CGSize)arg2 imageName:(id)arg3 isGoBack:(_Bool)arg4;
- (void)showFadeInOutViewWithText:(id)arg1 isGoBack:(_Bool)arg2;
- (void)hideCoverView;
- (void)showCoverViewWithContentView:(id)arg1;
- (void)showCoverViewWithContentView:(id)arg1 isHideWhenTouchBackground:(_Bool)arg2;
- (void)unregisterKeyboardNumberPad;
- (void)registerKeyboardNumberPad;
- (void)setServiceControllerAlertOn;
- (void)setServiceControllerAlertOff;
- (void)cancelAllServices;
- (void)setFrame:(struct CGRect)arg1;
- (void)fadeInOutView:(id)arg1 willRemoveFromSuperView:(id)arg2 isGoBack:(_Bool)arg3;
- (void)maskView:(id)arg1 willRemoveFromSuperView:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)afterCancelLoadingWithView:(id)arg1;
- (void)hideKeyboard;
- (void)finishAction:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardDidShow:(id)arg1;
- (void)showCustomeNumberPadKey;
- (void)removeCustomeNumberPadKey;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)initBaseView;
- (void)initBaseData;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

