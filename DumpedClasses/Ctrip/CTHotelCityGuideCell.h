//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class CTWebImageView, UILabel;

@interface CTHotelCityGuideCell : CTHotelBaseCell
{
    CTWebImageView *_imageview;
    UILabel *_txtLabel;
}

+ (double)getCellHeight;
@property(retain, nonatomic) UILabel *txtLabel; // @synthesize txtLabel=_txtLabel;
@property(retain, nonatomic) CTWebImageView *imageview; // @synthesize imageview=_imageview;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)initView;

@end

