//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelMainSectionAdapter.h"

@class NSString;

@interface CTHotelMainTodayBeforeSectionAdapter : CTHotelMainSectionAdapter
{
    NSString *_currentCheckinDate;
    NSString *_currentCheckoutDate;
}

@property(retain, nonatomic) NSString *currentCheckoutDate; // @synthesize currentCheckoutDate=_currentCheckoutDate;
@property(retain, nonatomic) NSString *currentCheckinDate; // @synthesize currentCheckinDate=_currentCheckinDate;
- (void).cxx_destruct;
- (double)getCellHeight:(id)arg1;
- (void)didClickType:(long long)arg1;
- (long long)getCurrentDayNight;
- (void)setMCacheBean:(id)arg1;
- (id)getCellView:(id)arg1;

@end

