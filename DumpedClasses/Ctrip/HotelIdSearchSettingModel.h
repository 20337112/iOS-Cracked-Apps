//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface HotelIdSearchSettingModel : CTBusinessBean
{
    int _hotelId;
    int _hotelDataType;
    int _cityID;
}

@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(nonatomic) int hotelDataType; // @synthesize hotelDataType=_hotelDataType;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
- (id)getPBAnnotationArray;
- (id)init;

@end

