//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QQWalletGestureServiceManager, UIViewController, VACDataReport;

@interface C6a4891c965ff1414 : NSObject
{
    double _recordTime;
    VACDataReport *_report;
    int _retry;
    NSString *_readUin;
    int _checkInterval;
    int _passInterval;
    double _cleanTime;
    _Bool _hasPwdUpdate;
    NSString *_walletPassWord;
    NSString *_walletPassWordSet;
    NSString *_walletTouchIDSet;
    UIViewController *_protectedVC;
    QQWalletGestureServiceManager *_serverMgr;
}

+ (void)checkPasswordWith:(id)arg1 rootVC:(id)arg2;
+ (void)setPwdTipLab:(id)arg1 defaultText:(id)arg2;
+ (void)removeWrongTimesAfterTenMinutes;
+ (void)removeLocalCheckPwdInfo;
+ (id)encryptPassword:(id)arg1 type:(long long)arg2;
+ (_Bool)isOverCoolDown;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareManager;
@property(retain, nonatomic) QQWalletGestureServiceManager *serverMgr; // @synthesize serverMgr=_serverMgr;
@property(nonatomic) _Bool hasPwdUpdate; // @synthesize hasPwdUpdate=_hasPwdUpdate;
@property(retain, nonatomic) UIViewController *protectedVC; // @synthesize protectedVC=_protectedVC;
@property(copy, nonatomic) NSString *walletTouchIDSet; // @synthesize walletTouchIDSet=_walletTouchIDSet;
@property(copy, nonatomic) NSString *walletPassWordSet; // @synthesize walletPassWordSet=_walletPassWordSet;
@property(copy, nonatomic) NSString *walletPassWord; // @synthesize walletPassWord=_walletPassWord;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (_Bool)shouldShowWalletPwd;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)requestWalletPassword;
- (_Bool)hasPassInterval;
- (void)readKeychainData;
- (void)cleanRetry;
- (void)removeDataReport;
- (id)dataReport;
- (void)createReport;
- (_Bool)isFirstLogin;
- (void)cleanTime;
- (void)recordTime;
- (_Bool)isValidTimeFromBackground:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSArray *vcNames;
- (id)init;

@end
