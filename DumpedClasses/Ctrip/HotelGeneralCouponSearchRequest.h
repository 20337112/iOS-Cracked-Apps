//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, RequestHead;

@interface HotelGeneralCouponSearchRequest : CTBusinessBean
{
    int _hotelID;
    int _locationCityId;
    int _cityId;
    int _countryType;
    int _isWolf;
    RequestHead *_head;
    NSString *_checkInDate;
    NSString *_checkOutDate;
}

@property(nonatomic) int isWolf; // @synthesize isWolf=_isWolf;
@property(nonatomic) int countryType; // @synthesize countryType=_countryType;
@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(nonatomic) int locationCityId; // @synthesize locationCityId=_locationCityId;
@property(nonatomic) int hotelID; // @synthesize hotelID=_hotelID;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

