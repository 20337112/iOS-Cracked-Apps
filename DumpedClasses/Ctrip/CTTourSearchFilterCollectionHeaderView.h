//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UIButton, UILabel;

@interface CTTourSearchFilterCollectionHeaderView : UICollectionReusableView
{
    NSString *_dateTitle;
    UILabel *_titleLabel;
    UIButton *_leftArrowButton;
    UIButton *_rightArrowButton;
}

@property(retain, nonatomic) UIButton *rightArrowButton; // @synthesize rightArrowButton=_rightArrowButton;
@property(retain, nonatomic) UIButton *leftArrowButton; // @synthesize leftArrowButton=_leftArrowButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *dateTitle; // @synthesize dateTitle=_dateTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

