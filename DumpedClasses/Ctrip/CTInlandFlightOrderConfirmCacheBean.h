//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightOrderConfirmBaseCacheBean.h"

@class CTFlightDetailBaseCacheBean, CTFlightSegmentDetailViewModel;

@interface CTInlandFlightOrderConfirmCacheBean : CTFlightOrderConfirmBaseCacheBean
{
    CTFlightDetailBaseCacheBean *_inlandOrderCacheBean;
    CTFlightSegmentDetailViewModel *_segmentGoModel;
    CTFlightSegmentDetailViewModel *_segmentReturnModel;
}

+ (id)flightSegmentModelWithDetailBaseCacheBean:(id)arg1 useCarSegment:(id)arg2;
@property(retain, nonatomic) CTFlightSegmentDetailViewModel *segmentReturnModel; // @synthesize segmentReturnModel=_segmentReturnModel;
@property(retain, nonatomic) CTFlightSegmentDetailViewModel *segmentGoModel; // @synthesize segmentGoModel=_segmentGoModel;
@property(retain, nonatomic) CTFlightDetailBaseCacheBean *inlandOrderCacheBean; // @synthesize inlandOrderCacheBean=_inlandOrderCacheBean;
- (void).cxx_destruct;
- (id)getFlightSegmentModelWithModel:(id)arg1;
- (id)getPassengerList;
- (unsigned long long)getPersonCount;
- (void)initPassengerData;
- (id)getFlightSegmentInfoStr;

@end

