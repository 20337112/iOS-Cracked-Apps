//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightPublicDuplicateOrderIdInfoModel : CTBusinessBean
{
    int _payStatus;
    long long _orderID;
    NSString *_flightNo;
    NSString *_departCityCode;
    NSString *_departCityName;
    NSString *_arriveCityCode;
    NSString *_arriveCityName;
    NSString *_departDate;
    NSString *_arriveDate;
    PriceType *_orderAmount;
}

@property(retain, nonatomic) PriceType *orderAmount; // @synthesize orderAmount=_orderAmount;
@property(nonatomic) int payStatus; // @synthesize payStatus=_payStatus;
@property(copy, nonatomic) NSString *arriveDate; // @synthesize arriveDate=_arriveDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(copy, nonatomic) NSString *arriveCityName; // @synthesize arriveCityName=_arriveCityName;
@property(copy, nonatomic) NSString *arriveCityCode; // @synthesize arriveCityCode=_arriveCityCode;
@property(copy, nonatomic) NSString *departCityName; // @synthesize departCityName=_departCityName;
@property(copy, nonatomic) NSString *departCityCode; // @synthesize departCityCode=_departCityCode;
@property(copy, nonatomic) NSString *flightNo; // @synthesize flightNo=_flightNo;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

