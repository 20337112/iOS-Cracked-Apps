//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOrderFaqListRequest : CTBusinessBean
{
    int _hotelId;
    NSString *_caseValue;
    long long _orderId;
    NSString *_hotelName;
    NSString *_checkInDate;
    NSString *_checkOutDate;
}

@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *caseValue; // @synthesize caseValue=_caseValue;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

