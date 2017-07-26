//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CTHotelDetailBrowsingHistory : NSObject
{
}

+ (id)history;
@property(readonly, nonatomic) NSArray *browsingHistory;
- (void)cleanAllBrowsingHistory;
- (void)cacheHotelToBrowsingHistory:(id)arg1;
- (void)removeHotelFromBrowsingHistory:(long long)arg1;
- (id)browsingHistoryWithHotelType:(unsigned long long)arg1;
- (id)_sortedBrowsingHistory;
- (id)_browsingHistory;
- (void)_syncPersistentDataWithBrowsingHistory:(id *)arg1 toPersistentData:(_Bool)arg2;

@end

