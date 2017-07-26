//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSMutableDictionary, UILabel;

@interface CTHotelTabbarView : UIButton
{
    UILabel *_lbIcon;
    UILabel *_lbTitle;
    NSMutableDictionary *_dicImgs;
    NSMutableDictionary *_dicColors;
    UILabel *__badgeView;
    UILabel *_distanceBadgeView;
}

@property(retain, nonatomic) UILabel *distanceBadgeView; // @synthesize distanceBadgeView=_distanceBadgeView;
@property(retain, nonatomic) UILabel *_badgeView; // @synthesize _badgeView=__badgeView;
- (void).cxx_destruct;
- (void)TouchUpInside;
- (void)TouchDown;
- (void)cth_setDistanceBadge:(_Bool)arg1;
- (void)cth_setBadge:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setFontName:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 NormalbackGroundImg:(id)arg2 HighlightedbackGroundImg:(id)arg3 NormalTitle:(id)arg4 normalFontName:(id)arg5 HighlightedFontName:(id)arg6 normalTextColor:(id)arg7 highlightedTextColor:(id)arg8;
- (void)updateConstraints;

@end

