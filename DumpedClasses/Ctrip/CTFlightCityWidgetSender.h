//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTFlightCityWidgetSender : CTSender
{
}

+ (id)getInstance;
- (void)setupSearchResultInfoWithCacheBean:(id)arg1 response:(id)arg2;
- (void)setCityModel:(id)arg1 withNearModel:(id)arg2;
- (void)setCityModel:(id)arg1 withAirportInfoModel:(id)arg2;
- (void)setUpNearbyAirportInfoWithCacheBean:(id)arg1 response:(id)arg2;
- (id)sendCityAirportSearchWithFlightCityCacheBean:(id)arg1 searchKeyword:(id)arg2;
- (id)sendNeadbyAirportSearchWithFlightCityCacheBean:(id)arg1 gpsCityCoordinates:(struct CLLocationCoordinate2D)arg2;
- (id)init;

@end

