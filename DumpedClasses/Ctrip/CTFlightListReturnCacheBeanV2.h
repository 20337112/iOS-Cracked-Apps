//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightListReturnCacheBean.h"

@class CTFlightFilterModel, CTFlightInlandListItemViewModel;

@interface CTFlightListReturnCacheBeanV2 : CTFlightListReturnCacheBean
{
    CTFlightInlandListItemViewModel *_selectGoListItemModel;
    CTFlightFilterModel *_flightGoFilterModel;
}

@property(retain, nonatomic) CTFlightFilterModel *flightGoFilterModel; // @synthesize flightGoFilterModel=_flightGoFilterModel;
@property(retain, nonatomic) CTFlightInlandListItemViewModel *selectGoListItemModel; // @synthesize selectGoListItemModel=_selectGoListItemModel;
- (void).cxx_destruct;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;

@end

