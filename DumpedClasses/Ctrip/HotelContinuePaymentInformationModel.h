//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelContinuePaymentCouponInformationModel, HotelContinuePaymentGuaranteeInformationModel, HotelContinuePaymentInvoiceInformationModel, NSMutableArray, NSString, PriceType;

@interface HotelContinuePaymentInformationModel : CTBusinessBean
{
    int _busType;
    int _payType;
    int _useEType;
    int _subPayType;
    int _payTypeBitMap;
    int _subPayTypeBitMap;
    int _paySettingsBitMap;
    int _useItemFlagBitMap;
    NSString *_payRequestId;
    long long _orderId;
    NSString *_externalNo;
    PriceType *_amount;
    NSString *_currency;
    PriceType *_displayAmount;
    NSString *_displayCurrency;
    NSMutableArray *_whitePaymentWayIDList;
    NSMutableArray *_blackPaymentWayIDList;
    NSMutableArray *_cardNumSegmentList;
    HotelContinuePaymentCouponInformationModel *_couponInfoModel;
    HotelContinuePaymentInvoiceInformationModel *_invoiceInfoModel;
    HotelContinuePaymentGuaranteeInformationModel *_guaranteeInfoModel;
    NSString *_creditCardLastDate;
    NSString *_title;
    NSString *_subTitle;
    NSString *_recall;
}

@property(copy, nonatomic) NSString *recall; // @synthesize recall=_recall;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *creditCardLastDate; // @synthesize creditCardLastDate=_creditCardLastDate;
@property(retain, nonatomic) HotelContinuePaymentGuaranteeInformationModel *guaranteeInfoModel; // @synthesize guaranteeInfoModel=_guaranteeInfoModel;
@property(retain, nonatomic) HotelContinuePaymentInvoiceInformationModel *invoiceInfoModel; // @synthesize invoiceInfoModel=_invoiceInfoModel;
@property(retain, nonatomic) HotelContinuePaymentCouponInformationModel *couponInfoModel; // @synthesize couponInfoModel=_couponInfoModel;
@property(nonatomic) int useItemFlagBitMap; // @synthesize useItemFlagBitMap=_useItemFlagBitMap;
@property(retain, nonatomic) NSMutableArray *cardNumSegmentList; // @synthesize cardNumSegmentList=_cardNumSegmentList;
@property(retain, nonatomic) NSMutableArray *blackPaymentWayIDList; // @synthesize blackPaymentWayIDList=_blackPaymentWayIDList;
@property(retain, nonatomic) NSMutableArray *whitePaymentWayIDList; // @synthesize whitePaymentWayIDList=_whitePaymentWayIDList;
@property(nonatomic) int paySettingsBitMap; // @synthesize paySettingsBitMap=_paySettingsBitMap;
@property(nonatomic) int subPayTypeBitMap; // @synthesize subPayTypeBitMap=_subPayTypeBitMap;
@property(nonatomic) int payTypeBitMap; // @synthesize payTypeBitMap=_payTypeBitMap;
@property(nonatomic) int subPayType; // @synthesize subPayType=_subPayType;
@property(nonatomic) int useEType; // @synthesize useEType=_useEType;
@property(nonatomic) int payType; // @synthesize payType=_payType;
@property(nonatomic) int busType; // @synthesize busType=_busType;
@property(copy, nonatomic) NSString *displayCurrency; // @synthesize displayCurrency=_displayCurrency;
@property(retain, nonatomic) PriceType *displayAmount; // @synthesize displayAmount=_displayAmount;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) PriceType *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *externalNo; // @synthesize externalNo=_externalNo;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *payRequestId; // @synthesize payRequestId=_payRequestId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

