//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrototypeSimpleDataModel.h"

@class AutoCompleteHotelInformationModel, MatchCityInformationModel, NSString;

@interface FilterSimpleDataModel : PrototypeSimpleDataModel
{
    NSString *compareToSelect;
    _Bool _keywordFromService;
    _Bool _isGroupBrandHotel;
    int _cityId;
    int _districtId;
    int _landmarkId;
    int _keywordId;
    int _keywordPrimaryKey;
    int _groupBrandType;
    NSString *_landmarkName;
    NSString *_specialBrandType;
    NSString *_hotLandmarkId;
    NSString *_hotLandmarkName;
    MatchCityInformationModel *_matchCityInfo;
    AutoCompleteHotelInformationModel *_hotelInfoModel;
    NSString *_businessRemark;
    NSString *_zoneInfoLocation;
    long long _filterType;
    NSString *_baiduUID;
    NSString *_realCityName;
    NSString *_displayText;
}

@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(copy, nonatomic) NSString *realCityName; // @synthesize realCityName=_realCityName;
@property(nonatomic) _Bool isGroupBrandHotel; // @synthesize isGroupBrandHotel=_isGroupBrandHotel;
@property(copy, nonatomic) NSString *baiduUID; // @synthesize baiduUID=_baiduUID;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(copy, nonatomic) NSString *zoneInfoLocation; // @synthesize zoneInfoLocation=_zoneInfoLocation;
@property(copy, nonatomic) NSString *businessRemark; // @synthesize businessRemark=_businessRemark;
@property(nonatomic) _Bool keywordFromService; // @synthesize keywordFromService=_keywordFromService;
@property(copy, nonatomic) AutoCompleteHotelInformationModel *hotelInfoModel; // @synthesize hotelInfoModel=_hotelInfoModel;
@property(copy, nonatomic) MatchCityInformationModel *matchCityInfo; // @synthesize matchCityInfo=_matchCityInfo;
@property(copy, nonatomic) NSString *hotLandmarkName; // @synthesize hotLandmarkName=_hotLandmarkName;
@property(copy, nonatomic) NSString *hotLandmarkId; // @synthesize hotLandmarkId=_hotLandmarkId;
@property(nonatomic) int groupBrandType; // @synthesize groupBrandType=_groupBrandType;
@property(copy, nonatomic) NSString *specialBrandType; // @synthesize specialBrandType=_specialBrandType;
@property(nonatomic) int keywordPrimaryKey; // @synthesize keywordPrimaryKey=_keywordPrimaryKey;
@property(nonatomic) int keywordId; // @synthesize keywordId=_keywordId;
@property(copy, nonatomic) NSString *landmarkName; // @synthesize landmarkName=_landmarkName;
@property(nonatomic) int landmarkId; // @synthesize landmarkId=_landmarkId;
@property(nonatomic) int districtId; // @synthesize districtId=_districtId;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;
- (id)getDisplayStr:(int)arg1;
- (id)getCompareToSelect;
- (void)setCompareToSelect:(id)arg1;
- (void)setCompareField;
- (id)convertDateTypeToStr:(id)arg1;
- (void)getInfoFromExtension;
- (void)saveInfoToExtension;
- (void)setUpWithProtoModel:(id)arg1 cityID:(int)arg2 districtId:(int)arg3;
- (id)init;

@end

