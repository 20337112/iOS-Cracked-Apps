//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSMutableArray, NSString, TBTradeItemIcons;

@interface TBTradeItemInfoModel : TBTradeComponentModel
{
    NSString *_skuInfo;
    NSMutableArray *_skuLevelInfoArray;
    TBTradeItemIcons *_itemIcons;
}

- (void).cxx_destruct;
- (id)giftIcon;
- (_Bool)isGift;
- (id)activityIcon2;
- (id)activityIcon;
- (id)price;
- (id)itemIcons;
- (id)skuLevelInfoArray;
- (id)skuInfoWithFilter:(_Bool)arg1;
- (id)skuInfo;
- (id)pic;
- (id)title;
- (void)reload:(id)arg1;

@end

