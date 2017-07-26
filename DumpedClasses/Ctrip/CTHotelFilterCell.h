//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class CTHotelDetailCacheBean, CTHotelRoomTopView;

@interface CTHotelFilterCell : CTHotelBaseCell
{
    _Bool _isAdded;
    CTHotelRoomTopView *_filterView;
    CTHotelDetailCacheBean *_detailCacheBean;
}

+ (double)getCellHeight:(_Bool)arg1;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(nonatomic) __weak CTHotelDetailCacheBean *detailCacheBean; // @synthesize detailCacheBean=_detailCacheBean;
@property(retain, nonatomic) CTHotelRoomTopView *filterView; // @synthesize filterView=_filterView;
- (void).cxx_destruct;
- (void)setLoadingStatus:(long long)arg1;
- (void)setHasFilters:(_Bool)arg1;
- (void)resetFilterStatus;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewBackToParent:(_Bool)arg1 superview:(id)arg2;
- (void)initView;

@end

