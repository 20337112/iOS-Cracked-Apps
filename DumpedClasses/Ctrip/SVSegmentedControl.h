//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSMutableArray, SVSegmentedThumb, UIColor, UIFont, UIImage;

@interface SVSegmentedControl : UIControl
{
    _Bool _animateToInitialSelection;
    _Bool _crossFadeLabelsOnDrag;
    _Bool _mustSlideToChange;
    _Bool _trackingThumb;
    _Bool _moved;
    _Bool _activated;
    CDUnknownBlockType _changeHandler;
    NSArray *_sectionTitles;
    NSArray *_sectionImages;
    unsigned long long _selectedSegmentIndex;
    double _minimumOverlapToChange;
    UIColor *_backgroundTintColor;
    UIImage *_backgroundImage;
    double _height;
    double _cornerRadius;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_textShadowColor;
    UIColor *_innerShadowColor;
    UIColor *_tintColor;
    SVSegmentedThumb *_thumb;
    NSMutableArray *_thumbRects;
    NSMutableArray *_accessibilityElements;
    unsigned long long _snapToIndex;
    double _halfSize;
    double _dragOffset;
    double _segmentWidth;
    double _thumbHeight;
    struct CGSize _textShadowOffset;
    struct UIEdgeInsets _touchTargetMargins;
    struct UIEdgeInsets _thumbEdgeInset;
    struct UIEdgeInsets _titleEdgeInsets;
}

@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(nonatomic) double dragOffset; // @synthesize dragOffset=_dragOffset;
@property(nonatomic) double halfSize; // @synthesize halfSize=_halfSize;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(nonatomic) _Bool moved; // @synthesize moved=_moved;
@property(nonatomic) _Bool trackingThumb; // @synthesize trackingThumb=_trackingThumb;
@property(nonatomic) unsigned long long snapToIndex; // @synthesize snapToIndex=_snapToIndex;
@property(retain, nonatomic) NSMutableArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) NSMutableArray *thumbRects; // @synthesize thumbRects=_thumbRects;
@property(retain, nonatomic) SVSegmentedThumb *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *innerShadowColor; // @synthesize innerShadowColor=_innerShadowColor;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets thumbEdgeInset; // @synthesize thumbEdgeInset=_thumbEdgeInset;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
@property(nonatomic) struct UIEdgeInsets touchTargetMargins; // @synthesize touchTargetMargins=_touchTargetMargins;
@property(nonatomic) double minimumOverlapToChange; // @synthesize minimumOverlapToChange=_minimumOverlapToChange;
@property(nonatomic) _Bool mustSlideToChange; // @synthesize mustSlideToChange=_mustSlideToChange;
@property(nonatomic) _Bool crossFadeLabelsOnDrag; // @synthesize crossFadeLabelsOnDrag=_crossFadeLabelsOnDrag;
@property(nonatomic) _Bool animateToInitialSelection; // @synthesize animateToInitialSelection=_animateToInitialSelection;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(copy, nonatomic) NSArray *sectionImages; // @synthesize sectionImages=_sectionImages;
@property(copy, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void).cxx_destruct;
- (void)drawInnerGlowWithPaths:(id)arg1 bounds:(struct CGRect)arg2 color:(id)arg3 offset:(struct CGSize)arg4 blur:(double)arg5;
- (id)invertedImageWithMask:(id)arg1 color:(id)arg2;
- (id)maskWithPaths:(id)arg1 bounds:(struct CGRect)arg2;
- (id)sectionImage:(id)arg1 withTintColor:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) unsigned long long selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setThumbSecondValuesForIndex:(unsigned long long)arg1;
- (void)setThumbValuesForIndex:(unsigned long long)arg1;
- (id)imageForSectionIndex:(unsigned long long)arg1;
- (void)setSelectedSegmentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)moveThumbToIndex:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)toggle;
- (void)activate;
- (void)crossFadeThumbContent;
- (void)snap:(_Bool)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)willMoveToSuperview:(id)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)calculateSegmentWidth;
- (void)updateSectionRects;
- (void)sizeToFit;
- (id)initWithSectionTitles:(id)arg1;

@end

