//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface CTFlightRadioView : UIView
{
    _Bool _needBottomArrow;
    _Bool _needHideLine;
    int _circleAngleType;
    double _radious;
    UIColor *_fillColor;
    UIColor *_topLineColor;
    UIColor *_bottomLineColor;
}

@property(nonatomic) _Bool needHideLine; // @synthesize needHideLine=_needHideLine;
@property(nonatomic) _Bool needBottomArrow; // @synthesize needBottomArrow=_needBottomArrow;
@property(retain, nonatomic) UIColor *bottomLineColor; // @synthesize bottomLineColor=_bottomLineColor;
@property(retain, nonatomic) UIColor *topLineColor; // @synthesize topLineColor=_topLineColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double radious; // @synthesize radious=_radious;
@property(nonatomic) int circleAngleType; // @synthesize circleAngleType=_circleAngleType;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)initData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

