//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightInlandMiddleArriveAirportInformationModel : CTBusinessBean
{
    int cityID;
    NSString *cityCode;
    NSString *cityName;
    NSString *airportCode;
    NSString *airportShortName;
    NSString *buildingID;
    NSString *buildingShortName;
}

@property(copy, nonatomic) NSString *buildingShortName; // @synthesize buildingShortName;
@property(copy, nonatomic) NSString *buildingID; // @synthesize buildingID;
@property(copy, nonatomic) NSString *airportShortName; // @synthesize airportShortName;
@property(copy, nonatomic) NSString *airportCode; // @synthesize airportCode;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode;
@property(nonatomic) int cityID; // @synthesize cityID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

