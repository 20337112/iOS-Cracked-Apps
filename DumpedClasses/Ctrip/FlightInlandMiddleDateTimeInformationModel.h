//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightInlandMiddleDateTimeInformationModel : CTBusinessBean
{
    NSString *departDate;
    NSString *arriveDate;
    _Bool isFly;
    int journeyTime;
    int dayCount;
    NSString *punctualityRate;
    NSString *departDateRemark;
    int flightStatus;
    NSString *planDepartTime;
    NSString *departTimeRange;
    NSString *arriveTimeRange;
}

@property(copy, nonatomic) NSString *arriveTimeRange; // @synthesize arriveTimeRange;
@property(copy, nonatomic) NSString *departTimeRange; // @synthesize departTimeRange;
@property(copy, nonatomic) NSString *planDepartTime; // @synthesize planDepartTime;
@property(nonatomic) int flightStatus; // @synthesize flightStatus;
@property(copy, nonatomic) NSString *departDateRemark; // @synthesize departDateRemark;
@property(copy, nonatomic) NSString *punctualityRate; // @synthesize punctualityRate;
@property(nonatomic) int dayCount; // @synthesize dayCount;
@property(nonatomic) int journeyTime; // @synthesize journeyTime;
@property(nonatomic) _Bool isFly; // @synthesize isFly;
@property(copy, nonatomic) NSString *arriveDate; // @synthesize arriveDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

