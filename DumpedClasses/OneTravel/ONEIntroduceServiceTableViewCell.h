//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ONETabBarItemModel, UIImageView, UILabel, UIView;

@interface ONEIntroduceServiceTableViewCell : UITableViewCell
{
    ONETabBarItemModel *_item;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconImageView;
    UIImageView *_indicatorImageView;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *indicatorImageView; // @synthesize indicatorImageView=_indicatorImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ONETabBarItemModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)ONE_LocalizedStr:(id)arg1;
- (id)iconImageWithBusinessID:(id)arg1;
- (id)detailStringWithBusinessID:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)setupView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

