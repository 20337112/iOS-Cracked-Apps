//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTImageView, NSLayoutConstraint, UILabel;

@interface CTTrainMoreServiceCell : CTCustomeGroupTableViewCell
{
    CTImageView *_imageIcon;
    UILabel *_labelTitle;
    UILabel *_labelTag;
    NSLayoutConstraint *_tagWidth;
}

@property(retain, nonatomic) NSLayoutConstraint *tagWidth; // @synthesize tagWidth=_tagWidth;
@property(retain, nonatomic) UILabel *labelTag; // @synthesize labelTag=_labelTag;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) CTImageView *imageIcon; // @synthesize imageIcon=_imageIcon;
- (void).cxx_destruct;
- (void)setupContentWithMenu:(id)arg1;
- (void)awakeFromNib;

@end

