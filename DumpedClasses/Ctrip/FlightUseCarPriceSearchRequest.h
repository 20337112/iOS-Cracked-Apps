//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class CarPriceUserInputSearchItemInformationModel, NSMutableArray, NSString;

@interface FlightUseCarPriceSearchRequest : CTBusinessBean
{
    NSMutableArray *carPriceDefaultSearchInfoList;
    int vehicleType;
    CarPriceUserInputSearchItemInformationModel *carUserInputSearchInfoModel;
    NSMutableArray *passengerInfoList;
    NSString *gUID;
    NSString *requestJsonString;
    NSString *couponcode;
    NSMutableArray *couponInfoList;
}

@property(retain, nonatomic) NSMutableArray *couponInfoList; // @synthesize couponInfoList;
@property(copy, nonatomic) NSString *couponcode; // @synthesize couponcode;
@property(copy, nonatomic) NSString *requestJsonString; // @synthesize requestJsonString;
@property(copy, nonatomic) NSString *gUID; // @synthesize gUID;
@property(retain, nonatomic) NSMutableArray *passengerInfoList; // @synthesize passengerInfoList;
@property(retain, nonatomic) CarPriceUserInputSearchItemInformationModel *carUserInputSearchInfoModel; // @synthesize carUserInputSearchInfoModel;
@property(nonatomic) int vehicleType; // @synthesize vehicleType;
@property(retain, nonatomic) NSMutableArray *carPriceDefaultSearchInfoList; // @synthesize carPriceDefaultSearchInfoList;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

