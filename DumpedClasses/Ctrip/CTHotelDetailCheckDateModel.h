//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotelDetailCheckDateModel : NSObject
{
    _Bool _isMorning;
    int _hotelType;
    int _cityId;
    NSString *_checkinDate;
    NSString *_checkoutDate;
    NSString *_checkinDateName;
    NSString *_checkoutDateName;
    NSString *_checkRoomCount;
    NSString *_token;
    NSString *_personFilterString;
}

@property(retain, nonatomic) NSString *personFilterString; // @synthesize personFilterString=_personFilterString;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(nonatomic) _Bool isMorning; // @synthesize isMorning=_isMorning;
@property(nonatomic) int hotelType; // @synthesize hotelType=_hotelType;
@property(retain, nonatomic) NSString *checkRoomCount; // @synthesize checkRoomCount=_checkRoomCount;
@property(retain, nonatomic) NSString *checkoutDateName; // @synthesize checkoutDateName=_checkoutDateName;
@property(retain, nonatomic) NSString *checkinDateName; // @synthesize checkinDateName=_checkinDateName;
@property(retain, nonatomic) NSString *checkoutDate; // @synthesize checkoutDate=_checkoutDate;
@property(retain, nonatomic) NSString *checkinDate; // @synthesize checkinDate=_checkinDate;
- (void).cxx_destruct;
- (id)init;

@end

