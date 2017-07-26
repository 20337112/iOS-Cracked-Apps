//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestPackagesCollectionCell.h"

@class SchedulePoiDetailModel, UILabel, UIView;

@interface CTDestPackagesPoiCell : CTDestPackagesCollectionCell
{
    UIView *_poiView;
    UILabel *_poiIndexLabel;
    UILabel *_poiNameBtn;
    UILabel *_distanceLabel;
    SchedulePoiDetailModel *_model;
}

@property(retain, nonatomic) SchedulePoiDetailModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *poiNameBtn; // @synthesize poiNameBtn=_poiNameBtn;
@property(retain, nonatomic) UILabel *poiIndexLabel; // @synthesize poiIndexLabel=_poiIndexLabel;
@property(retain, nonatomic) UIView *poiView; // @synthesize poiView=_poiView;
- (void).cxx_destruct;
- (void)touchPoiCell;
- (void)fillData:(long long)arg1 poi:(id)arg2 distance:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

