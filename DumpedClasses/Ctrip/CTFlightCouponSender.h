//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTFlightCouponSender : CTSender
{
}

+ (id)getInstance;
- (id)sendCheckAdditionalCoupon:(id)arg1 index:(int)arg2 uuid:(id)arg3 policyId:(id)arg4 result:(id)arg5 isInter:(_Bool)arg6 sourceType:(int)arg7;
- (id)sendGetAdditionalCouponListSearchWithCouponInfoModel:(id)arg1 tripType:(int)arg2 productID:(id)arg3 policyID:(id)arg4 flightType:(int)arg5 sourceType:(int)arg6 result:(id)arg7 uuid:(id)arg8;

@end
