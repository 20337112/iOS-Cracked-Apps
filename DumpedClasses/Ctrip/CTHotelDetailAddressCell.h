//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class CTHotelDetailCacheBean, UILabel;

@interface CTHotelDetailAddressCell : CTHotelBaseCell
{
    UILabel *map;
    UILabel *arrow;
    UILabel *addrLabel;
    UILabel *detailLable;
    CTHotelDetailCacheBean *_cacheBean;
}

+ (double)getCellHeight:(id)arg1;
+ (id)getDetailinfoStr:(id)arg1;
@property(nonatomic) __weak CTHotelDetailCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)initialMapLabel;
- (void)initialAddressLabel;
- (void)copyAddress:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)longPress:(id)arg1;
- (void)initView;

@end

