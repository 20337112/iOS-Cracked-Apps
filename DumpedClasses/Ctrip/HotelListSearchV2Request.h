//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class AllianceEntityModel, BasicFilterSettingModel, HotelListSearchSettingModel, HotelSearchSettingModel, HotelSensitiveCoupon, NSMutableArray, NSString;

@interface HotelListSearchV2Request : CTBusinessBean
{
    _Bool _isLogin;
    int _serviceVersion;
    int _facilityBitMap;
    int _payTypeBitMap;
    int _controlBitMap;
    int _controlBitMapAddInfo;
    int _subBusinessType;
    int _keywordType;
    int _queryBitMapOld;
    int _roomQuantity;
    int _sendLocation;
    int _mapType;
    int _coordinateType;
    NSString *_clientEnvironmentInfo;
    HotelSearchSettingModel *_searchSettingModel;
    HotelListSearchSettingModel *_hotelListSearchSettingModel;
    NSMutableArray *_hotelQuerySettingList;
    BasicFilterSettingModel *_sortingInfoModel;
    NSString *_keyvalue;
    AllianceEntityModel *_allianceInfoModel;
    NSString *_hiddenHotelID;
    long long _queryBitMap;
    HotelSensitiveCoupon *_sensitiveCoupon;
    NSString *_googlePlaceID;
}

@property(copy, nonatomic) NSString *googlePlaceID; // @synthesize googlePlaceID=_googlePlaceID;
@property(retain, nonatomic) HotelSensitiveCoupon *sensitiveCoupon; // @synthesize sensitiveCoupon=_sensitiveCoupon;
@property(nonatomic) long long queryBitMap; // @synthesize queryBitMap=_queryBitMap;
@property(nonatomic) int coordinateType; // @synthesize coordinateType=_coordinateType;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) int sendLocation; // @synthesize sendLocation=_sendLocation;
@property(nonatomic) int roomQuantity; // @synthesize roomQuantity=_roomQuantity;
@property(nonatomic) int queryBitMapOld; // @synthesize queryBitMapOld=_queryBitMapOld;
@property(copy, nonatomic) NSString *hiddenHotelID; // @synthesize hiddenHotelID=_hiddenHotelID;
@property(retain, nonatomic) AllianceEntityModel *allianceInfoModel; // @synthesize allianceInfoModel=_allianceInfoModel;
@property(nonatomic) int keywordType; // @synthesize keywordType=_keywordType;
@property(copy, nonatomic) NSString *keyvalue; // @synthesize keyvalue=_keyvalue;
@property(retain, nonatomic) BasicFilterSettingModel *sortingInfoModel; // @synthesize sortingInfoModel=_sortingInfoModel;
@property(nonatomic) int subBusinessType; // @synthesize subBusinessType=_subBusinessType;
@property(nonatomic) int controlBitMapAddInfo; // @synthesize controlBitMapAddInfo=_controlBitMapAddInfo;
@property(nonatomic) int controlBitMap; // @synthesize controlBitMap=_controlBitMap;
@property(nonatomic) int payTypeBitMap; // @synthesize payTypeBitMap=_payTypeBitMap;
@property(nonatomic) int facilityBitMap; // @synthesize facilityBitMap=_facilityBitMap;
@property(retain, nonatomic) NSMutableArray *hotelQuerySettingList; // @synthesize hotelQuerySettingList=_hotelQuerySettingList;
@property(retain, nonatomic) HotelListSearchSettingModel *hotelListSearchSettingModel; // @synthesize hotelListSearchSettingModel=_hotelListSearchSettingModel;
@property(retain, nonatomic) HotelSearchSettingModel *searchSettingModel; // @synthesize searchSettingModel=_searchSettingModel;
@property(copy, nonatomic) NSString *clientEnvironmentInfo; // @synthesize clientEnvironmentInfo=_clientEnvironmentInfo;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

