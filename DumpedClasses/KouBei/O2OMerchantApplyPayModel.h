//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSDictionary, NSString;

@interface O2OMerchantApplyPayModel : O2OHTTPModel
{
    NSString *_shopId;
    NSString *_itemId;
    NSDictionary *_monitorDic;
}

@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;

@end

