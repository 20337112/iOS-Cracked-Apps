//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightCommonTitleView : UIView
{
    UIView *_contentTitleView;
    UILabel *_labelLeftTitle;
    UILabel *_labelRightTitle;
    UILabel *_labelSubTitle;
    UIImageView *_iconIamgeView;
    NSLayoutConstraint *_contentTitleViewTopCons;
    NSLayoutConstraint *_contentTitleViewWidthCons;
    NSLayoutConstraint *_subTitleLabelWidthCons;
    NSLayoutConstraint *_labelLeftTitleWidthCons;
    NSLayoutConstraint *_labelRightTitleWidthCons;
    NSLayoutConstraint *_iconIamgeViewHeightCons;
}

@property(retain, nonatomic) NSLayoutConstraint *iconIamgeViewHeightCons; // @synthesize iconIamgeViewHeightCons=_iconIamgeViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *labelRightTitleWidthCons; // @synthesize labelRightTitleWidthCons=_labelRightTitleWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *labelLeftTitleWidthCons; // @synthesize labelLeftTitleWidthCons=_labelLeftTitleWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *subTitleLabelWidthCons; // @synthesize subTitleLabelWidthCons=_subTitleLabelWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *contentTitleViewWidthCons; // @synthesize contentTitleViewWidthCons=_contentTitleViewWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *contentTitleViewTopCons; // @synthesize contentTitleViewTopCons=_contentTitleViewTopCons;
@property(retain, nonatomic) UIImageView *iconIamgeView; // @synthesize iconIamgeView=_iconIamgeView;
@property(retain, nonatomic) UILabel *labelSubTitle; // @synthesize labelSubTitle=_labelSubTitle;
@property(retain, nonatomic) UILabel *labelRightTitle; // @synthesize labelRightTitle=_labelRightTitle;
@property(retain, nonatomic) UILabel *labelLeftTitle; // @synthesize labelLeftTitle=_labelLeftTitle;
@property(retain, nonatomic) UIView *contentTitleView; // @synthesize contentTitleView=_contentTitleView;
- (void).cxx_destruct;
- (void)setLeftTitle:(id)arg1 rightTitle:(id)arg2 subTitle:(id)arg3 imageName:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

