//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelAdapterManager.h"

@class CTHotelCommentsSubmitCacheBean;

@interface CTHotelCommentsSubmitAdapterManager : CTHotelAdapterManager
{
    long long _contentAdapterIndex;
    CTHotelCommentsSubmitCacheBean *_mCacheBean;
}

@property(nonatomic) __weak CTHotelCommentsSubmitCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
@property(readonly, nonatomic) long long contentAdapterIndex; // @synthesize contentAdapterIndex=_contentAdapterIndex;
- (void).cxx_destruct;
- (void)initAdapters;
- (id)initWithCacheBean:(id)arg1 andTableView:(id)arg2;

@end

