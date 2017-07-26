//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightRadioView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTFlightOrderSuccessTripCell : UITableViewCell
{
    UILabel *_labelCity1;
    UILabel *_labelCity2;
    UILabel *_labelCity3;
    UILabel *_labelPrice;
    UIImageView *_imageViewArrow1;
    NSLayoutConstraint *_arrow1ImageViewWidthConstraint;
    UIImageView *_imageViewArrow2;
    UIView *_viewContent;
    NSLayoutConstraint *_labelCity1WidthConstraint;
    NSLayoutConstraint *_labelCity2WidthConstraint;
    NSLayoutConstraint *_labelCity3WidthConstraint;
    NSLayoutConstraint *_labelCity1HeightConstraint;
    NSLayoutConstraint *_labelPriceWidthConstraint;
    UIView *_bottomLine;
    NSLayoutConstraint *_bottomLineHeightConstraint;
    UILabel *_foreignCardInfoLabel;
    CTFlightRadioView *_bgView;
    UIView *_tempView;
}

+ (double)heightOfSuccessTripCellWithModel:(id)arg1;
@property(nonatomic) __weak UIView *tempView; // @synthesize tempView=_tempView;
@property(nonatomic) __weak CTFlightRadioView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UILabel *foreignCardInfoLabel; // @synthesize foreignCardInfoLabel=_foreignCardInfoLabel;
@property(nonatomic) __weak NSLayoutConstraint *bottomLineHeightConstraint; // @synthesize bottomLineHeightConstraint=_bottomLineHeightConstraint;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak NSLayoutConstraint *labelPriceWidthConstraint; // @synthesize labelPriceWidthConstraint=_labelPriceWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelCity1HeightConstraint; // @synthesize labelCity1HeightConstraint=_labelCity1HeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelCity3WidthConstraint; // @synthesize labelCity3WidthConstraint=_labelCity3WidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelCity2WidthConstraint; // @synthesize labelCity2WidthConstraint=_labelCity2WidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *labelCity1WidthConstraint; // @synthesize labelCity1WidthConstraint=_labelCity1WidthConstraint;
@property(nonatomic) __weak UIView *viewContent; // @synthesize viewContent=_viewContent;
@property(nonatomic) __weak UIImageView *imageViewArrow2; // @synthesize imageViewArrow2=_imageViewArrow2;
@property(nonatomic) __weak NSLayoutConstraint *arrow1ImageViewWidthConstraint; // @synthesize arrow1ImageViewWidthConstraint=_arrow1ImageViewWidthConstraint;
@property(nonatomic) __weak UIImageView *imageViewArrow1; // @synthesize imageViewArrow1=_imageViewArrow1;
@property(nonatomic) __weak UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(nonatomic) __weak UILabel *labelCity3; // @synthesize labelCity3=_labelCity3;
@property(nonatomic) __weak UILabel *labelCity2; // @synthesize labelCity2=_labelCity2;
@property(nonatomic) __weak UILabel *labelCity1; // @synthesize labelCity1=_labelCity1;
- (void).cxx_destruct;
- (id)createDateTimeViewWithFrame:(struct CGRect)arg1 colorBlockStr:(id)arg2 dateInfo:(id)arg3;
- (void)setupSuccessTripCellWithModel:(id)arg1;
- (void)awakeFromNib;

@end

