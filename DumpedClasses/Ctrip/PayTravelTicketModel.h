//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface PayTravelTicketModel : CTBusinessBean
{
    NSString *ticketID;
    NSString *brandId;
    NSString *brandType;
    NSString *channelId;
    int ticketEType;
    NSString *password;
    NSString *verifyCode;
    int feeRate;
    int needFee;
    PriceType *feeAmount;
    PriceType *amount;
}

@property(retain, nonatomic) PriceType *amount; // @synthesize amount;
@property(retain, nonatomic) PriceType *feeAmount; // @synthesize feeAmount;
@property(nonatomic) int needFee; // @synthesize needFee;
@property(nonatomic) int feeRate; // @synthesize feeRate;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode;
@property(copy, nonatomic) NSString *password; // @synthesize password;
@property(nonatomic) int ticketEType; // @synthesize ticketEType;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId;
@property(copy, nonatomic) NSString *brandType; // @synthesize brandType;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId;
@property(copy, nonatomic) NSString *ticketID; // @synthesize ticketID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

