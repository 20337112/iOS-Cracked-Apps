//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView, UILabel;

@interface CTFlightOrderXPackagePickItemView : UIControl
{
    _Bool _isSelected;
    unsigned long long _subIndex;
    UILabel *_labelCurrency;
    UILabel *_labelPrice;
    UILabel *_labelName;
    UIImageView *_imageViewBackground;
}

@property(retain, nonatomic) UIImageView *imageViewBackground; // @synthesize imageViewBackground=_imageViewBackground;
@property(retain, nonatomic) UILabel *labelName; // @synthesize labelName=_labelName;
@property(retain, nonatomic) UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(retain, nonatomic) UILabel *labelCurrency; // @synthesize labelCurrency=_labelCurrency;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) unsigned long long subIndex; // @synthesize subIndex=_subIndex;
- (void).cxx_destruct;
- (void)setupWithDisplaySubViewModel:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

