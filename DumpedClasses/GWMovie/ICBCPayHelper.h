//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ICBCPaySDKDelegate-Protocol.h"

@class NSString;

@interface ICBCPayHelper : NSObject <ICBCPaySDKDelegate>
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)ICBCResultBackWithUrl:(id)arg1;
- (void)paymentEndwithResultDic:(id)arg1;
- (void)presentICBCPaySDKInViewController:(id)arg1 andPayParams:(id)arg2;
- (void)startPayWithViewController:(id)arg1 andPayParams:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)whenFailurePay;
- (void)whenSuccessPay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
