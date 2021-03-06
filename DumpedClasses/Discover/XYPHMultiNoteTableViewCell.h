//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHExporeBaseTableViewCell.h"

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface XYPHMultiNoteTableViewCell : XYPHExporeBaseTableViewCell
{
    NSLayoutConstraint *hashTagContainerZeroHeightConstraint;
    UIImageView *_noteImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    NSArray *_hashTagsButton;
    UIView *_hashTagContainerView;
}

+ (double)estimatedHeight;
@property(retain, nonatomic) UIView *hashTagContainerView; // @synthesize hashTagContainerView=_hashTagContainerView;
@property(retain, nonatomic) NSArray *hashTagsButton; // @synthesize hashTagsButton=_hashTagsButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *noteImageView; // @synthesize noteImageView=_noteImageView;
- (void).cxx_destruct;
- (void)hashTagButtonTouchUpInside:(id)arg1;
- (id)getHashTagButton;
- (void)config:(id)arg1;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

