//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusObject.h"

@class BusinessAirportInfo, BusinessCarProduct, BusinessFlight, BusinessFlightCommon, BusinessFlightOther, BusinessIntFlight;

@interface CTFlightBusObject : CTBusObject
{
    BusinessFlight *businessFlight;
    BusinessFlightCommon *businessFlightCommon;
    BusinessIntFlight *businessIntFlight;
    BusinessCarProduct *businessCarProduct;
    BusinessFlightOther *businessFlightOther;
    BusinessAirportInfo *businessAirportInfo;
}

+ (void)flightDBRecopy;
- (void).cxx_destruct;
- (void)logBusJumpTrace:(id)arg1 params:(id)arg2;
- (void)doAsyncURLJob:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)doURLJob:(id)arg1;
- (void)doAsyncDataJob:(id)arg1 params:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)doDataJob:(id)arg1 params:(id)arg2;
- (id)initWithHost:(id)arg1;

@end

