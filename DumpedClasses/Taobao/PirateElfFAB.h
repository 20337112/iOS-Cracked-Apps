//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WindVaneUIWbeViewDelegate.h"

@class NSString, PirateElfRuleResult, UIImageView, UILabel, UIView, UIViewController, UIWindow, WVUILoadingBox, WVWebView;

@interface PirateElfFAB : NSObject <WindVaneUIWbeViewDelegate>
{
    PirateElfRuleResult *_rule;
    WVWebView *_webView;
    UIWindow *_window;
    UIView *_closeView;
    UIView *_miniCloseView;
    UIView *_popupLayer;
    UILabel *_descriptionLabel;
    WVUILoadingBox *_loadingBox;
    UIViewController *_currentVC;
    UIImageView *_popupMaskView;
}

+ (void)disappearAll;
+ (id)instanceWithRule:(id)arg1;
@property(retain, nonatomic) UIImageView *popupMaskView; // @synthesize popupMaskView=_popupMaskView;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) WVUILoadingBox *loadingBox; // @synthesize loadingBox=_loadingBox;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *popupLayer; // @synthesize popupLayer=_popupLayer;
@property(retain, nonatomic) UIView *miniCloseView; // @synthesize miniCloseView=_miniCloseView;
@property(retain, nonatomic) UIView *closeView; // @synthesize closeView=_closeView;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) WVWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) PirateElfRuleResult *rule; // @synthesize rule=_rule;
- (void).cxx_destruct;
- (_Bool)checkoutIsLegalDomain:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loginWithCompletion:(CDUnknownBlockType)arg1 cancelation:(CDUnknownBlockType)arg2;
- (void)addFABConstraints:(id)arg1;
- (void)updateLayout;
- (void)closeViewOnClick:(id)arg1;
- (void)clickUserTrackEvent;
- (void)actionNav;
- (void)showPopupLayer:(id)arg1 needLogin:(_Bool)arg2;
- (void)showPopupLayer:(id)arg1 fromJS:(_Bool)arg2;
- (void)actionPop;
- (void)actionDispatch:(id)arg1;
- (void)disappearWithoutLogo;
- (void)disappear;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

