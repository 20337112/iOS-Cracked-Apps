//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface FMNavigationBarView : UIView
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
    UILabel *_rightLabel;
}

@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)layout;
- (void)bindComponent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
