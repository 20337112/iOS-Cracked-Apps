//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightHomePageXProductExtentInformationModel : CTBusinessBean
{
    int segmentNo;
    NSString *flightNo;
    NSString *airlineCode;
    NSString *airlineShortName;
    NSString *airlineLogoUrl;
    NSString *departCityCode;
    NSString *arriveCityCode;
    NSString *departDate;
    NSString *arriveDate;
    NSString *departAirportCode;
    NSString *departAirportShortName;
    NSString *arriveAirportCode;
    NSString *arriveAirportShortName;
}

@property(copy, nonatomic) NSString *arriveAirportShortName; // @synthesize arriveAirportShortName;
@property(copy, nonatomic) NSString *arriveAirportCode; // @synthesize arriveAirportCode;
@property(copy, nonatomic) NSString *departAirportShortName; // @synthesize departAirportShortName;
@property(copy, nonatomic) NSString *departAirportCode; // @synthesize departAirportCode;
@property(copy, nonatomic) NSString *arriveDate; // @synthesize arriveDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
@property(copy, nonatomic) NSString *arriveCityCode; // @synthesize arriveCityCode;
@property(copy, nonatomic) NSString *departCityCode; // @synthesize departCityCode;
@property(copy, nonatomic) NSString *airlineLogoUrl; // @synthesize airlineLogoUrl;
@property(copy, nonatomic) NSString *airlineShortName; // @synthesize airlineShortName;
@property(copy, nonatomic) NSString *airlineCode; // @synthesize airlineCode;
@property(copy, nonatomic) NSString *flightNo; // @synthesize flightNo;
@property(nonatomic) int segmentNo; // @synthesize segmentNo;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

