//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HotelSensitiveCoupon, NSString;

@interface CTHotelPersionaliseCouponModel : NSObject
{
    NSString *_userId;
    HotelSensitiveCoupon *_coupon;
}

@property(retain, nonatomic) HotelSensitiveCoupon *coupon; // @synthesize coupon=_coupon;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)toModel:(id)arg1;
- (id)changeModel;
- (id)init;

@end

