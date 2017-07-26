//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface HotelCouponValidationRequest : CTBusinessBean
{
    int _serviceVersion;
    int _appID;
    int _roomDayCount;
    NSString *_couponCode;
    NSMutableArray *_promotionIDList;
    PriceType *_orderAmount;
}

@property(retain, nonatomic) PriceType *orderAmount; // @synthesize orderAmount=_orderAmount;
@property(nonatomic) int roomDayCount; // @synthesize roomDayCount=_roomDayCount;
@property(retain, nonatomic) NSMutableArray *promotionIDList; // @synthesize promotionIDList=_promotionIDList;
@property(nonatomic) int appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *couponCode; // @synthesize couponCode=_couponCode;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

