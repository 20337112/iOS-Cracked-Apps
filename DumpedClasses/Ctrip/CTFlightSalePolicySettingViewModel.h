//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class CTFlightSalePolicyViewModel, NSArray;

@interface CTFlightSalePolicySettingViewModel : CTViewModel
{
    NSArray *_policySettings;
    CTFlightSalePolicyViewModel *_salePolicy;
}

@property(retain, nonatomic) CTFlightSalePolicyViewModel *salePolicy; // @synthesize salePolicy=_salePolicy;
@property(retain, nonatomic) NSArray *policySettings; // @synthesize policySettings=_policySettings;
- (void).cxx_destruct;
- (_Bool)needPolicyLimitedCheckForAge:(int)arg1 maximumAge:(int)arg2 passenger:(id)arg3 departDate:(id)arg4 pageSource:(int)arg5;
- (_Bool)needPolicyLimitedCheckForBookCount:(int)arg1 passenger:(id)arg2 departDate:(id)arg3 pageSource:(int)arg4;
- (long long)getPolicyLimitPassengerCount:(id)arg1 departDate:(id)arg2 pageSource:(int)arg3;
- (_Bool)needPolicyLimitedCheckForPersonCount:(id)arg1 departDate:(id)arg2 pageSource:(int)arg3;
- (_Bool)needPolicyLimitedCheckForCertType:(int)arg1 passenger:(id)arg2 departDate:(id)arg3 pageSource:(int)arg4;
- (long long)bookTypeWithPassenger:(id)arg1 departDate:(id)arg2 ageSource:(int)arg3;
- (void)setPolicySettingsWithArray:(id)arg1 salePolicy:(id)arg2;

@end

