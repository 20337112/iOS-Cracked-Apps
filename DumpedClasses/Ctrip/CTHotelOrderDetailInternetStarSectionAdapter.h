//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelOrderDetailSectionAdapter.h"

#import "CTHotelOrderDetailOpCellDelegate.h"

@class NSString;

@interface CTHotelOrderDetailInternetStarSectionAdapter : CTHotelOrderDetailSectionAdapter <CTHotelOrderDetailOpCellDelegate>
{
}

- (void)netStarClick;
- (double)getCellHeight:(id)arg1;
- (_Bool)needToShow;
- (unsigned long long)getCellCount;
- (id)getCellView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

