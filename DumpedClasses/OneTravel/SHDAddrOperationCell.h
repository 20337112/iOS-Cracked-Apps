//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCell.h"

@class SHDAddrCellModel, UILabel, UIView;

@interface SHDAddrOperationCell : ONEOperationCell
{
    UIView *_iconView;
    UILabel *_positionLabel;
    SHDAddrCellModel *_addrModel;
}

@property(retain, nonatomic) SHDAddrCellModel *addrModel; // @synthesize addrModel=_addrModel;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

