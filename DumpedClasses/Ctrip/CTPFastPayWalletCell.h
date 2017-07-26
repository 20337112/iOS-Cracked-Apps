//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTPFastCell.h"

@class CTCoreTextLabel, CTVectorImageView, NSString, PriceType, UILabel;

@interface CTPFastPayWalletCell : CTPFastCell
{
    _Bool _isMoneySelected;
    _Bool _selectAvailable;
    NSString *_cellTitle;
    PriceType *_totalMoney;
    PriceType *_selectedMoney;
    long long _statusType;
    long long _cellType;
    UILabel *_labelTitle;
    UILabel *_labelSubTitle;
    UILabel *_labelUnavailable;
    CTVectorImageView *_selectImageView;
    CTCoreTextLabel *_lableSelectMoney;
}

@property(retain, nonatomic) CTCoreTextLabel *lableSelectMoney; // @synthesize lableSelectMoney=_lableSelectMoney;
@property(retain, nonatomic) CTVectorImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UILabel *labelUnavailable; // @synthesize labelUnavailable=_labelUnavailable;
@property(retain, nonatomic) UILabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool selectAvailable; // @synthesize selectAvailable=_selectAvailable;
@property(nonatomic) _Bool isMoneySelected; // @synthesize isMoneySelected=_isMoneySelected;
@property(nonatomic) long long statusType; // @synthesize statusType=_statusType;
@property(retain, nonatomic) PriceType *selectedMoney; // @synthesize selectedMoney=_selectedMoney;
@property(retain, nonatomic) PriceType *totalMoney; // @synthesize totalMoney=_totalMoney;
@property(copy, nonatomic) NSString *cellTitle; // @synthesize cellTitle=_cellTitle;
- (void).cxx_destruct;
- (void)showCheckImageView:(_Bool)arg1 color:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

