//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface CTFlightListMessageBar : UIView
{
    UIView *_viewBG;
    UILabel *_labelGo;
    UILabel *_labelMessage;
    UIButton *_clickBtn;
    UIImageView *_iconArrow;
}

@property(nonatomic) __weak UIImageView *iconArrow; // @synthesize iconArrow=_iconArrow;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(nonatomic) __weak UILabel *labelMessage; // @synthesize labelMessage=_labelMessage;
@property(nonatomic) __weak UILabel *labelGo; // @synthesize labelGo=_labelGo;
@property(nonatomic) __weak UIView *viewBG; // @synthesize viewBG=_viewBG;
- (void).cxx_destruct;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

