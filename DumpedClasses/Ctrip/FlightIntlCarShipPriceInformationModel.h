//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightIntlCarShipPriceInformationModel : CTBusinessBean
{
    int passengerType;
    PriceType *oriPrice;
    PriceType *salePrice;
    NSString *submitDateStr;
    _Bool isFree;
}

@property(nonatomic) _Bool isFree; // @synthesize isFree;
@property(copy, nonatomic) NSString *submitDateStr; // @synthesize submitDateStr;
@property(retain, nonatomic) PriceType *salePrice; // @synthesize salePrice;
@property(retain, nonatomic) PriceType *oriPrice; // @synthesize oriPrice;
@property(nonatomic) int passengerType; // @synthesize passengerType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

