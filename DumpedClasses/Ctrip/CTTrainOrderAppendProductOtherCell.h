//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTTrainVectorButton, NSLayoutConstraint, TrainAppendProductTypeModel, UIButton, UIImageView, UILabel, UISwitch;

@interface CTTrainOrderAppendProductOtherCell : CTCustomeGroupTableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UISwitch *_acceptSwitchControl;
    CTTrainVectorButton *_infoButton;
    UILabel *_priceLabel;
    NSLayoutConstraint *_priceLabelRightConstraint;
    NSLayoutConstraint *_infoButtonWidthConstraint;
    UIButton *_tagButton;
    NSLayoutConstraint *_tagButtonWidthConstraint;
    id <CTTrainOrderAppendProductOtherCellDelegate> _delegate;
    TrainAppendProductTypeModel *_productTypeModel;
}

@property(retain, nonatomic) TrainAppendProductTypeModel *productTypeModel; // @synthesize productTypeModel=_productTypeModel;
@property(nonatomic) __weak id <CTTrainOrderAppendProductOtherCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSLayoutConstraint *tagButtonWidthConstraint; // @synthesize tagButtonWidthConstraint=_tagButtonWidthConstraint;
@property(nonatomic) __weak UIButton *tagButton; // @synthesize tagButton=_tagButton;
@property(nonatomic) __weak NSLayoutConstraint *infoButtonWidthConstraint; // @synthesize infoButtonWidthConstraint=_infoButtonWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *priceLabelRightConstraint; // @synthesize priceLabelRightConstraint=_priceLabelRightConstraint;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak CTTrainVectorButton *infoButton; // @synthesize infoButton=_infoButton;
@property(nonatomic) __weak UISwitch *acceptSwitchControl; // @synthesize acceptSwitchControl=_acceptSwitchControl;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (double)tagTextWidth:(id)arg1;
- (void)configCell:(id)arg1 passengerCount:(long long)arg2;
- (void)showDetailAction:(id)arg1;
- (void)acceptValueChanged:(id)arg1;
- (void)awakeFromNib;

@end

