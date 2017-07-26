//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTFlightCityListViewModel, FlightCityModelForCityList, NSMutableArray, NSString;

@interface CTFlightCityCacheBean : CTCacheBean
{
    _Bool _isFlightTrain;
    int _onFocus;
    int _searchChannelType;
    int _tripType;
    int _responseResult;
    CTFlightCityListViewModel *_allCityData;
    CTFlightCityListViewModel *_allNationalCityData;
    FlightCityModelForCityList *_gpsCityModel;
    NSMutableArray *_arrNearbyAirports;
    NSString *_searchKeyWord;
    NSMutableArray *_arrSearchResults;
    NSString *_resultMessage;
}

@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int responseResult; // @synthesize responseResult=_responseResult;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
@property(nonatomic) _Bool isFlightTrain; // @synthesize isFlightTrain=_isFlightTrain;
@property(nonatomic) int searchChannelType; // @synthesize searchChannelType=_searchChannelType;
@property(nonatomic) int onFocus; // @synthesize onFocus=_onFocus;
@property(retain, nonatomic) NSMutableArray *arrSearchResults; // @synthesize arrSearchResults=_arrSearchResults;
@property(retain, nonatomic) NSString *searchKeyWord; // @synthesize searchKeyWord=_searchKeyWord;
@property(retain, nonatomic) NSMutableArray *arrNearbyAirports; // @synthesize arrNearbyAirports=_arrNearbyAirports;
@property(retain, nonatomic) FlightCityModelForCityList *gpsCityModel; // @synthesize gpsCityModel=_gpsCityModel;
@property(retain, nonatomic) CTFlightCityListViewModel *allNationalCityData; // @synthesize allNationalCityData=_allNationalCityData;
@property(retain, nonatomic) CTFlightCityListViewModel *allCityData; // @synthesize allCityData=_allCityData;
- (void).cxx_destruct;
- (void)initCache;

@end

