//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlightCityModelForCityList, NSString;

@protocol CTFlightSearchDoubleCellDelegate <NSObject>
- (void)flightSearchCellWillShowModelViewController;
- (void)cellFinishedDoubleTripDataChangeWithDepartCityModel:(FlightCityModelForCityList *)arg1 arriveCityModel:(FlightCityModelForCityList *)arg2 departDate:(NSString *)arg3 arriveDate:(NSString *)arg4;
- (void)cellFinishedSingleTripDataChangeWithDepartCityModel:(FlightCityModelForCityList *)arg1 arriveCityModel:(FlightCityModelForCityList *)arg2 departDate:(NSString *)arg3 arriveDate:(NSString *)arg4 departNearbyCity:(NSString *)arg5 arriveNearbyCity:(NSString *)arg6;
@end

