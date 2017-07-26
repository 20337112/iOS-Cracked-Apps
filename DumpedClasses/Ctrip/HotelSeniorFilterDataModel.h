//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CityModel, NSMutableArray, NSMutableDictionary, NSString;

@interface HotelSeniorFilterDataModel : NSObject
{
    CityModel *_lastBrandCityModel;
    CityModel *_lastLocationCityModel;
    CityModel *_lastLandmarkCityModel;
    CityModel *_lastSelectedCityModel;
    CityModel *_lastFeatureCityModel;
    CityModel *_lastPaymentCityModel;
    CityModel *_lastPinPointCityModel;
    NSString *_lastCheckInDateAct;
    NSString *_lastCheckOutDateAct;
    NSString *_lastCheckInDateMark;
    NSString *_lastCheckOutDateMark;
    NSMutableArray *_standardPriceList;
    NSMutableArray *_standardStarList;
    NSMutableArray *_standardDistanceList;
    NSMutableArray *_standardCantonList;
    NSMutableArray *_standardCommercialList;
    NSMutableArray *_standardAirPortStationList;
    NSMutableArray *_standardMetroLineList;
    NSMutableDictionary *_metroStationMap;
    NSMutableDictionary *_allMetroStationMap;
    NSMutableArray *_standardBrandTabsList;
    NSMutableDictionary *_allBrandsMap;
    NSMutableDictionary *_brandItemsMap;
    NSMutableArray *_selectedActList;
    NSMutableArray *_otherHotLandmarkTabsList;
    NSMutableDictionary *_otherHotLandmarkMap;
    NSMutableArray *_locationAndLandmarkTabsList;
    NSMutableArray *_featureList;
    NSMutableArray *_keyWordTabList;
    NSMutableArray *_standardAdminReqList;
    NSMutableArray *_standardPayTypeList;
    NSMutableArray *_filterTabList;
    NSMutableArray *_underJurisdictionList;
    NSMutableArray *_overseaCityList;
    NSMutableArray *_overseaSubCityList;
}

@property(retain, nonatomic) NSMutableArray *overseaSubCityList; // @synthesize overseaSubCityList=_overseaSubCityList;
@property(retain, nonatomic) NSMutableArray *overseaCityList; // @synthesize overseaCityList=_overseaCityList;
@property(retain, nonatomic) NSMutableArray *underJurisdictionList; // @synthesize underJurisdictionList=_underJurisdictionList;
@property(retain, nonatomic) NSMutableArray *filterTabList; // @synthesize filterTabList=_filterTabList;
@property(retain, nonatomic) NSMutableArray *standardPayTypeList; // @synthesize standardPayTypeList=_standardPayTypeList;
@property(retain, nonatomic) NSMutableArray *standardAdminReqList; // @synthesize standardAdminReqList=_standardAdminReqList;
@property(retain, nonatomic) NSMutableArray *keyWordTabList; // @synthesize keyWordTabList=_keyWordTabList;
@property(retain, nonatomic) NSMutableArray *featureList; // @synthesize featureList=_featureList;
@property(retain, nonatomic) NSMutableArray *locationAndLandmarkTabsList; // @synthesize locationAndLandmarkTabsList=_locationAndLandmarkTabsList;
@property(retain, nonatomic) NSMutableDictionary *otherHotLandmarkMap; // @synthesize otherHotLandmarkMap=_otherHotLandmarkMap;
@property(retain, nonatomic) NSMutableArray *otherHotLandmarkTabsList; // @synthesize otherHotLandmarkTabsList=_otherHotLandmarkTabsList;
@property(retain, nonatomic) NSMutableArray *selectedActList; // @synthesize selectedActList=_selectedActList;
@property(retain, nonatomic) NSMutableDictionary *brandItemsMap; // @synthesize brandItemsMap=_brandItemsMap;
@property(retain, nonatomic) NSMutableDictionary *allBrandsMap; // @synthesize allBrandsMap=_allBrandsMap;
@property(retain, nonatomic) NSMutableArray *standardBrandTabsList; // @synthesize standardBrandTabsList=_standardBrandTabsList;
@property(retain, nonatomic) NSMutableDictionary *allMetroStationMap; // @synthesize allMetroStationMap=_allMetroStationMap;
@property(retain, nonatomic) NSMutableDictionary *metroStationMap; // @synthesize metroStationMap=_metroStationMap;
@property(retain, nonatomic) NSMutableArray *standardMetroLineList; // @synthesize standardMetroLineList=_standardMetroLineList;
@property(retain, nonatomic) NSMutableArray *standardAirPortStationList; // @synthesize standardAirPortStationList=_standardAirPortStationList;
@property(retain, nonatomic) NSMutableArray *standardCommercialList; // @synthesize standardCommercialList=_standardCommercialList;
@property(retain, nonatomic) NSMutableArray *standardCantonList; // @synthesize standardCantonList=_standardCantonList;
@property(retain, nonatomic) NSMutableArray *standardDistanceList; // @synthesize standardDistanceList=_standardDistanceList;
@property(retain, nonatomic) NSMutableArray *standardStarList; // @synthesize standardStarList=_standardStarList;
@property(retain, nonatomic) NSMutableArray *standardPriceList; // @synthesize standardPriceList=_standardPriceList;
@property(copy, nonatomic) NSString *lastCheckOutDateMark; // @synthesize lastCheckOutDateMark=_lastCheckOutDateMark;
@property(copy, nonatomic) NSString *lastCheckInDateMark; // @synthesize lastCheckInDateMark=_lastCheckInDateMark;
@property(copy, nonatomic) NSString *lastCheckOutDateAct; // @synthesize lastCheckOutDateAct=_lastCheckOutDateAct;
@property(copy, nonatomic) NSString *lastCheckInDateAct; // @synthesize lastCheckInDateAct=_lastCheckInDateAct;
@property(retain, nonatomic) CityModel *lastPinPointCityModel; // @synthesize lastPinPointCityModel=_lastPinPointCityModel;
@property(retain, nonatomic) CityModel *lastPaymentCityModel; // @synthesize lastPaymentCityModel=_lastPaymentCityModel;
@property(retain, nonatomic) CityModel *lastFeatureCityModel; // @synthesize lastFeatureCityModel=_lastFeatureCityModel;
@property(retain, nonatomic) CityModel *lastSelectedCityModel; // @synthesize lastSelectedCityModel=_lastSelectedCityModel;
@property(retain, nonatomic) CityModel *lastLandmarkCityModel; // @synthesize lastLandmarkCityModel=_lastLandmarkCityModel;
@property(retain, nonatomic) CityModel *lastLocationCityModel; // @synthesize lastLocationCityModel=_lastLocationCityModel;
@property(retain, nonatomic) CityModel *lastBrandCityModel; // @synthesize lastBrandCityModel=_lastBrandCityModel;
- (void).cxx_destruct;
- (id)getLocationOrLandmarkList:(id)arg1;
- (void)resetFeatureWithCity;
- (void)resetLandmarkWithCity;
- (void)resetSelectedActWithCity;
- (void)resetBrandDataWithCity;
- (void)resetLocationDataWithCity;
- (id)initWithType:(int)arg1;

@end

