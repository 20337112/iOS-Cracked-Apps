//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelSectionAdapter.h"

@class CTHotelDetailCacheBean;

@interface CTHotelCouponHintAdapter : CTHotelSectionAdapter
{
    CTHotelDetailCacheBean *_cacheBean;
}

@property(nonatomic) __weak CTHotelDetailCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
- (void).cxx_destruct;
- (id)getCellView:(id)arg1;
- (double)getCellHeight:(id)arg1;
- (unsigned long long)getCellCount;

@end

