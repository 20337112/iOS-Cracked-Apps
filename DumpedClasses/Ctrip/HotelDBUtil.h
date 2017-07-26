//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HotelDBUtil : NSObject
{
}

+ (id)getInsertString:(id)arg1;
+ (id)getMetroStationOfAll:(int)arg1 landmarkId:(int)arg2 landmarkName:(id)arg3;
+ (int)getTimeZoneGapFromDB:(id)arg1;
+ (id)getUnderJurisDicByCityID:(int)arg1;
+ (id)getReplaceCityForOversea:(id)arg1;
+ (id)getReplaceCity:(id)arg1;
+ (id)readCityModelForListFromJSON:(id)arg1;
+ (id)readSimpleDataModel:(id)arg1;
+ (id)citymodelForListToJSON:(id)arg1 isFromPositionLocation:(_Bool)arg2 selectTab:(long long)arg3;
+ (id)simpelDataListtoJSONObject:(id)arg1;
+ (id)simpelDatatoJSONObject:(id)arg1;
+ (id)getResultCitiesByKeyWord:(id)arg1 type:(int)arg2;
+ (_Bool)isLocalCity:(int)arg1;
+ (id)getHotelCityByID:(int)arg1 andDistrictID:(int)arg2;
+ (id)getHotelCityByID:(int)arg1;
+ (id)getCityModelAndCompareDistance:(id)arg1 lat:(double)arg2 lng:(double)arg3;
+ (id)getCityModelByGeoAddress:(id)arg1 lat:(double)arg2 lng:(double)arg3;
+ (id)getCityModelByCtripCity:(id)arg1 lat:(double)arg2 lng:(double)arg3;
+ (id)getHotelCityModelByCityName:(id)arg1;
+ (id)getHotelCityIDByName:(id)arg1;
+ (_Bool)arrayEmptyOrNull:(id)arg1;
+ (id)getCityModelByCityID:(int)arg1 districtID:(int)arg2;
+ (id)getCityModelByCityID:(int)arg1;
+ (id)getHistoryOfHotelCity:(int)arg1;
+ (void)insertHistoryOfHotelCity:(int)arg1 cityModel:(id)arg2;
+ (void)insertMyLocationToHistoryCity;
+ (void)cleanCacheOfHotel;
+ (_Bool)cleanSearchHistoryOfHotel:(int)arg1 DBType:(int)arg2;
+ (id)getSearchQueryHistoryOfHotel:(int)arg1 DBType:(int)arg2;
+ (void)insertQueryHistoryOfHotelSearch:(id)arg1 businessType:(int)arg2 DBType:(int)arg3;
+ (_Bool)deleteCommentSearchHistoryByKeyword:(id)arg1;
+ (_Bool)clearSearchHistoryOfCommentKeyword;
+ (id)getSearchHistoryOfCommentKeyword:(int)arg1;
+ (_Bool)insertSearchHistoryOfCommentKeyword:(id)arg1 DbType:(int)arg2;
+ (void)deleteCommentUsefulSumbitHistory:(int)arg1 DbType:(int)arg2;
+ (id)getCommentUsefulSumbitHistory;
+ (void)insertCommentUsefulSumbitHistory:(int)arg1 DbType:(int)arg2;
+ (void)initCountryEnum;
+ (id)toAdditionInfoModel:(id)arg1;
+ (id)toCityModel:(id)arg1;
+ (id)toJsonCityModel:(id)arg1;
+ (void)clearQueryHistoryOfHotelDestSearch;
+ (id)getQueryHistoryOfHotelDestSearch:(int)arg1;
+ (_Bool)insertQueryHistoryOfHotelDestSearch:(id)arg1 DbType:(int)arg2;
+ (_Bool)isValidModel:(id)arg1;
+ (int)changeStringToEnum:(int)arg1;
+ (id)readJsonToModel:(id)arg1;
+ (id)getJsonValue:(id)arg1;
+ (id)getPrimaryKey:(id)arg1;
+ (_Bool)deleteMyHotelHistoryListV2:(id)arg1 DBType:(int)arg2;
+ (void)updateMyHotelHistoryV2:(id)arg1 DBType:(int)arg2;
+ (id)getStrFromMap:(id)arg1 key:(id)arg2;
+ (id)changeToRecord:(id)arg1;
+ (void)changeToRecoreViewModel:(id)arg1 resultList:(id)arg2;
+ (id)getMyHotelHistoryListV2:(int)arg1 DBType:(int)arg2;
+ (_Bool)updateUserInfoByList:(id)arg1;
+ (_Bool)addUserInfo:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3 itemValue:(id)arg4;
+ (id)getUserInfoDicWithUIDAndCacheBean:(id)arg1 cachebean:(id)arg2;
+ (id)getUserinfoWithUserIDAndCacheAndKey:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3;
+ (_Bool)updateUserInfo:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3 itemValue:(id)arg4;
+ (id)getItemValueWithUserInfo:(id)arg1 cachebean:(id)arg2 itemKey:(id)arg3;

@end

