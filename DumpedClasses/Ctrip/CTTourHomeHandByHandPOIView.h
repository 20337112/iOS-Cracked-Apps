//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTTourHomeHandByHandRouteLinePOIInfo, UIButton, UILabel;

@interface CTTourHomeHandByHandPOIView : UIView
{
    long long _index;
    CTTourHomeHandByHandRouteLinePOIInfo *_poiInfo;
    UILabel *_poiNameLabel;
    UILabel *_poiTopInfoLabel;
    UIButton *_poiButton;
}

@property(retain, nonatomic) UIButton *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) UILabel *poiTopInfoLabel; // @synthesize poiTopInfoLabel=_poiTopInfoLabel;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(retain, nonatomic) CTTourHomeHandByHandRouteLinePOIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)updateWithPoiInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2;

@end

