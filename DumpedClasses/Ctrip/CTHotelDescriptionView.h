//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UILabel;

@interface CTHotelDescriptionView : UIView
{
    UILabel *titleLab;
    UILabel *contentLab;
    NSString *_title;
    NSString *_content;
    UIColor *_titleColor;
    UIColor *_contentColor;
    long long _titleFont;
    long long _contentFont;
    double _titleWidth;
}

+ (double)getWidthWithStr:(id)arg1 strFont:(long long)arg2;
+ (double)heightWithStr:(id)arg1 width:(double)arg2 fontSize:(double)arg3;
+ (double)getHeightWithTitle:(id)arg1 content:(id)arg2 titleFont:(long long)arg3 contentFont:(long long)arg4 titleW:(double)arg5 despViewW:(double)arg6;
+ (double)getHeightWithTitle:(id)arg1 content:(id)arg2 titleFont:(long long)arg3 contentFont:(long long)arg4 despViewW:(double)arg5;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(nonatomic) long long contentFont; // @synthesize contentFont=_contentFont;
@property(nonatomic) long long titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

