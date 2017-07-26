//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightTrainSectionInformationModel : CTBusinessBean
{
    int indexNo;
    NSString *departStationName;
    NSString *arrivalStationName;
    NSString *departDate;
    NSString *arrivalDate;
    int changeTime;
    NSString *trainTypeName;
    NSString *trainNumber;
    NSString *seatName;
    PriceType *price;
}

@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(copy, nonatomic) NSString *seatName; // @synthesize seatName;
@property(copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber;
@property(copy, nonatomic) NSString *trainTypeName; // @synthesize trainTypeName;
@property(nonatomic) int changeTime; // @synthesize changeTime;
@property(copy, nonatomic) NSString *arrivalDate; // @synthesize arrivalDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
@property(copy, nonatomic) NSString *arrivalStationName; // @synthesize arrivalStationName;
@property(copy, nonatomic) NSString *departStationName; // @synthesize departStationName;
@property(nonatomic) int indexNo; // @synthesize indexNo;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

