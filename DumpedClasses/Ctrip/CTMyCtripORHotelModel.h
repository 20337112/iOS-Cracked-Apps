//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTMyCtripORBaseModel.h"

@class NSArray, NSString;

@interface CTMyCtripORHotelModel : CTMyCtripORBaseModel
{
    NSString *_OrderTitle;
    NSString *_CheckInDateStr;
    NSString *_CheckOutDateStr;
    NSString *_HotelAddress;
    NSString *_HotelLocalAddress;
    NSString *_NightAmount;
    NSString *_RoomAmount;
    NSString *_Longitude;
    NSString *_Latitude;
    NSString *_DateDescription;
    NSString *_TipType;
    NSArray *_OrderActions;
}

@property(retain, nonatomic) NSArray *OrderActions; // @synthesize OrderActions=_OrderActions;
@property(copy, nonatomic) NSString *TipType; // @synthesize TipType=_TipType;
@property(copy, nonatomic) NSString *DateDescription; // @synthesize DateDescription=_DateDescription;
@property(copy, nonatomic) NSString *Latitude; // @synthesize Latitude=_Latitude;
@property(copy, nonatomic) NSString *Longitude; // @synthesize Longitude=_Longitude;
@property(copy, nonatomic) NSString *RoomAmount; // @synthesize RoomAmount=_RoomAmount;
@property(copy, nonatomic) NSString *NightAmount; // @synthesize NightAmount=_NightAmount;
@property(copy, nonatomic) NSString *HotelLocalAddress; // @synthesize HotelLocalAddress=_HotelLocalAddress;
@property(copy, nonatomic) NSString *HotelAddress; // @synthesize HotelAddress=_HotelAddress;
@property(copy, nonatomic) NSString *CheckOutDateStr; // @synthesize CheckOutDateStr=_CheckOutDateStr;
@property(copy, nonatomic) NSString *CheckInDateStr; // @synthesize CheckInDateStr=_CheckInDateStr;
@property(copy, nonatomic) NSString *OrderTitle; // @synthesize OrderTitle=_OrderTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
