//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface HotelRewardEntity : CTBusinessBean
{
    long long _rewardId;
    PriceType *_amount;
    PriceType *_cNYAmount;
    NSString *_currencyCode;
    NSString *_mainText;
    NSString *_subText;
    NSString *_summary;
    NSString *_rewardDate;
}

@property(copy, nonatomic) NSString *rewardDate; // @synthesize rewardDate=_rewardDate;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(copy, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) PriceType *cNYAmount; // @synthesize cNYAmount=_cNYAmount;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
@property(nonatomic) long long rewardId; // @synthesize rewardId=_rewardId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

