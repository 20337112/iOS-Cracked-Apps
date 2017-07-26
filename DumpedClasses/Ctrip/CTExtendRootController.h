//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightRootViewController.h"

#import "CTLoginWidgetDelegate.h"

@class NSMutableDictionary, NSString;

@interface CTExtendRootController : CTFlightRootViewController <CTLoginWidgetDelegate>
{
    id _cacheBean;
    NSMutableDictionary *_mutexServiceTokenDic;
}

+ (id)pageCacheBeanName;
+ (id)createPageCacheBean;
@property(retain, nonatomic) NSMutableDictionary *mutexServiceTokenDic; // @synthesize mutexServiceTokenDic=_mutexServiceTokenDic;
@property(nonatomic) __weak id cacheBean; // @synthesize cacheBean=_cacheBean;
- (void).cxx_destruct;
- (id)ctripCacheBean;
- (void)registerDefaultLoadingWithToken:(id)arg1;
- (void)registerWindowLoadingWithToken:(id)arg1 loadingText:(id)arg2;
- (void)doRequestWithSender:(id)arg1 tokenKey:(id)arg2 showLoading:(_Bool)arg3 showCancel:(_Bool)arg4 showError:(_Bool)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)doRequestPartiallyWithSender:(id)arg1 tokenKey:(id)arg2 showError:(_Bool)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)doRequestPartiallyWithSender:(id)arg1 tokenKey:(id)arg2 success:(CDUnknownBlockType)arg3;
- (void)doRequestSubmitWithSender:(id)arg1 loadingText:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)doRequestSubmitWithSender:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)doRequestEnableCancelWithSender:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)doRequestEnableCancelWithSender:(id)arg1 loadingText:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)collectAction:(id)arg1 listener:(id)arg2;
- (void)collectStandardListener:(id)arg1;
- (void)mainRequestFinished;
- (void)loginResult:(_Bool)arg1;
- (void)afterNoMemberSuccess:(id)arg1;
- (void)afterLoginSuccess:(id)arg1;
- (void)loginForBooking;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

