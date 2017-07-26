//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelRoomSectionAdapter.h"

#import "CTHotelHouseCellClickDelegate.h"

@class NSString;

@interface CTHotelTileRoomTypeSectionAdapter : CTHotelRoomSectionAdapter <CTHotelHouseCellClickDelegate>
{
    _Bool _mHasOpen;
}

@property(nonatomic) _Bool mHasOpen; // @synthesize mHasOpen=_mHasOpen;
- (double)getCellHeight:(id)arg1;
- (void)didCellRecommendTipClick:(id)arg1;
- (void)didRoomBookingClick:(id)arg1;
- (void)didCellClick:(id)arg1 with:(id)arg2;
- (id)getCellView:(id)arg1;
- (_Bool)isOpenMoreCell:(long long)arg1;
- (unsigned long long)getCellCount;
- (id)roomMoreText:(long long)arg1 hotelType:(int)arg2;
- (long long)roomShowCountInTile:(long long)arg1 hotelType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

