//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface TrainGrabTicketBookingDetailResponse : CTBusinessBean
{
    NSString *message;
    int retCode;
    _Bool isUseCoupon;
    NSString *ticketDetailSlogan;
    PriceType *maxTicketPrice;
    _Bool isUseFastPay;
    _Bool isDefaultFastPay;
    NSMutableArray *trainAppendProductList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSMutableArray *trainAppendProductList; // @synthesize trainAppendProductList;
@property(nonatomic) _Bool isDefaultFastPay; // @synthesize isDefaultFastPay;
@property(nonatomic) _Bool isUseFastPay; // @synthesize isUseFastPay;
@property(retain, nonatomic) PriceType *maxTicketPrice; // @synthesize maxTicketPrice;
@property(copy, nonatomic) NSString *ticketDetailSlogan; // @synthesize ticketDetailSlogan;
@property(nonatomic) _Bool isUseCoupon; // @synthesize isUseCoupon;
@property(nonatomic) int retCode; // @synthesize retCode;
@property(copy, nonatomic) NSString *message; // @synthesize message;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

