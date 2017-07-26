//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIColor, UIImage, UIImageView, UILabel;

@interface CTFlightSkinButton : UIControl
{
    UIImageView *_skinImageView;
    UIImageView *_skinBGImageView;
    UILabel *_skinTitleLabel;
    UIColor *_normalBGColor;
    UIColor *_highlightBGColor;
    UIColor *_normalTitleColor;
    UIColor *_highlightTitleColor;
    UIImage *_normalSkinImage;
    UIImage *_highlightSkinImage;
    UIImage *_normalBGSkinImage;
    UIImage *_highlightBGSkinImage;
}

@property(retain, nonatomic) UIImage *highlightBGSkinImage; // @synthesize highlightBGSkinImage=_highlightBGSkinImage;
@property(retain, nonatomic) UIImage *normalBGSkinImage; // @synthesize normalBGSkinImage=_normalBGSkinImage;
@property(retain, nonatomic) UIImage *highlightSkinImage; // @synthesize highlightSkinImage=_highlightSkinImage;
@property(retain, nonatomic) UIImage *normalSkinImage; // @synthesize normalSkinImage=_normalSkinImage;
@property(retain, nonatomic) UIColor *highlightTitleColor; // @synthesize highlightTitleColor=_highlightTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) UIColor *highlightBGColor; // @synthesize highlightBGColor=_highlightBGColor;
@property(retain, nonatomic) UIColor *normalBGColor; // @synthesize normalBGColor=_normalBGColor;
@property(retain, nonatomic) UILabel *skinTitleLabel; // @synthesize skinTitleLabel=_skinTitleLabel;
@property(retain, nonatomic) UIImageView *skinBGImageView; // @synthesize skinBGImageView=_skinBGImageView;
@property(retain, nonatomic) UIImageView *skinImageView; // @synthesize skinImageView=_skinImageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)initConfig;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

