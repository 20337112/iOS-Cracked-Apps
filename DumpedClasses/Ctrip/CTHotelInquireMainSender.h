//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelSender.h"

@interface CTHotelInquireMainSender : CTHotelSender
{
}

+ (id)changeRecordToBrowseModel:(id)arg1;
+ (id)getBrowseHistoryMapFromDBV3;
+ (id)getBrowseHistoryReqFromDB:(id)arg1;
+ (id)getInstance;
- (id)sendGetSpecialHotel:(id)arg1;
- (id)sendGetOverseasHotDes:(id)arg1;
- (id)sendSearchBroweHistoryByRequest:(id)arg1 request:(id)arg2 local_browse_info:(id)arg3;
- (id)sendGetMyFavorite:(id)arg1;
- (void)sendGetHomePortalInfo:(id)arg1 resutBlock:(CDUnknownBlockType)arg2;
- (void)sendGetHotelMainLabelingFor:(CDUnknownBlockType)arg1;
- (id)sendGetHotelMainLabeling:(id)arg1 withHotelDataType:(_Bool)arg2 withBus:(_Bool)arg3;
- (id)sendGetHotelMainUserInfo:(id)arg1;
- (id)sendGetHoteOrderStatusList:(id)arg1 isMainOverseaHotel:(_Bool)arg2 scene:(int)arg3;
- (_Bool)checkNeedSendService:(id)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (id)sendGetTimeZoneGap:(id)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (id)sendSearchHotelListWithCityModel:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 cityModel:(id)arg4 checkInDate:(id)arg5 checkOutDate:(id)arg6 filterModel:(id)arg7 sortType:(int)arg8 isAmOrder:(_Bool)arg9 hotelLocationType:(int)arg10 roomQuantity:(long long)arg11;

@end

