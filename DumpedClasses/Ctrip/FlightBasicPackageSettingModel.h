//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightBasicPackageSettingModel : CTBusinessBean
{
    int pageType;
    int packageTypeId;
    int packageType;
    int packageSubType;
    int passengerType;
    NSString *packageID;
    NSString *packageCode;
    NSString *extendParams;
    NSString *packageName;
    NSString *currency;
    PriceType *price;
    int count;
    PriceType *amount;
    int userSelecte;
}

@property(nonatomic) int userSelecte; // @synthesize userSelecte;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount;
@property(nonatomic) int count; // @synthesize count;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(copy, nonatomic) NSString *currency; // @synthesize currency;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName;
@property(copy, nonatomic) NSString *extendParams; // @synthesize extendParams;
@property(copy, nonatomic) NSString *packageCode; // @synthesize packageCode;
@property(copy, nonatomic) NSString *packageID; // @synthesize packageID;
@property(nonatomic) int passengerType; // @synthesize passengerType;
@property(nonatomic) int packageSubType; // @synthesize packageSubType;
@property(nonatomic) int packageType; // @synthesize packageType;
@property(nonatomic) int packageTypeId; // @synthesize packageTypeId;
@property(nonatomic) int pageType; // @synthesize pageType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

