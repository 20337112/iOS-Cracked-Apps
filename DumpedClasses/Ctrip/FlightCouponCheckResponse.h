//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightUserCouponCheckInformationModel, NSString;

@interface FlightCouponCheckResponse : CTBusinessBean
{
    int result;
    NSString *resultMessage;
    FlightUserCouponCheckInformationModel *couponInfoModel;
}

@property(retain, nonatomic) FlightUserCouponCheckInformationModel *couponInfoModel; // @synthesize couponInfoModel;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

