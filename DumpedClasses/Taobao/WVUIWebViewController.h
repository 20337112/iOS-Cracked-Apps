//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVRuleWebViewController.h"

@class NSString, NSURLRequest, UIColor, UIScrollView, UIView, WVUIErrorView, WVUILoadingBox, WVWebViewToolbar;

@interface WVUIWebViewController : WVRuleWebViewController
{
    WVWebViewToolbar *_toolbar;
    _Bool _usePullToRefresh;
    _Bool _useInfiniteScrolling;
    _Bool _useCustomPullToRefresh;
    _Bool _needResetOrientation;
    _Bool _useToolbar;
    _Bool _showToolBarDynamic;
    _Bool _useToolbarOnlyError;
    _Bool _showLoadingBox;
    _Bool _isUseCustomToolBar;
    _Bool _useNavBtn;
    _Bool _useData;
    _Bool _useHtml;
    _Bool _isUsedForLocalWebApp;
    _Bool _isOpenPageUpdateAutomatic;
    _Bool _isObservingWebView;
    _Bool _toolbarHidden;
    _Bool _pullToRefreshConfigured;
    _Bool _haveFirstLoad;
    _Bool _automaticalyLoad;
    NSURLRequest *_loadRequest;
    double _navBarHeight;
    double _tabBarHeight;
    UIColor *_statusBarColor;
    double _toolbarHeight;
    id _customToolBarGoBackButton;
    id _customToolBarGoForwardButton;
    id _customToolBarStopLoadingButton;
    id _customToolBarRefreshButton;
    unsigned long long _interfaceOrientationMask;
    long long _preferredInterfaceOrientation;
    NSString *_navtitle;
    double _loadingMinDisplayTime;
    UIView *_statusBarView;
    double _oldPositionOfScroll;
    WVUIErrorView *_errorView;
    WVUILoadingBox *_loadingBox;
}

+ (void)updateOrientation:(long long)arg1;
+ (long long)interfaceOrientationFromMask:(unsigned long long)arg1;
@property(nonatomic) _Bool automaticalyLoad; // @synthesize automaticalyLoad=_automaticalyLoad;
@property(retain, nonatomic) WVUILoadingBox *loadingBox; // @synthesize loadingBox=_loadingBox;
@property(retain, nonatomic) WVUIErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool haveFirstLoad; // @synthesize haveFirstLoad=_haveFirstLoad;
@property(nonatomic) double oldPositionOfScroll; // @synthesize oldPositionOfScroll=_oldPositionOfScroll;
@property(nonatomic) _Bool pullToRefreshConfigured; // @synthesize pullToRefreshConfigured=_pullToRefreshConfigured;
@property(nonatomic) _Bool toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property(retain, nonatomic) UIView *statusBarView; // @synthesize statusBarView=_statusBarView;
@property(nonatomic) _Bool isObservingWebView; // @synthesize isObservingWebView=_isObservingWebView;
@property(nonatomic) _Bool isOpenPageUpdateAutomatic; // @synthesize isOpenPageUpdateAutomatic=_isOpenPageUpdateAutomatic;
@property(nonatomic) _Bool isUsedForLocalWebApp; // @synthesize isUsedForLocalWebApp=_isUsedForLocalWebApp;
@property(nonatomic) double loadingMinDisplayTime; // @synthesize loadingMinDisplayTime=_loadingMinDisplayTime;
@property(nonatomic) _Bool useHtml; // @synthesize useHtml=_useHtml;
@property(nonatomic) _Bool useData; // @synthesize useData=_useData;
@property(nonatomic) _Bool useNavBtn; // @synthesize useNavBtn=_useNavBtn;
@property(retain, nonatomic) NSString *navtitle; // @synthesize navtitle=_navtitle;
@property(nonatomic) _Bool isUseCustomToolBar; // @synthesize isUseCustomToolBar=_isUseCustomToolBar;
@property(nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
@property(nonatomic) unsigned long long interfaceOrientationMask; // @synthesize interfaceOrientationMask=_interfaceOrientationMask;
@property(nonatomic, getter=isShowLoadingBox) _Bool showLoadingBox; // @synthesize showLoadingBox=_showLoadingBox;
@property(nonatomic) __weak id customToolBarRefreshButton; // @synthesize customToolBarRefreshButton=_customToolBarRefreshButton;
@property(nonatomic) __weak id customToolBarStopLoadingButton; // @synthesize customToolBarStopLoadingButton=_customToolBarStopLoadingButton;
@property(nonatomic) __weak id customToolBarGoForwardButton; // @synthesize customToolBarGoForwardButton=_customToolBarGoForwardButton;
@property(nonatomic) __weak id customToolBarGoBackButton; // @synthesize customToolBarGoBackButton=_customToolBarGoBackButton;
@property(nonatomic, getter=isUseToolbarOnlyError) _Bool useToolbarOnlyError; // @synthesize useToolbarOnlyError=_useToolbarOnlyError;
@property(nonatomic) _Bool showToolBarDynamic; // @synthesize showToolBarDynamic=_showToolBarDynamic;
@property(nonatomic) double toolbarHeight; // @synthesize toolbarHeight=_toolbarHeight;
@property(nonatomic, getter=isUseToolbar) _Bool useToolbar; // @synthesize useToolbar=_useToolbar;
@property(retain, nonatomic) UIColor *statusBarColor; // @synthesize statusBarColor=_statusBarColor;
@property(nonatomic) double tabBarHeight; // @synthesize tabBarHeight=_tabBarHeight;
@property(nonatomic) double navBarHeight; // @synthesize navBarHeight=_navBarHeight;
@property(retain, nonatomic) NSURLRequest *loadRequest; // @synthesize loadRequest=_loadRequest;
- (void).cxx_destruct;
- (void)reloadWithNewParam:(id)arg1;
- (id)buildTagParamToUrl:(id)arg1;
- (id)removeTagParamFromUrl:(id)arg1;
- (void)loadPageByUrlWithoutTag:(id)arg1;
- (void)loadPageByUrlWithTag:(id)arg1;
- (void)loadPageByUrl:(id)arg1 isPost:(_Bool)arg2;
- (_Bool)isValidateUrl:(id)arg1;
- (_Bool)isCurrentUrlIsValidate;
- (void)viewControllerWillEndLocalApp;
- (void)viewControllerWillStartByLocalApp;
- (void)webViewLoadHTML:(id)arg1;
- (void)webViewLoadData:(id)arg1;
@property(nonatomic) _Bool isOpenAudioAutoPlay;
- (void)openAutomaticalyLoad;
- (void)closeAutomaticalyLoad;
- (_Bool)isErrorInfoViewShowing;
- (void)resumUsePullRefresh;
- (void)stopUsePullRefresh;
@property(nonatomic) _Bool useCustomPullRefresh;
@property(nonatomic) _Bool isUsePullRefresh;
- (id)getTopArrowTxtColor;
- (id)getPullRefreshFontSize;
- (void)reload;
- (void)runLoadWAPage;
- (float)getArrowWidth;
- (float)getArrowHeight;
- (id)getArrowImage;
- (id)getBackgroundColor;
@property(nonatomic) _Bool useToolBarFirstLeftBtn;
@property(nonatomic) _Bool useToolBarOnlyError;
@property(nonatomic) _Bool isUseToolBar;
- (void)stopInfinitScrollAnimation;
- (id)getStopLoadBtnImage;
- (id)getRefreshBtnImage;
- (id)getGoForwardBtnImage;
- (id)getGoBackBtnImage;
- (id)getFastTargetBtnImage;
- (id)getToolBarBackgroundImage;
- (float)getToolBarHeight;
- (id)webview;
- (void)showAlert:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)hiddenLoadingBox;
- (void)showLoadingBoxWithTitle:(id)arg1;
- (void)showLoadingBox;
- (void)setIsShowLoadingBox:(_Bool)arg1;
- (void)removeErrorView;
- (void)showErrorView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)stopLoadingPage;
- (void)startLoadingPage;
- (void)canShowErrorView:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configToolbarStyle;
- (void)configPullToRefreshStyle;
- (void)configPullToRefresh;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
- (void)autoHideToolbar:(struct CGPoint)arg1;
- (void)showToolBar;
- (void)hiddenToolBar;
- (void)goFirstClicked;
- (void)updateToolbarItemStatus;
- (void)setToolbarRefreshButtonEnabled:(_Bool)arg1;
- (void)setToolbarStopButtonEnabled:(_Bool)arg1;
- (void)setToolbarForwardButtonEnabled:(_Bool)arg1;
- (void)setToolbarBackButtonEnabled:(_Bool)arg1;
- (void)autoFitToolbar;
@property(readonly, nonatomic) WVWebViewToolbar *toolbar;
- (void)updateStatusBarView;
- (void)supportiOS7WithoutStatusBar;
- (void)autoFitWebView;
- (void)webViewRefresh;
- (void)webViewStopLoading;
- (void)webViewGoForward;
- (void)webViewGoBack;
@property(readonly, nonatomic) __weak UIScrollView *webViewScrollView;
- (id)webView;
- (_Bool)decideIsUseWKWebView;
@property(retain, nonatomic) NSString *loadUrl;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

