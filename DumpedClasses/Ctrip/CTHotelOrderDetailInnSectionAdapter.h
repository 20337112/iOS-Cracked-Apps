//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelOrderDetailSectionAdapter.h"

#import "CTHotelOrderDetailHandUrlDelegate.h"

@class NSString;

@interface CTHotelOrderDetailInnSectionAdapter : CTHotelOrderDetailSectionAdapter <CTHotelOrderDetailHandUrlDelegate>
{
}

- (_Bool)needToShow;
- (void)goWebViewWithModel:(id)arg1;
- (void)didCellClick:(id)arg1 with:(id)arg2;
- (double)getCellHeight:(id)arg1;
- (id)getCellView:(id)arg1;
- (double)getHeadHeight:(long long)arg1;
- (unsigned long long)getCellCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

