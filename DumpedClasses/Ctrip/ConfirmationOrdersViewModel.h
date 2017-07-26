//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ConfirmationOrdersViewModel : NSObject
{
    _Bool _hasCheckedFromServer;
    long long _orderID;
    NSString *_confirmNo;
    NSString *_orderDate;
    NSString *_hotelName;
    long long _quantity;
    NSString *_hotelTelephone;
    NSString *_hotelFax;
    NSString *_breakFast;
    NSString *_passengers;
    NSString *_passengerNum;
    NSString *_roomCondition;
    NSString *_roomName;
    NSString *_address;
    NSString *_payTypeInfo;
    NSString *_priceInfo;
    NSString *_checkIn;
    NSString *_checkOut;
    NSString *_remark;
    NSString *_additionalInfo;
    NSString *_noteToHotel;
}

@property(copy, nonatomic) NSString *noteToHotel; // @synthesize noteToHotel=_noteToHotel;
@property(copy, nonatomic) NSString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *checkOut; // @synthesize checkOut=_checkOut;
@property(copy, nonatomic) NSString *checkIn; // @synthesize checkIn=_checkIn;
@property(copy, nonatomic) NSString *priceInfo; // @synthesize priceInfo=_priceInfo;
@property(copy, nonatomic) NSString *payTypeInfo; // @synthesize payTypeInfo=_payTypeInfo;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *roomCondition; // @synthesize roomCondition=_roomCondition;
@property(copy, nonatomic) NSString *passengerNum; // @synthesize passengerNum=_passengerNum;
@property(copy, nonatomic) NSString *passengers; // @synthesize passengers=_passengers;
@property(copy, nonatomic) NSString *breakFast; // @synthesize breakFast=_breakFast;
@property(copy, nonatomic) NSString *hotelFax; // @synthesize hotelFax=_hotelFax;
@property(copy, nonatomic) NSString *hotelTelephone; // @synthesize hotelTelephone=_hotelTelephone;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(copy, nonatomic) NSString *orderDate; // @synthesize orderDate=_orderDate;
@property(copy, nonatomic) NSString *confirmNo; // @synthesize confirmNo=_confirmNo;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(nonatomic) _Bool hasCheckedFromServer; // @synthesize hasCheckedFromServer=_hasCheckedFromServer;
- (void).cxx_destruct;
- (void)setConfirmationInfo:(id)arg1;
- (void)clean;
- (id)init;

@end

