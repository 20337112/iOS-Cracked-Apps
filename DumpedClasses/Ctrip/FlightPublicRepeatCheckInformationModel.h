//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightPublicRepeatCheckInformationModel : CTBusinessBean
{
    int _segmentNo;
    int _flightIndex;
    int _departCityID;
    int _classGrade;
    NSString *_flightNo;
    NSString *_departCityCode;
    NSString *_departDate;
    NSString *_subClass;
    PriceType *_price;
    NSString *_arriveDate;
}

@property(copy, nonatomic) NSString *arriveDate; // @synthesize arriveDate=_arriveDate;
@property(retain, nonatomic) PriceType *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *subClass; // @synthesize subClass=_subClass;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(nonatomic) int classGrade; // @synthesize classGrade=_classGrade;
@property(nonatomic) int departCityID; // @synthesize departCityID=_departCityID;
@property(copy, nonatomic) NSString *departCityCode; // @synthesize departCityCode=_departCityCode;
@property(copy, nonatomic) NSString *flightNo; // @synthesize flightNo=_flightNo;
@property(nonatomic) int flightIndex; // @synthesize flightIndex=_flightIndex;
@property(nonatomic) int segmentNo; // @synthesize segmentNo=_segmentNo;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

