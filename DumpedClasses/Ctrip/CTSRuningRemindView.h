//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class CTVectorImageView, UILabel, UIView;

@interface CTSRuningRemindView : CTRootView
{
    _Bool isAnimating;
    float _mywidth;
    CTVectorImageView *_remindIcon;
    UILabel *_remindTitle;
    UILabel *_conentLab;
    UIView *_backView;
}

@property(nonatomic) float mywidth; // @synthesize mywidth=_mywidth;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UILabel *conentLab; // @synthesize conentLab=_conentLab;
@property(nonatomic) __weak UILabel *remindTitle; // @synthesize remindTitle=_remindTitle;
@property(nonatomic) __weak CTVectorImageView *remindIcon; // @synthesize remindIcon=_remindIcon;
- (void).cxx_destruct;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)startAnimation:(float)arg1;
- (void)setRuningConent:(id)arg1;
- (void)awakeFromNib;

@end

