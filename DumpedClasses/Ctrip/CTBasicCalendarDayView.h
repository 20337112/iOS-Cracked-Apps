//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCalendarDayView.h"

@class NSLayoutConstraint, UIColor, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;

@interface CTBasicCalendarDayView : CTCalendarDayView
{
    UILabel *_mainTitleLabel;
    UILabel *_firstSubTitleLabel;
    UILabel *_secondSubTitleLabel;
    UIImageView *_flagImageView;
    UIImageView *_imageView;
    UIView *_gestureView;
    unsigned long long _state;
    UIColor *_titleNormalColor;
    UIColor *_titleHighlightColor;
    UIColor *_titleDisabledColor;
    UIColor *_titleHolidayColor;
    UIColor *_firstTitleNormalColor;
    UIColor *_firstTitleHighlightColor;
    UIColor *_secondTitleNormalColor;
    UIColor *_secondTitleHighlightColor;
    NSLayoutConstraint *_firstTitleLabelConstraintTop;
    NSLayoutConstraint *_secondTitleLabelConstraintTop;
    UILongPressGestureRecognizer *_longPress;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(nonatomic) __weak NSLayoutConstraint *secondTitleLabelConstraintTop; // @synthesize secondTitleLabelConstraintTop=_secondTitleLabelConstraintTop;
@property(nonatomic) __weak NSLayoutConstraint *firstTitleLabelConstraintTop; // @synthesize firstTitleLabelConstraintTop=_firstTitleLabelConstraintTop;
@property(retain, nonatomic) UIColor *secondTitleHighlightColor; // @synthesize secondTitleHighlightColor=_secondTitleHighlightColor;
@property(retain, nonatomic) UIColor *secondTitleNormalColor; // @synthesize secondTitleNormalColor=_secondTitleNormalColor;
@property(retain, nonatomic) UIColor *firstTitleHighlightColor; // @synthesize firstTitleHighlightColor=_firstTitleHighlightColor;
@property(retain, nonatomic) UIColor *firstTitleNormalColor; // @synthesize firstTitleNormalColor=_firstTitleNormalColor;
@property(retain, nonatomic) UIColor *titleHolidayColor; // @synthesize titleHolidayColor=_titleHolidayColor;
@property(retain, nonatomic) UIColor *titleDisabledColor; // @synthesize titleDisabledColor=_titleDisabledColor;
@property(retain, nonatomic) UIColor *titleHighlightColor; // @synthesize titleHighlightColor=_titleHighlightColor;
@property(retain, nonatomic) UIColor *titleNormalColor; // @synthesize titleNormalColor=_titleNormalColor;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIImageView *flagImageView; // @synthesize flagImageView=_flagImageView;
@property(nonatomic) __weak UILabel *secondSubTitleLabel; // @synthesize secondSubTitleLabel=_secondSubTitleLabel;
@property(nonatomic) __weak UILabel *firstSubTitleLabel; // @synthesize firstSubTitleLabel=_firstSubTitleLabel;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showBubbleView;
- (void)longPressed:(id)arg1;
- (void)setUIForState:(unsigned long long)arg1;
- (void)setup;
- (void)awakeFromNib;

@end

