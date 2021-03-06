//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXApiDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface WeChatPayHelper : NSObject <WXApiDelegate>
{
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _successBlock;
    NSDictionary *_paramsDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *paramsDict; // @synthesize paramsDict=_paramsDict;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
- (void).cxx_destruct;
- (void)onReq:(id)arg1;
- (void)onResp:(id)arg1;
- (void)whenFailurePay;
- (void)whenSuccessPay;
- (void)sendToPay;
- (void)sendPayWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

