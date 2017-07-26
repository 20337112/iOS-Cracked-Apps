//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightImageView, NSLayoutConstraint, UILabel, UIView;

@interface CTFlightHighReturnCell : UITableViewCell
{
    UIView *_bgView;
    UIView *_tagView;
    UILabel *_descLabel;
    CTFlightImageView *_logoImageView;
    CTFlightImageView *_tagImageView;
    NSLayoutConstraint *_tagViewCons_Width;
    NSLayoutConstraint *_tagViewCons_Height;
    NSLayoutConstraint *_logoImageVIewCons_Width;
    NSLayoutConstraint *_desLabelCons_Left;
    NSLayoutConstraint *_tagImageViewCons_Width;
    NSLayoutConstraint *_tagImageViewCons_Height;
}

+ (id)formatStyleWithText:(id)arg1;
+ (double)setupCellDataWithAreaType:(int)arg1 tagDetailModel:(id)arg2 toCell:(id)arg3;
@property(retain, nonatomic) NSLayoutConstraint *tagImageViewCons_Height; // @synthesize tagImageViewCons_Height=_tagImageViewCons_Height;
@property(retain, nonatomic) NSLayoutConstraint *tagImageViewCons_Width; // @synthesize tagImageViewCons_Width=_tagImageViewCons_Width;
@property(retain, nonatomic) NSLayoutConstraint *desLabelCons_Left; // @synthesize desLabelCons_Left=_desLabelCons_Left;
@property(retain, nonatomic) NSLayoutConstraint *logoImageVIewCons_Width; // @synthesize logoImageVIewCons_Width=_logoImageVIewCons_Width;
@property(retain, nonatomic) NSLayoutConstraint *tagViewCons_Height; // @synthesize tagViewCons_Height=_tagViewCons_Height;
@property(retain, nonatomic) NSLayoutConstraint *tagViewCons_Width; // @synthesize tagViewCons_Width=_tagViewCons_Width;
@property(retain, nonatomic) CTFlightImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) CTFlightImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

