//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightDetailBaseCacheBean.h"

@class CTFlightDetailViewModel, CTFlightOrderFillMainInfoViewModel;

@interface CTFlightDetailReturnCacheBean : CTFlightDetailBaseCacheBean
{
    CTFlightDetailViewModel *_flightDetailGoViewModel;
    CTFlightDetailViewModel *_flightDetailReturnViewModel;
    CTFlightOrderFillMainInfoViewModel *_flightGoFillMainInfoModel;
    CTFlightOrderFillMainInfoViewModel *_flightReturnFillMainInfoModel;
}

@property(retain, nonatomic) CTFlightOrderFillMainInfoViewModel *flightReturnFillMainInfoModel; // @synthesize flightReturnFillMainInfoModel=_flightReturnFillMainInfoModel;
@property(retain, nonatomic) CTFlightOrderFillMainInfoViewModel *flightGoFillMainInfoModel; // @synthesize flightGoFillMainInfoModel=_flightGoFillMainInfoModel;
@property(retain, nonatomic) CTFlightDetailViewModel *flightDetailReturnViewModel; // @synthesize flightDetailReturnViewModel=_flightDetailReturnViewModel;
@property(retain, nonatomic) CTFlightDetailViewModel *flightDetailGoViewModel; // @synthesize flightDetailGoViewModel=_flightDetailGoViewModel;
- (void).cxx_destruct;
- (id)getFlightFillPageReturnSegmentList;
- (id)getFlightMiddleReturnPageSegmentList;
- (id)getFlightFillPageGoSegmentList;
- (id)getFlightMiddleGoPageSegmentList;
- (id)getFlightFillPageReturnUsePolicyModel;
- (id)getFlightFillPageGoUsePolicyModel;
- (id)getFlightMiddleReturnPageSelectModel;
- (id)getFlightMiddleGoPageSelectModel;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;
- (id)init;

@end

