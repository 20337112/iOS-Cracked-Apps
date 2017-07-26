//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSDate, NSMutableArray, NSString, PriceType;

@interface CTTrainQiangPiaoOrderChangeCacheBean : CTCacheBean
{
    _Bool _isOpenAllDayJL;
    _Bool _isTurnOnAllDayJL;
    _Bool _isOpenAcceptRecTrainJL;
    _Bool _isTurnOnAcceptRecTrainJL;
    _Bool _isSaleDelivery;
    _Bool _isDeliveryTicket;
    _Bool _isSaveDelivery;
    _Bool _isRealTimePay;
    _Bool _isFastPay;
    int _deliveryID;
    int _deliveryAreaID;
    int _changeAcceptInfoResult;
    int _payTypeList;
    int _subPayTypeList;
    int _grabType;
    long long _orderId;
    NSMutableArray *_trainOrderDetailItemList;
    NSString *_jLAllTrainNumbers;
    NSString *_jLAllSeatNames;
    PriceType *_priceOfTrain;
    NSString *_lastPayDateTime;
    NSMutableArray *_trainStationList;
    NSMutableArray *_arrayQiangPiaoBeiXuanCheCi;
    NSMutableArray *_arrayQiangPiaoBeiXuanZuoXi;
    PriceType *_topSeatPrice;
    NSString *_ticketCheats;
    NSString *_openAllDayJLTitle;
    NSString *_openAllDayJLDesc;
    NSString *_openAcceptRecTrainJLTitle;
    NSString *_openAcceptRecTrainJLDesc;
    NSString *_deliveryTitle;
    NSString *_deliverySubTitle;
    NSString *_deliveryFullAddress;
    NSDate *_qiangPiaoShiXiaoDate;
    NSString *_qiangPiaoRecommandDateTime;
    NSString *_qiangPiaoBeginDateTime;
    NSString *_qiangPiaoEndDateTime;
    long long _qiangPiaoKeepTime;
    NSString *_deliveryReceiverName;
    NSString *_deliveryAddress;
    NSString *_deliveryAreaDesc;
    PriceType *_deliveryFee;
    PriceType *_deliveryServiceFee;
    NSString *_deliveryHint;
    NSString *_deliverTips;
    NSMutableArray *_trainAppendProductList;
    NSString *_changeAcceptInfoResultMessage;
    long long _originalOrderId;
    long long _changeOrderId;
    PriceType *_changeOrderAmount;
    NSString *_paymentRequestId;
    NSString *_allDepartStation;
    NSString *_allArriveStation;
    NSString *_timeLine;
    NSString *_trainTypes;
    NSString *_trainTypesShowText;
    NSString *_jLAlternativeDate;
    NSMutableArray *_arrayAddedDates;
    NSMutableArray *_arrayAllTrainsForTimeSpecial;
    NSMutableArray *_arrayAllSeatsForTimeSpecial;
}

@property(retain, nonatomic) NSMutableArray *arrayAllSeatsForTimeSpecial; // @synthesize arrayAllSeatsForTimeSpecial=_arrayAllSeatsForTimeSpecial;
@property(retain, nonatomic) NSMutableArray *arrayAllTrainsForTimeSpecial; // @synthesize arrayAllTrainsForTimeSpecial=_arrayAllTrainsForTimeSpecial;
@property(retain, nonatomic) NSMutableArray *arrayAddedDates; // @synthesize arrayAddedDates=_arrayAddedDates;
@property(copy, nonatomic) NSString *jLAlternativeDate; // @synthesize jLAlternativeDate=_jLAlternativeDate;
@property(copy, nonatomic) NSString *trainTypesShowText; // @synthesize trainTypesShowText=_trainTypesShowText;
@property(copy, nonatomic) NSString *trainTypes; // @synthesize trainTypes=_trainTypes;
@property(copy, nonatomic) NSString *timeLine; // @synthesize timeLine=_timeLine;
@property(copy, nonatomic) NSString *allArriveStation; // @synthesize allArriveStation=_allArriveStation;
@property(copy, nonatomic) NSString *allDepartStation; // @synthesize allDepartStation=_allDepartStation;
@property(nonatomic) int grabType; // @synthesize grabType=_grabType;
@property(nonatomic) _Bool isFastPay; // @synthesize isFastPay=_isFastPay;
@property(nonatomic) int subPayTypeList; // @synthesize subPayTypeList=_subPayTypeList;
@property(nonatomic) int payTypeList; // @synthesize payTypeList=_payTypeList;
@property(copy, nonatomic) NSString *paymentRequestId; // @synthesize paymentRequestId=_paymentRequestId;
@property(nonatomic) _Bool isRealTimePay; // @synthesize isRealTimePay=_isRealTimePay;
@property(retain, nonatomic) PriceType *changeOrderAmount; // @synthesize changeOrderAmount=_changeOrderAmount;
@property(nonatomic) long long changeOrderId; // @synthesize changeOrderId=_changeOrderId;
@property(nonatomic) long long originalOrderId; // @synthesize originalOrderId=_originalOrderId;
@property(copy, nonatomic) NSString *changeAcceptInfoResultMessage; // @synthesize changeAcceptInfoResultMessage=_changeAcceptInfoResultMessage;
@property(nonatomic) int changeAcceptInfoResult; // @synthesize changeAcceptInfoResult=_changeAcceptInfoResult;
@property(retain, nonatomic) NSMutableArray *trainAppendProductList; // @synthesize trainAppendProductList=_trainAppendProductList;
@property(copy, nonatomic) NSString *deliverTips; // @synthesize deliverTips=_deliverTips;
@property(copy, nonatomic) NSString *deliveryHint; // @synthesize deliveryHint=_deliveryHint;
@property(retain, nonatomic) PriceType *deliveryServiceFee; // @synthesize deliveryServiceFee=_deliveryServiceFee;
@property(retain, nonatomic) PriceType *deliveryFee; // @synthesize deliveryFee=_deliveryFee;
@property(copy, nonatomic) NSString *deliveryAreaDesc; // @synthesize deliveryAreaDesc=_deliveryAreaDesc;
@property(nonatomic) _Bool isSaveDelivery; // @synthesize isSaveDelivery=_isSaveDelivery;
@property(nonatomic) int deliveryAreaID; // @synthesize deliveryAreaID=_deliveryAreaID;
@property(copy, nonatomic) NSString *deliveryAddress; // @synthesize deliveryAddress=_deliveryAddress;
@property(copy, nonatomic) NSString *deliveryReceiverName; // @synthesize deliveryReceiverName=_deliveryReceiverName;
@property(nonatomic) int deliveryID; // @synthesize deliveryID=_deliveryID;
@property(nonatomic) _Bool isDeliveryTicket; // @synthesize isDeliveryTicket=_isDeliveryTicket;
@property(nonatomic) _Bool isSaleDelivery; // @synthesize isSaleDelivery=_isSaleDelivery;
@property(nonatomic, getter=qiangPiaoKeepTime) long long qiangPiaoKeepTime; // @synthesize qiangPiaoKeepTime=_qiangPiaoKeepTime;
@property(copy, nonatomic) NSString *qiangPiaoEndDateTime; // @synthesize qiangPiaoEndDateTime=_qiangPiaoEndDateTime;
@property(copy, nonatomic) NSString *qiangPiaoBeginDateTime; // @synthesize qiangPiaoBeginDateTime=_qiangPiaoBeginDateTime;
@property(copy, nonatomic) NSString *qiangPiaoRecommandDateTime; // @synthesize qiangPiaoRecommandDateTime=_qiangPiaoRecommandDateTime;
@property(retain, nonatomic) NSDate *qiangPiaoShiXiaoDate; // @synthesize qiangPiaoShiXiaoDate=_qiangPiaoShiXiaoDate;
@property(retain, nonatomic) NSString *deliveryFullAddress; // @synthesize deliveryFullAddress=_deliveryFullAddress;
@property(retain, nonatomic) NSString *deliverySubTitle; // @synthesize deliverySubTitle=_deliverySubTitle;
@property(retain, nonatomic) NSString *deliveryTitle; // @synthesize deliveryTitle=_deliveryTitle;
@property(nonatomic) _Bool isTurnOnAcceptRecTrainJL; // @synthesize isTurnOnAcceptRecTrainJL=_isTurnOnAcceptRecTrainJL;
@property(copy, nonatomic) NSString *openAcceptRecTrainJLDesc; // @synthesize openAcceptRecTrainJLDesc=_openAcceptRecTrainJLDesc;
@property(copy, nonatomic) NSString *openAcceptRecTrainJLTitle; // @synthesize openAcceptRecTrainJLTitle=_openAcceptRecTrainJLTitle;
@property(nonatomic) _Bool isOpenAcceptRecTrainJL; // @synthesize isOpenAcceptRecTrainJL=_isOpenAcceptRecTrainJL;
@property(nonatomic) _Bool isTurnOnAllDayJL; // @synthesize isTurnOnAllDayJL=_isTurnOnAllDayJL;
@property(copy, nonatomic) NSString *openAllDayJLDesc; // @synthesize openAllDayJLDesc=_openAllDayJLDesc;
@property(copy, nonatomic) NSString *openAllDayJLTitle; // @synthesize openAllDayJLTitle=_openAllDayJLTitle;
@property(nonatomic) _Bool isOpenAllDayJL; // @synthesize isOpenAllDayJL=_isOpenAllDayJL;
@property(copy, nonatomic) NSString *ticketCheats; // @synthesize ticketCheats=_ticketCheats;
@property(retain, nonatomic, getter=topSeatPrice) PriceType *topSeatPrice; // @synthesize topSeatPrice=_topSeatPrice;
@property(retain, nonatomic) NSMutableArray *arrayQiangPiaoBeiXuanZuoXi; // @synthesize arrayQiangPiaoBeiXuanZuoXi=_arrayQiangPiaoBeiXuanZuoXi;
@property(retain, nonatomic) NSMutableArray *arrayQiangPiaoBeiXuanCheCi; // @synthesize arrayQiangPiaoBeiXuanCheCi=_arrayQiangPiaoBeiXuanCheCi;
@property(retain, nonatomic) NSMutableArray *trainStationList; // @synthesize trainStationList=_trainStationList;
@property(copy, nonatomic) NSString *lastPayDateTime; // @synthesize lastPayDateTime=_lastPayDateTime;
@property(copy, nonatomic) PriceType *priceOfTrain; // @synthesize priceOfTrain=_priceOfTrain;
@property(copy, nonatomic) NSString *jLAllSeatNames; // @synthesize jLAllSeatNames=_jLAllSeatNames;
@property(copy, nonatomic) NSString *jLAllTrainNumbers; // @synthesize jLAllTrainNumbers=_jLAllTrainNumbers;
@property(retain, nonatomic) NSMutableArray *trainOrderDetailItemList; // @synthesize trainOrderDetailItemList=_trainOrderDetailItemList;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)getDepartDateTimeWithFormat:(id)arg1;
- (long long)trainAppendTotalPrice;
- (id)allSeatsFromList:(id)arg1;
- (id)allSeats;
- (void)cacheDeliveryInfo:(id)arg1;
- (_Bool)isDeliveryInfoOk;
- (id)deliverySavedKey;
- (id)init;

@end

