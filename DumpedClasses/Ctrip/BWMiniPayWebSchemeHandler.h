//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BWMiniPayWebViewController, NSDictionary;

@interface BWMiniPayWebSchemeHandler : NSObject
{
    _Bool _paySuccess;
    BWMiniPayWebViewController *_enviromentWebViewController;
    NSDictionary *_resultInfos;
}

@property(retain, nonatomic) NSDictionary *resultInfos; // @synthesize resultInfos=_resultInfos;
@property(nonatomic) __weak BWMiniPayWebViewController *enviromentWebViewController; // @synthesize enviromentWebViewController=_enviromentWebViewController;
@property(readonly, nonatomic) _Bool paySuccess; // @synthesize paySuccess=_paySuccess;
- (void).cxx_destruct;
- (void)notifyDelegate;
- (void)handleNotifySuccessWithInfos:(id)arg1;
- (void)handleCloseViewWithInfo:(id)arg1;
- (_Bool)handleURL:(id)arg1;
- (id)init;

@end

