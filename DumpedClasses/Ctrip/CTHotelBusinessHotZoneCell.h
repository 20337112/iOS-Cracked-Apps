//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

#import "CTHotelBusinessHotZoneCellDeltegate.h"

@class CTHotelInquireMainCacheBean, NSMutableArray, NSString, UIScrollView;

@interface CTHotelBusinessHotZoneCell : CTHotelBaseCell <CTHotelBusinessHotZoneCellDeltegate>
{
    CTHotelInquireMainCacheBean *_mCacheBean;
    NSMutableArray *_businessHotZoneList;
    UIScrollView *_mScrollView;
    NSString *_businessZoneURL;
    unsigned long long _dataCount;
    NSMutableArray *_hotelBusinessActiveItemList;
}

+ (double)getCellHeight;
@property(retain, nonatomic) NSMutableArray *hotelBusinessActiveItemList; // @synthesize hotelBusinessActiveItemList=_hotelBusinessActiveItemList;
@property(nonatomic) unsigned long long dataCount; // @synthesize dataCount=_dataCount;
@property(retain, nonatomic) NSString *businessZoneURL; // @synthesize businessZoneURL=_businessZoneURL;
@property(retain, nonatomic) UIScrollView *mScrollView; // @synthesize mScrollView=_mScrollView;
@property(retain, nonatomic) NSMutableArray *businessHotZoneList; // @synthesize businessHotZoneList=_businessHotZoneList;
@property(retain, nonatomic) CTHotelInquireMainCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
- (void).cxx_destruct;
- (void)gotoZoneItemClick:(id)arg1;
- (id)jumpHotelBusinessHotZoneList:(id)arg1;
- (void)drawScrollView:(long long)arg1 itemList:(id)arg2;
- (void)resetZonelView;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

