//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTHotSaleTicket, CTPreferentialHotel, NSMutableArray, NSString;

@interface CTHomeHotSalesDataCenter : NSObject
{
    NSString *_serverCurrentTime;
    NSString *_cityID;
    NSString *_cityName;
    CTHotSaleTicket *_hotSaleTicket;
    NSMutableArray *_hotHotelArea;
    NSMutableArray *_hotTicketArea;
    CTPreferentialHotel *_preferentialHotel;
    NSMutableArray *_lowPriceFlightTicketArea;
    NSMutableArray *_flightPreSaleList;
    NSMutableArray *_flightCardList;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *flightCardList; // @synthesize flightCardList=_flightCardList;
@property(retain, nonatomic) NSMutableArray *flightPreSaleList; // @synthesize flightPreSaleList=_flightPreSaleList;
@property(retain, nonatomic) NSMutableArray *lowPriceFlightTicketArea; // @synthesize lowPriceFlightTicketArea=_lowPriceFlightTicketArea;
@property(retain, nonatomic) CTPreferentialHotel *preferentialHotel; // @synthesize preferentialHotel=_preferentialHotel;
@property(retain, nonatomic) NSMutableArray *hotTicketArea; // @synthesize hotTicketArea=_hotTicketArea;
@property(retain, nonatomic) NSMutableArray *hotHotelArea; // @synthesize hotHotelArea=_hotHotelArea;
@property(retain, nonatomic) CTHotSaleTicket *hotSaleTicket; // @synthesize hotSaleTicket=_hotSaleTicket;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityID; // @synthesize cityID=_cityID;
@property(copy, nonatomic) NSString *serverCurrentTime; // @synthesize serverCurrentTime=_serverCurrentTime;
- (void).cxx_destruct;
- (id)init;

@end

