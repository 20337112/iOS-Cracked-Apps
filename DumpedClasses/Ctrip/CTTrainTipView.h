//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class NSString, UIButton, UIColor, UIFont, UILabel;

@interface CTTrainTipView : CTRootView
{
    _Bool _isShowTopLine;
    _Bool _isShowBottomLine;
    _Bool _isClearBackgroudColor;
    NSString *_tipText;
    UIFont *_tipFont;
    long long _textAlignment;
    UIColor *_textColor;
    UILabel *_tipLabel;
    UIButton *_topLineButton;
    UIButton *_bottomLineButton;
    struct UIEdgeInsets _tipEdgeInsets;
}

@property(retain, nonatomic) UIButton *bottomLineButton; // @synthesize bottomLineButton=_bottomLineButton;
@property(retain, nonatomic) UIButton *topLineButton; // @synthesize topLineButton=_topLineButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) _Bool isClearBackgroudColor; // @synthesize isClearBackgroudColor=_isClearBackgroudColor;
@property(retain, nonatomic) UIFont *tipFont; // @synthesize tipFont=_tipFont;
@property(nonatomic) struct UIEdgeInsets tipEdgeInsets; // @synthesize tipEdgeInsets=_tipEdgeInsets;
@property(nonatomic) _Bool isShowBottomLine; // @synthesize isShowBottomLine=_isShowBottomLine;
@property(nonatomic) _Bool isShowTopLine; // @synthesize isShowTopLine=_isShowTopLine;
@property(retain, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
- (void).cxx_destruct;
- (void)configTipViewWithModel:(id)arg1;
- (void)updateButton:(id)arg1 backgroundColor:(id)arg2;
- (double)heightOfTipView;
- (void)enableConstraint;
- (void)disableConstraint;
- (void)initSubView:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

