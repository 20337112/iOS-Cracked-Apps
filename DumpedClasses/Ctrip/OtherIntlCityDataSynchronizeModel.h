//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface OtherIntlCityDataSynchronizeModel : CTBusinessBean
{
    int _cityID;
    int _countryID;
    int _dataVersion;
    int _operateType;
    int _dataFor;
    int _flag;
    int _weightFlag;
    int _intlCityDataId;
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_cityNameEN;
    NSString *_cityNamePY;
    NSString *_cityNameJP;
    NSString *_firstLetterPY;
    NSString *_firstLetterEN;
    NSString *_airportCode;
    NSString *_airportName;
    NSString *_airportNameEn;
    NSString *_countryName;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_hotFlag;
    NSString *_cityAirportName;
}

@property(copy, nonatomic) NSString *cityAirportName; // @synthesize cityAirportName=_cityAirportName;
@property(nonatomic) int intlCityDataId; // @synthesize intlCityDataId=_intlCityDataId;
@property(copy, nonatomic) NSString *hotFlag; // @synthesize hotFlag=_hotFlag;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int weightFlag; // @synthesize weightFlag=_weightFlag;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int dataFor; // @synthesize dataFor=_dataFor;
@property(nonatomic) int operateType; // @synthesize operateType=_operateType;
@property(nonatomic) int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(nonatomic) int countryID; // @synthesize countryID=_countryID;
@property(copy, nonatomic) NSString *airportNameEn; // @synthesize airportNameEn=_airportNameEn;
@property(copy, nonatomic) NSString *airportName; // @synthesize airportName=_airportName;
@property(copy, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property(copy, nonatomic) NSString *firstLetterEN; // @synthesize firstLetterEN=_firstLetterEN;
@property(copy, nonatomic) NSString *firstLetterPY; // @synthesize firstLetterPY=_firstLetterPY;
@property(copy, nonatomic) NSString *cityNameJP; // @synthesize cityNameJP=_cityNameJP;
@property(copy, nonatomic) NSString *cityNamePY; // @synthesize cityNamePY=_cityNamePY;
@property(copy, nonatomic) NSString *cityNameEN; // @synthesize cityNameEN=_cityNameEN;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

