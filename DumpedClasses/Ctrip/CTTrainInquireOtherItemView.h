//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTImageView, CTTrainMenuItem, NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface CTTrainInquireOtherItemView : UIView
{
    _Bool _haveTag;
    double _animateWait;
    UIView *_tagView;
    id <CTTrainInquireOtherItemViewDelegate> _delegate;
    UILabel *_labelTitle;
    CTImageView *_imageIcon;
    UILabel *_labelTag;
    NSLayoutConstraint *_tagWidthConstraint;
    UIImageView *_imageTag;
    CTTrainMenuItem *_menuItem;
    UIColor *_normalColor;
}

@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) CTTrainMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) __weak UIImageView *imageTag; // @synthesize imageTag=_imageTag;
@property(retain, nonatomic) NSLayoutConstraint *tagWidthConstraint; // @synthesize tagWidthConstraint=_tagWidthConstraint;
@property(retain, nonatomic) UILabel *labelTag; // @synthesize labelTag=_labelTag;
@property(retain, nonatomic) CTImageView *imageIcon; // @synthesize imageIcon=_imageIcon;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(nonatomic) __weak id <CTTrainInquireOtherItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) _Bool haveTag; // @synthesize haveTag=_haveTag;
@property(nonatomic) double animateWait; // @synthesize animateWait=_animateWait;
- (void).cxx_destruct;
- (void)Tap:(id)arg1;
- (void)touchCancel:(id)arg1;
- (void)touchHighlight:(id)arg1;
- (void)setupTagText:(id)arg1;
- (void)hideTag:(id)arg1;
- (void)showTag:(id)arg1;
- (void)setupOtherContentWithMenuItem:(id)arg1;
- (id)initViewWithFrame:(struct CGRect)arg1;

@end
