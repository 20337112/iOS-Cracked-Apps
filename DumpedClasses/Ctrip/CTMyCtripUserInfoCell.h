//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UITextField, UIView;

@interface CTMyCtripUserInfoCell : CTCustomeGroupTableViewCell
{
    UILabel *_leftTitleLbl;
    UIImageView *_rightCarrierLeftImgView;
    NSLayoutConstraint *_rightCarrierRightContentLblY;
    NSLayoutConstraint *_rightCarrierRightContentLblW;
    NSLayoutConstraint *_rightCarrierRightContentLblH;
    UILabel *_rightCarrierRightContentBindLbl;
    UITextField *_rightCarrierRightContentLbl;
    UIImageView *_background;
    UIView *_containerView;
}

@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIImageView *background; // @synthesize background=_background;
@property(nonatomic) __weak UITextField *rightCarrierRightContentLbl; // @synthesize rightCarrierRightContentLbl=_rightCarrierRightContentLbl;
@property(nonatomic) __weak UILabel *rightCarrierRightContentBindLbl; // @synthesize rightCarrierRightContentBindLbl=_rightCarrierRightContentBindLbl;
@property(nonatomic) __weak NSLayoutConstraint *rightCarrierRightContentLblH; // @synthesize rightCarrierRightContentLblH=_rightCarrierRightContentLblH;
@property(nonatomic) __weak NSLayoutConstraint *rightCarrierRightContentLblW; // @synthesize rightCarrierRightContentLblW=_rightCarrierRightContentLblW;
@property(nonatomic) __weak NSLayoutConstraint *rightCarrierRightContentLblY; // @synthesize rightCarrierRightContentLblY=_rightCarrierRightContentLblY;
@property(nonatomic) __weak UIImageView *rightCarrierLeftImgView; // @synthesize rightCarrierLeftImgView=_rightCarrierLeftImgView;
@property(nonatomic) __weak UILabel *leftTitleLbl; // @synthesize leftTitleLbl=_leftTitleLbl;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

