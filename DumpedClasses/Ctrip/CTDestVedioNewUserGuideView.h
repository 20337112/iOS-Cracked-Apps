//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestPopupMaskView.h"

@class UIImageView, UILabel, UIView;

@interface CTDestVedioNewUserGuideView : CTDestPopupMaskView
{
    UIView *_bgView;
    UILabel *_tipView;
    UIImageView *_triangleImg;
}

@property(retain, nonatomic) UIImageView *triangleImg; // @synthesize triangleImg=_triangleImg;
@property(retain, nonatomic) UILabel *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)showWithEmptyRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)closeView;

@end

