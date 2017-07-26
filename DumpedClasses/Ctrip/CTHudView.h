//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIActivityIndicatorView, UIButton, UILabel;

@interface CTHudView : UIControl
{
    UILabel *textLabel;
    UIActivityIndicatorView *actview;
    long long styles;
    double offsetY;
    UIButton *_closeButton;
}

+ (id)showHudViewInWindowWithText:(id)arg1 style:(long long)arg2 offsetY:(double)arg3;
@property(readonly, nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) double offsetY; // @synthesize offsetY;
@property(retain, nonatomic) UIActivityIndicatorView *actview; // @synthesize actview;
- (void).cxx_destruct;
- (void)hideHudview;
- (void)setTimeOut:(double)arg1;
- (void)setText:(id)arg1;
- (void)layoutSize;
- (id)initWithText:(id)arg1 style:(long long)arg2;
- (void)destorySelf;
- (id)initWithLargeIndicator:(struct CGRect)arg1 text:(id)arg2 style:(long long)arg3;

@end

