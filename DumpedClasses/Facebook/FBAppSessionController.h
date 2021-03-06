//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAppSessionController-Protocol.h"
#import "FBViewerContextClassProvidable-Protocol.h"

@class FBAppConfigService, FBAppServiceController, FBExceptionHandler, FBExperimentManager, FBLocationServicesRegistrar, FBLogoutAlert, FBNetworkIdleDetector_DEPRECATED, FBProviderMapData, FBPushRegistrar, FBUserSession, NSDictionary, NSNotificationCenter, NSString, NSUserDefaults, UIApplication, UIApplicationShortcutItem, UIViewController, UIWindow;
@protocol FBAppSessionControllerDelegate, FBApplicationViewCoordinatorProtocol, FBNavigationCoordinator, FBNavigation_DEPRECATED_DO_NOT_USE, FBNetworkDispatch, FBPushHandler;

@interface FBAppSessionController : NSObject <FBAppSessionController, FBViewerContextClassProvidable>
{
    FBPushRegistrar *_pushRegistrar;
    FBProviderMapData *_providerMapData;
    NSUserDefaults *_userDefaults;
    NSNotificationCenter *_notificationCenter;
    UIApplication *_application;
    FBExperimentManager *_experimentManager;
    FBLocationServicesRegistrar *_locationServicesRegistrar;
    struct FBDeferredOpenURLAction _deferredOpenURLAction;
    FBLogoutAlert *_logoutAlert;
    UIViewController *_logoutConfirmationActionSheet;
    id _requesterInvalidTokenObserver;
    _Bool _isForegrounded;
    _Bool _presentingLogoutUI;
    _Bool _resumeStartupInForeground;
    FBExceptionHandler *_exceptionHandler;
    FBAppConfigService *_configService;
    id <FBNetworkDispatch> _requesterConfiguration;
    UIApplicationShortcutItem *_shortcutItem;
    _Bool _canHandlePushNotifications;
    int _state;
    id <FBAppSessionControllerDelegate> _delegate;
    id <FBPushHandler> _pushHandler;
    id <FBApplicationViewCoordinatorProtocol> _applicationViewCoordinator;
    UIWindow *_rootWindow;
    NSDictionary *_launchData;
    FBAppServiceController *_appServiceController;
    FBNetworkIdleDetector_DEPRECATED *_idleDetector;
    FBNetworkIdleDetector_DEPRECATED *_foregroundIdleDetector;
    FBNetworkIdleDetector_DEPRECATED *_foregroundDelayIdleDetector;
    id _appForegroundObserver;
    id _appBackgroundObserver;
    FBUserSession *_session;
}

@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id appBackgroundObserver; // @synthesize appBackgroundObserver=_appBackgroundObserver;
@property(retain, nonatomic) id appForegroundObserver; // @synthesize appForegroundObserver=_appForegroundObserver;
@property(retain, nonatomic) FBNetworkIdleDetector_DEPRECATED *foregroundDelayIdleDetector; // @synthesize foregroundDelayIdleDetector=_foregroundDelayIdleDetector;
@property(retain, nonatomic) FBNetworkIdleDetector_DEPRECATED *foregroundIdleDetector; // @synthesize foregroundIdleDetector=_foregroundIdleDetector;
@property(retain, nonatomic) FBNetworkIdleDetector_DEPRECATED *idleDetector; // @synthesize idleDetector=_idleDetector;
@property(retain, nonatomic) FBLogoutAlert *logoutAlert; // @synthesize logoutAlert=_logoutAlert;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) FBAppServiceController *appServiceController; // @synthesize appServiceController=_appServiceController;
@property(nonatomic) _Bool canHandlePushNotifications; // @synthesize canHandlePushNotifications=_canHandlePushNotifications;
@property(copy, nonatomic) NSDictionary *launchData; // @synthesize launchData=_launchData;
@property(retain, nonatomic) UIWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
@property(retain, nonatomic) id <FBApplicationViewCoordinatorProtocol> applicationViewCoordinator; // @synthesize applicationViewCoordinator=_applicationViewCoordinator;
@property(retain, nonatomic) id <FBPushHandler> pushHandler; // @synthesize pushHandler=_pushHandler;
@property(nonatomic) __weak id <FBAppSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_isValidForceLogoutAttempt;
- (void)showLogoutAlertAndPresentLogoutUIUsingAlertWithTitle:(id)arg1 message:(id)arg2 reason:(id)arg3;
- (void)showLogoutAlertAndPresentLogoutUI;
- (void)presentLogoutUIWithReason:(id)arg1;
- (void)_dismissLogoutConfirmationActionSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLogoutConfirmationWithSuccessBlock:(CDUnknownBlockType)arg1;
- (id)_logoutMessageTitleString;
- (void)_onLogoutDidCompleteWithShowingSpinner:(_Bool)arg1;
- (void)_removeAppStateObservers;
- (void)_onApplicationForegroundIdle;
- (void)_onApplicationForegroundDelayIdle;
- (void)_onApplicationForeground;
- (void)_onApplicationWillForegroundOnStartup;
- (void)_onBackgroundNotification;
- (void)_handleInvalidAccessToken:(id)arg1;
- (void)_setupNotificationCenterObservers;
- (void)beginSessionInBackground:(_Bool)arg1;
- (void)_setupIdleDetector:(double)arg1;
- (void)_updateExperiments;
- (void)_setupAppControllers;
- (void)onValidAccessTokenForeground;
- (id)rootIntentHandler;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator;
@property(readonly, nonatomic) __weak id <FBNavigation_DEPRECATED_DO_NOT_USE> navigation;
- (void)continueUserActivity:(id)arg1;
- (void)performActionForShortcutItem:(id)arg1;
- (_Bool)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)presentSessionUIFromLaunch:(_Bool)arg1 forceSessionStoreClear:(_Bool)arg2 showSpinner:(_Bool)arg3;
- (_Bool)shouldMaintainExistingViewControllersOnLogin;
- (void)setupControllerWithAppServiceConfigurations:(id)arg1;
- (void)_stopAppServices;
- (void)configureWithSession:(id)arg1 exceptionHandler:(id)arg2 rootWindow:(id)arg3 requesterConfiguration:(id)arg4;
- (void)dealloc;
- (id)initWithPushRegistrar:(id)arg1 keySource:(id)arg2 providerMapData:(id)arg3 userDefaults:(id)arg4 notificationCenter:(id)arg5 application:(id)arg6;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

