//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTNetErrorDelegate.h"
#import "UIWebViewDelegate.h"

@class CTH5WebView, CTNetErrorView, NSError, NSString, NSURL, UIControl, UIView;

@interface CTH5ViewController : CTRootViewController <CTNetErrorDelegate, UIWebViewDelegate>
{
    _Bool viewDidAppeared;
    _Bool needShowError;
    NSError *_error;
    _Bool _isShowLoadingPage;
    _Bool _isHideNavBar;
    _Bool _navBarHidden;
    _Bool _isPresentToShow;
    _Bool _isOnlyUseWebviewHistoryBack;
    _Bool _isWebViewUnloaded;
    _Bool _isLoading;
    float _originalScreenBrightness;
    int _ctH5NavbarStyle;
    id <CTH5ViewControllerDelegate> _h5ReadTitleDelegate;
    CTNetErrorView *_loadingErrorView;
    NSString *_loadingTipMessage;
    NSURL *_currentURL;
    CTH5WebView *_webView;
    UIControl *_navbarTouch;
    double _lastShowErrorViewTimestamp;
    UIView *_tmpTitleView;
}

+ (id)loadURL:(id)arg1 title:(id)arg2 subClass:(Class)arg3 fromViewController:(id)arg4 animated:(_Bool)arg5;
+ (id)presentURL:(id)arg1 title:(id)arg2 fromViewController:(id)arg3;
+ (id)loadURL:(id)arg1 title:(id)arg2 fromViewController:(id)arg3;
+ (id)loadURL:(id)arg1 title:(id)arg2 fromViewController:(id)arg3 showLoadingPage:(_Bool)arg4;
+ (id)loadURL:(id)arg1 fromViewController:(id)arg2 showLoadingPage:(_Bool)arg3;
+ (id)loadURL:(id)arg1 fromViewController:(id)arg2;
+ (_Bool)loadURLWithH5PageParam:(id)arg1 fromViewController:(id)arg2;
+ (id)loadURL:(id)arg1 title:(id)arg2 subClass:(Class)arg3 fromViewController:(id)arg4 showLoadingPage:(_Bool)arg5;
+ (id)loadURL:(id)arg1 title:(id)arg2 subClass:(Class)arg3 fromViewController:(id)arg4 showLoadingPage:(_Bool)arg5 animated:(_Bool)arg6;
+ (id)loadURL:(id)arg1 title:(id)arg2 subClass:(Class)arg3 fromViewController:(id)arg4;
+ (id)presentURL:(id)arg1 title:(id)arg2 subClass:(Class)arg3 fromViewController:(id)arg4;
+ (id)controllerWithTabPageType;
+ (id)loadFromPageType:(long long)arg1 cacheBean:(id)arg2 fromViewController:(id)arg3;
+ (id)urlWithPageType:(long long)arg1 cacheBean:(id)arg2;
+ (id)loadURLWithoutAnimation:(id)arg1 title:(id)arg2 subClass:(Class)arg3 fromViewController:(id)arg4;
+ (void)loadAdvURLStringWithoutAnimation:(id)arg1 title:(id)arg2 fromViewController:(id)arg3;
@property(retain, nonatomic) UIView *tmpTitleView; // @synthesize tmpTitleView=_tmpTitleView;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) double lastShowErrorViewTimestamp; // @synthesize lastShowErrorViewTimestamp=_lastShowErrorViewTimestamp;
@property(nonatomic) _Bool isWebViewUnloaded; // @synthesize isWebViewUnloaded=_isWebViewUnloaded;
@property(retain, nonatomic) UIControl *navbarTouch; // @synthesize navbarTouch=_navbarTouch;
@property(retain, nonatomic) CTH5WebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool isOnlyUseWebviewHistoryBack; // @synthesize isOnlyUseWebviewHistoryBack=_isOnlyUseWebviewHistoryBack;
@property(nonatomic) _Bool isPresentToShow; // @synthesize isPresentToShow=_isPresentToShow;
@property(nonatomic) _Bool navBarHidden; // @synthesize navBarHidden=_navBarHidden;
@property(nonatomic) int ctH5NavbarStyle; // @synthesize ctH5NavbarStyle=_ctH5NavbarStyle;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) float originalScreenBrightness; // @synthesize originalScreenBrightness=_originalScreenBrightness;
@property(nonatomic) _Bool isHideNavBar; // @synthesize isHideNavBar=_isHideNavBar;
@property(copy, nonatomic) NSString *loadingTipMessage; // @synthesize loadingTipMessage=_loadingTipMessage;
@property(nonatomic) _Bool isShowLoadingPage; // @synthesize isShowLoadingPage=_isShowLoadingPage;
@property(retain, nonatomic) CTNetErrorView *loadingErrorView; // @synthesize loadingErrorView=_loadingErrorView;
@property(nonatomic) id <CTH5ViewControllerDelegate> h5ReadTitleDelegate; // @synthesize h5ReadTitleDelegate=_h5ReadTitleDelegate;
- (void).cxx_destruct;
- (void)refreshAction;
- (void)setNavBarHiddenWithoutAnimation:(_Bool)arg1;
- (void)readPageTitleIfNeed;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)tapAction;
- (void)gotoH5TestViewController;
- (void)recoveryScreenBrightness;
- (void)willTerminateWithNotification:(id)arg1;
- (void)willEnterBackgroundWithNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)autoHideLoadingViewIfNeed;
- (void)hideLoadingView;
- (void)showLoadingViewWithTipsMessage:(id)arg1;
- (void)showLoadingView;
- (_Bool)hasLoadingView;
- (void)hideLoadFailView;
- (void)showLoadFailView:(id)arg1;
- (void)addDebugFunction;
- (void)viewDidLoad;
- (id)getRealLoadURL;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)cleanConnections;
- (void)cancelTimeoutAction;
- (void)showTimeoutView;
- (void)loadURLInCurrentPage:(id)arg1;
- (void)loadCurrentRequestURL;
- (id)ctripNavigationController;
- (void)setPageName:(id)arg1;
@property(readonly, nonatomic) NSURL *requestURL;
@property(readonly, nonatomic) CTH5WebView *h5WebView;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)delegateRefreshBtnClicked:(id)arg1;
- (int)applyNavigationBarStyle;
- (void)reloadLowPriceViewController:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

