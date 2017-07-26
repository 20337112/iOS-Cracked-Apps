//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class CTFlightFilterSimpleDataModel, NSMutableArray;

@interface CTFlightFilterModel : CTViewModel
{
    _Bool _isOnlySearchDirectFlight;
    _Bool _isHideSharedClass;
    CTFlightFilterSimpleDataModel *_selectDepartAirport;
    CTFlightFilterSimpleDataModel *_selectArriveAirport;
    CTFlightFilterSimpleDataModel *_selectAirline;
    CTFlightFilterSimpleDataModel *_selectCraftType;
    CTFlightFilterSimpleDataModel *_selectFlightClass;
    CTFlightFilterSimpleDataModel *_selectChangePrice;
    CTFlightFilterSimpleDataModel *_selectTime;
    CTFlightFilterSimpleDataModel *_selectCombineDepTimeInterval;
    CTFlightFilterSimpleDataModel *_selectDepAriTimeInterval;
    CTFlightFilterSimpleDataModel *_selectCombineGoTimeInterval;
    CTFlightFilterSimpleDataModel *_selectCombineReturnTimeInterval;
    NSMutableArray *_selectCraftTypeArray;
    NSMutableArray *_selectClassArray;
    NSMutableArray *_selectDepartAirportArray;
    NSMutableArray *_selectArriveAirportArray;
    NSMutableArray *_selectAirlineArray;
    NSMutableArray *_selectStopCityArray;
    NSMutableArray *_selectFlightDepartTimeList;
    CTFlightFilterSimpleDataModel *_selectTravelerEligibility;
}

@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectTravelerEligibility; // @synthesize selectTravelerEligibility=_selectTravelerEligibility;
@property(retain, nonatomic) NSMutableArray *selectFlightDepartTimeList; // @synthesize selectFlightDepartTimeList=_selectFlightDepartTimeList;
@property(retain, nonatomic) NSMutableArray *selectStopCityArray; // @synthesize selectStopCityArray=_selectStopCityArray;
@property(retain, nonatomic) NSMutableArray *selectAirlineArray; // @synthesize selectAirlineArray=_selectAirlineArray;
@property(retain, nonatomic) NSMutableArray *selectArriveAirportArray; // @synthesize selectArriveAirportArray=_selectArriveAirportArray;
@property(retain, nonatomic) NSMutableArray *selectDepartAirportArray; // @synthesize selectDepartAirportArray=_selectDepartAirportArray;
@property(retain, nonatomic) NSMutableArray *selectClassArray; // @synthesize selectClassArray=_selectClassArray;
@property(retain, nonatomic) NSMutableArray *selectCraftTypeArray; // @synthesize selectCraftTypeArray=_selectCraftTypeArray;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectCombineReturnTimeInterval; // @synthesize selectCombineReturnTimeInterval=_selectCombineReturnTimeInterval;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectCombineGoTimeInterval; // @synthesize selectCombineGoTimeInterval=_selectCombineGoTimeInterval;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectDepAriTimeInterval; // @synthesize selectDepAriTimeInterval=_selectDepAriTimeInterval;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectCombineDepTimeInterval; // @synthesize selectCombineDepTimeInterval=_selectCombineDepTimeInterval;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectTime; // @synthesize selectTime=_selectTime;
@property(nonatomic) _Bool isHideSharedClass; // @synthesize isHideSharedClass=_isHideSharedClass;
@property(nonatomic) _Bool isOnlySearchDirectFlight; // @synthesize isOnlySearchDirectFlight=_isOnlySearchDirectFlight;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectChangePrice; // @synthesize selectChangePrice=_selectChangePrice;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectFlightClass; // @synthesize selectFlightClass=_selectFlightClass;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectCraftType; // @synthesize selectCraftType=_selectCraftType;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectAirline; // @synthesize selectAirline=_selectAirline;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectArriveAirport; // @synthesize selectArriveAirport=_selectArriveAirport;
@property(retain, nonatomic) CTFlightFilterSimpleDataModel *selectDepartAirport; // @synthesize selectDepartAirport=_selectDepartAirport;
- (void).cxx_destruct;
- (id)init;

@end

