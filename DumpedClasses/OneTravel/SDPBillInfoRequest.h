//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDPBaseRequest.h"

@interface SDPBillInfoRequest : SDPBaseRequest
{
}

+ (id)requestWithBizContent:(id)arg1 sign:(id)arg2 signType:(id)arg3;
+ (id)requestWithOutTradeID:(id)arg1 outToken:(id)arg2;
+ (id)oknet_adapterWithBizContent:(id)arg1 sign:(id)arg2 signType:(id)arg3;
+ (id)oknet_adapterWithOutTradeID:(id)arg1 outToken:(id)arg2;
- (id)pathName;
- (id)responseModelWithData:(id)arg1;

@end

