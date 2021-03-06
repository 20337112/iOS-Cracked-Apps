//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LoginProtocol.h"
#import "TBLoginCenterProtocol.h"
#import "aluUIAppearanceDelegate.h"

@class NSArray, NSLock, NSString, TBAutoLoginService, TBSDKThreadSafeMutableArry, aluApplyAsoTokenHandler;

@interface TBLoginCenter : NSObject <TBLoginCenterProtocol, aluUIAppearanceDelegate, LoginProtocol>
{
    _Bool _isLogining;
    _Bool _needLoginView;
    aluApplyAsoTokenHandler *_applyAsoTokenHandler;
    NSLock *_loginLock;
    NSArray *_loginUrls;
    NSArray *_logoutUrls;
    TBAutoLoginService *_autoLoginService;
    TBSDKThreadSafeMutableArry *_completionHandlers;
    TBSDKThreadSafeMutableArry *_cancelationHandlers;
    CDUnknownBlockType _completionHandlerForOtherApps;
    CDUnknownBlockType _cancelationHandlerForOtherApps;
}

+ (id)sharedInstantce;
@property(copy, nonatomic) CDUnknownBlockType cancelationHandlerForOtherApps; // @synthesize cancelationHandlerForOtherApps=_cancelationHandlerForOtherApps;
@property(copy, nonatomic) CDUnknownBlockType completionHandlerForOtherApps; // @synthesize completionHandlerForOtherApps=_completionHandlerForOtherApps;
@property(retain, nonatomic) TBSDKThreadSafeMutableArry *cancelationHandlers; // @synthesize cancelationHandlers=_cancelationHandlers;
@property(retain, nonatomic) TBSDKThreadSafeMutableArry *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) TBAutoLoginService *autoLoginService; // @synthesize autoLoginService=_autoLoginService;
@property _Bool needLoginView; // @synthesize needLoginView=_needLoginView;
@property _Bool isLogining; // @synthesize isLogining=_isLogining;
@property(retain, nonatomic) NSArray *logoutUrls; // @synthesize logoutUrls=_logoutUrls;
@property(retain, nonatomic) NSArray *loginUrls; // @synthesize loginUrls=_loginUrls;
@property(retain) NSLock *loginLock; // @synthesize loginLock=_loginLock;
@property(retain) aluApplyAsoTokenHandler *applyAsoTokenHandler; // @synthesize applyAsoTokenHandler=_applyAsoTokenHandler;
- (void).cxx_destruct;
- (_Bool)judgeURL:(id)arg1 withArray:(id)arg2;
- (_Bool)isLogoutURL:(id)arg1;
- (_Bool)isLoginURL:(id)arg1;
- (void)implantationLocalCookies;
- (void)changeIsLogining:(id)arg1;
- (void)unifytokenLogin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loginBySsoTokenUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getTopViewController;
- (id)getUIWindow;
- (void)retrievePassword:(id)arg1;
- (void)changePhoneNum:(id)arg1;
- (void)bindPhoneNum:(id)arg1;
- (void)modifyPassword:(id)arg1;
- (void)generateLoginTokenForOtherSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didObtainAluSDKLoginNotification:(id)arg1;
- (_Bool)canShowSSOpage;
- (void)openLoginViewForOtherApps;
- (void)authenticationCenterDidCancelProcessing;
- (void)authenticationCenterDidFinishProcessing:(id)arg1;
- (void)makeSessionInvalidLocally;
- (void)storeSessionWithLoginResult:(id)arg1;
- (void)clearSession;
- (void)handleCachedCancelationHandlers;
- (void)handleCachedCompletionHandlersWithFalg:(_Bool)arg1 loginResult:(id)arg2;
- (_Bool)tb_p_isOpenLoginPageAsync;
- (void)doOpenLoginViewForTaobaoWithCompletionHandler:(CDUnknownBlockType)arg1 cancelationHandler:(CDUnknownBlockType)arg2;
- (void)doOpenLoginViewWithCompletionHandler:(CDUnknownBlockType)arg1 cancelationHandler:(CDUnknownBlockType)arg2;
- (void)tryToOpenLoginViewWithCompletionHandler:(CDUnknownBlockType)arg1 cancelationHandler:(CDUnknownBlockType)arg2;
- (void)logout;
- (void)_loginWithLoginOption:(int)arg1 timeout:(int)arg2 extraInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 cancelationHandler:(CDUnknownBlockType)arg5;
- (void)tb_p_cacheHandlerWithCompletionHandler:(CDUnknownBlockType)arg1 cancelationHandler:(CDUnknownBlockType)arg2;
- (void)loginWithLoginOption:(int)arg1 timeout:(int)arg2 extraInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 cancelationHandler:(CDUnknownBlockType)arg5;
- (void)loginWithLoginOption:(int)arg1 timeout:(int)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4;
- (void)loginWithLoginOption:(int)arg1 extraInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4;
- (void)loginWithLoginOption:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelationHandler:(CDUnknownBlockType)arg3;
- (void)doRegister;
- (void)mockEasyLoginCompletionHandler:(CDUnknownBlockType)arg1 useName:(id)arg2 userPwd:(id)arg3;
- (id)currentSession;
- (_Bool)isHavanaSsoTokenValid;
- (void)getHavanaSsoToken:(CDUnknownBlockType)arg1;
- (_Bool)isSidInvalid;
- (_Bool)isValidLogin;
- (_Bool)isProcessingLogin;
- (id)jsonToArray:(id)arg1;
- (void)updateUrls;
- (void)dealloc;
- (void)cuntaoChangeIsLogining;
- (id)init;
- (void)ssoLoginFromWXWithSSOToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

