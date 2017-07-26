//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainOrderRecommendV2Request : CTBusinessBean
{
    int serviceVersion;
    int pageId;
    NSString *trainNumber;
    NSString *departStation;
    NSString *arriveStation;
    NSString *seatType;
    NSString *orderType;
    _Bool isCtripMember;
    NSString *departDate;
    NSString *arriveDate;
    int passengerCount;
    NSString *orderAmount;
    _Bool isBuyPackage;
}

@property(nonatomic) _Bool isBuyPackage; // @synthesize isBuyPackage;
@property(copy, nonatomic) NSString *orderAmount; // @synthesize orderAmount;
@property(nonatomic) int passengerCount; // @synthesize passengerCount;
@property(copy, nonatomic) NSString *arriveDate; // @synthesize arriveDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
@property(nonatomic) _Bool isCtripMember; // @synthesize isCtripMember;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType;
@property(copy, nonatomic) NSString *seatType; // @synthesize seatType;
@property(copy, nonatomic) NSString *arriveStation; // @synthesize arriveStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation;
@property(copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber;
@property(nonatomic) int pageId; // @synthesize pageId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

