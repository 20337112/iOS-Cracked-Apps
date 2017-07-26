//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTPayLifeManagerDelegate.h"
#import "PKPaymentAuthorizationViewControllerDelegate.h"

@class CTPayLifeManager, NSString, PKPaymentAuthorizationViewController, PKPaymentRequest;

@interface CTApplePayManager : NSObject <PKPaymentAuthorizationViewControllerDelegate, CTPayLifeManagerDelegate>
{
    id <CTApplePaySendVerifyDelegate> _sendVerifyDelegate;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _unknownCancelBlock;
    PKPaymentRequest *_request;
    PKPaymentAuthorizationViewController *_authController;
    long long _verifyResult;
    long long _handleStatus;
    CTPayLifeManager *_lifeManager;
    NSString *_resultInfo;
}

+ (void)goToWallet;
+ (_Bool)canMakeApplePayAndGoToWallet;
+ (_Bool)canMakeUnionPayments;
+ (_Bool)canMakePaymentsUsingNetworks:(id)arg1;
+ (_Bool)canMakePayments;
@property(copy, nonatomic) NSString *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) CTPayLifeManager *lifeManager; // @synthesize lifeManager=_lifeManager;
@property(nonatomic) long long handleStatus; // @synthesize handleStatus=_handleStatus;
@property(nonatomic) long long verifyResult; // @synthesize verifyResult=_verifyResult;
@property(retain, nonatomic) PKPaymentAuthorizationViewController *authController; // @synthesize authController=_authController;
@property(retain, nonatomic) PKPaymentRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) CDUnknownBlockType unknownCancelBlock; // @synthesize unknownCancelBlock=_unknownCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) __weak id <CTApplePaySendVerifyDelegate> sendVerifyDelegate; // @synthesize sendVerifyDelegate=_sendVerifyDelegate;
- (void).cxx_destruct;
- (void)ctpayApplicationDidBecomeActive;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)payWithInfo:(id)arg1 inViewController:(id)arg2 successAction:(CDUnknownBlockType)arg3 failedAction:(CDUnknownBlockType)arg4 cancelAction:(CDUnknownBlockType)arg5 unknownCancelAction:(CDUnknownBlockType)arg6;
- (void)finishPaySheet:(id)arg1 animated:(_Bool)arg2;
- (void)dismissController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

