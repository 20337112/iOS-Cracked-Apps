//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasePostInput.h"

@class NSString;

@interface FXSBuyRichLevelModel : FXBasePostInput
{
    long long _richLevel;
    NSString *_richName;
    long long _needMoney;
    long long _returnCoin;
    long long _needCoin;
    NSString *_richIcon;
    NSString *_needCoinSpend;
}

@property(retain, nonatomic) NSString *needCoinSpend; // @synthesize needCoinSpend=_needCoinSpend;
@property(retain, nonatomic) NSString *richIcon; // @synthesize richIcon=_richIcon;
@property(nonatomic) long long needCoin; // @synthesize needCoin=_needCoin;
@property(nonatomic) long long returnCoin; // @synthesize returnCoin=_returnCoin;
@property(nonatomic) long long needMoney; // @synthesize needMoney=_needMoney;
@property(copy, nonatomic) NSString *richName; // @synthesize richName=_richName;
@property(nonatomic) long long richLevel; // @synthesize richLevel=_richLevel;
- (void).cxx_destruct;

@end

