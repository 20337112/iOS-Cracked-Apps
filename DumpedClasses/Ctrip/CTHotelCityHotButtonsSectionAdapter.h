//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelCityButtonsSectionAdapter.h"

@class HotelNearByTourInfo;

@interface CTHotelCityHotButtonsSectionAdapter : CTHotelCityButtonsSectionAdapter
{
    HotelNearByTourInfo *_nearByInfo;
}

@property(retain, nonatomic) HotelNearByTourInfo *nearByInfo; // @synthesize nearByInfo=_nearByInfo;
- (void).cxx_destruct;
- (double)getCellHeight:(id)arg1;
- (id)getCellView:(id)arg1 withTableView:(id)arg2;
- (unsigned long long)getCellCount;

@end

