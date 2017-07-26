//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTDestImageView, CTDestTTDMapItem, UIButton, UIImageView, UILabel;

@interface CTDestTTDMapCardView : UIView
{
    _Bool _isShowPoiNameOnly;
    CTDestTTDMapItem *_item;
    CTDestImageView *_poiPhoto;
    UIImageView *_poiTag;
    UILabel *_poiName;
    UILabel *_poiScore;
    UILabel *_poiCommentCount;
    UILabel *_poiPrice;
    UIImageView *_navigationIcon;
    UILabel *_distance;
    UIButton *_naviButton;
    UILabel *_meiShiLinLabel;
}

@property(retain, nonatomic) UILabel *meiShiLinLabel; // @synthesize meiShiLinLabel=_meiShiLinLabel;
@property(retain, nonatomic) UIButton *naviButton; // @synthesize naviButton=_naviButton;
@property(retain, nonatomic) UILabel *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) UIImageView *navigationIcon; // @synthesize navigationIcon=_navigationIcon;
@property(retain, nonatomic) UILabel *poiPrice; // @synthesize poiPrice=_poiPrice;
@property(retain, nonatomic) UILabel *poiCommentCount; // @synthesize poiCommentCount=_poiCommentCount;
@property(retain, nonatomic) UILabel *poiScore; // @synthesize poiScore=_poiScore;
@property(retain, nonatomic) UILabel *poiName; // @synthesize poiName=_poiName;
@property(retain, nonatomic) UIImageView *poiTag; // @synthesize poiTag=_poiTag;
@property(retain, nonatomic) CTDestImageView *poiPhoto; // @synthesize poiPhoto=_poiPhoto;
@property(nonatomic) _Bool isShowPoiNameOnly; // @synthesize isShowPoiNameOnly=_isShowPoiNameOnly;
@property(retain, nonatomic) CTDestTTDMapItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)showNavigation;
- (void)configWithItem:(id)arg1;
- (void)layoutSubviews;

@end

