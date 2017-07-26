//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType, TrainJLTimeLineInfoModel;

@interface TrainTicketDetailSearchV4Response : CTBusinessBean
{
    NSString *resultMessage;
    _Bool isBookable;
    _Bool isSaleDelivery;
    _Bool isUseCoupon;
    NSString *packagePrompt;
    NSString *ticketDetailSlogan;
    NSString *alternativeSeat;
    NSString *alternativeSeatDesc;
    PriceType *servicePrice;
    PriceType *deliveryPrice;
    int deliveryTypeId;
    _Bool isBindAccount;
    _Bool isOpenAllDayJL;
    NSString *openAllDayJLTitle;
    NSString *openAllDayJLDesc;
    _Bool isOpenAcceptRecTrainJL;
    NSString *openAcceptRecTrainJLTitle;
    NSString *openAcceptRecTrainJLDesc;
    _Bool isOpenInvoice;
    NSString *deliveryMessage;
    _Bool isChooseSeat;
    NSMutableArray *trainPackageProductList;
    NSMutableArray *trainAppendProductList;
    TrainJLTimeLineInfoModel *jLTimeLineModel;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) TrainJLTimeLineInfoModel *jLTimeLineModel; // @synthesize jLTimeLineModel;
@property(retain, nonatomic) NSMutableArray *trainAppendProductList; // @synthesize trainAppendProductList;
@property(retain, nonatomic) NSMutableArray *trainPackageProductList; // @synthesize trainPackageProductList;
@property(nonatomic) _Bool isChooseSeat; // @synthesize isChooseSeat;
@property(copy, nonatomic) NSString *deliveryMessage; // @synthesize deliveryMessage;
@property(nonatomic) _Bool isOpenInvoice; // @synthesize isOpenInvoice;
@property(copy, nonatomic) NSString *openAcceptRecTrainJLDesc; // @synthesize openAcceptRecTrainJLDesc;
@property(copy, nonatomic) NSString *openAcceptRecTrainJLTitle; // @synthesize openAcceptRecTrainJLTitle;
@property(nonatomic) _Bool isOpenAcceptRecTrainJL; // @synthesize isOpenAcceptRecTrainJL;
@property(copy, nonatomic) NSString *openAllDayJLDesc; // @synthesize openAllDayJLDesc;
@property(copy, nonatomic) NSString *openAllDayJLTitle; // @synthesize openAllDayJLTitle;
@property(nonatomic) _Bool isOpenAllDayJL; // @synthesize isOpenAllDayJL;
@property(nonatomic) _Bool isBindAccount; // @synthesize isBindAccount;
@property(nonatomic) int deliveryTypeId; // @synthesize deliveryTypeId;
@property(retain, nonatomic) PriceType *deliveryPrice; // @synthesize deliveryPrice;
@property(retain, nonatomic) PriceType *servicePrice; // @synthesize servicePrice;
@property(copy, nonatomic) NSString *alternativeSeatDesc; // @synthesize alternativeSeatDesc;
@property(copy, nonatomic) NSString *alternativeSeat; // @synthesize alternativeSeat;
@property(copy, nonatomic) NSString *ticketDetailSlogan; // @synthesize ticketDetailSlogan;
@property(copy, nonatomic) NSString *packagePrompt; // @synthesize packagePrompt;
@property(nonatomic) _Bool isUseCoupon; // @synthesize isUseCoupon;
@property(nonatomic) _Bool isSaleDelivery; // @synthesize isSaleDelivery;
@property(nonatomic) _Bool isBookable; // @synthesize isBookable;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

