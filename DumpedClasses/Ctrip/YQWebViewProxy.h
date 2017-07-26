//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSMapTable, NSObject<UIWebViewDelegate>, NSString;

@interface YQWebViewProxy : NSObject <UIWebViewDelegate>
{
    NSObject<UIWebViewDelegate> *_realDelegate;
    NSMapTable *_registInterface;
}

@property(retain, nonatomic) NSMapTable *registInterface; // @synthesize registInterface=_registInterface;
- (void).cxx_destruct;
- (void)invoke:(id)arg1 methodSignature:(id)arg2 onWebView:(id)arg3 callBackID:(id)arg4;
- (void)sendResultFrom:(id)arg1 value:(id)arg2 asJSString:(_Bool)arg3 callBack:(id)arg4;
- (id)objectWithQueryString:(id)arg1;
- (void)injectObjectForWebView:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)addJavascriptInterfaces:(id)arg1 WithName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

