//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class CouponTicketInfoViewModel, HotelEntranceInformationModel, HotelInsurancesInformationViewmModel, HotelProxyViewModel, HotelTinyPriceViewModel, InvoiceInformationModel, NSMutableArray, NSString, OrderProcessInformationModel, RefundInfomationPackageModel;

@interface HotelOrderInfoViewModel : CTViewModel
{
    _Bool _isCanPrePay;
    _Bool _canAddInvoice;
    _Bool _isContainOrderDetail;
    _Bool _showTravelInsurance;
    _Bool _isUergentOrder;
    _Bool _isShowContractHotel;
    _Bool _hasOnlineSel;
    _Bool _isSupplementInvoice;
    _Bool _canContinuePayInvoice;
    _Bool _rePayInvoice;
    int _cityID;
    int _hotelID;
    int _roomQuantity;
    int _payStatus;
    NSString *_cityName;
    NSString *_breakfast;
    long long _orderID;
    long long _oriOrderID;
    NSString *_orderDate;
    NSString *_ExternalID;
    NSString *_hotelConfirmationNumber;
    NSString *_lateArrTime;
    NSString *_guaranteeInfo;
    NSString *_lastCancelTime;
    NSString *_passengers;
    NSString *_contactPhone;
    NSString *_countryCode;
    NSString *_contactEmail;
    NSString *_maskPhone;
    NSString *_maskEmail;
    NSString *_specialRemark;
    HotelTinyPriceViewModel *_backAmount;
    RefundInfomationPackageModel *_refundInformationPackageModel;
    NSString *_orderStatusRemark;
    OrderProcessInformationModel *_orderProcessModel;
    InvoiceInformationModel *_invoiceModel;
    NSMutableArray *_orderDispatchInfoList;
    NSString *_serviceProvider;
    NSString *_logisticID;
    HotelProxyViewModel *_proxyViewModel;
    NSString *_rebateToastRemark;
    NSString *_guaranteeMessage;
    NSMutableArray *_orderOptionalList;
    HotelInsurancesInformationViewmModel *_insurancesInfoModel;
    NSMutableArray *_refundRemarkList;
    NSMutableArray *_promotionRemarkList;
    NSString *_checkInDate;
    NSString *_checkOutDate;
    NSString *_hotelName;
    NSString *_hotelTelephone;
    NSMutableArray *_hotelTelephoneList;
    NSMutableArray *_hotelEmailList;
    NSString *_hotelAddress;
    NSString *_localAddress;
    NSMutableArray *_coordinateItemList;
    NSString *_selfServiceURL;
    NSString *_selfServiceTitle;
    NSString *_entranceSubTitle;
    NSString *_companyIMEntrance;
    NSString *_companyIMUrl;
    NSString *_prePayAlterMsg;
    CouponTicketInfoViewModel *_couponTicketModel;
    NSString *_guranteeThawMessage;
    NSMutableArray *_invoiceList;
    NSMutableArray *_invoiceDeliveryModeList;
    NSMutableArray *_invoiceTypeList;
    NSString *_lateTimeRemark;
    NSMutableArray *_travelInsurancesModelArray;
    NSString *_eInvoiceRemark;
    NSString *_eInvoiceAdditionMes;
    NSString *_payStatusDisplay;
    NSString *_payButtonDisplay;
    HotelEntranceInformationModel *_onlineSelEntrance;
    NSMutableArray *_invoiceDetailInfoList;
    long long _selectInvoiceIndex;
    long long _invoiceType;
    NSString *_rePurchaseDesc;
    HotelEntranceInformationModel *_continueInvoiceModel;
}

@property(nonatomic) _Bool rePayInvoice; // @synthesize rePayInvoice=_rePayInvoice;
@property(nonatomic) _Bool canContinuePayInvoice; // @synthesize canContinuePayInvoice=_canContinuePayInvoice;
@property(retain, nonatomic) HotelEntranceInformationModel *continueInvoiceModel; // @synthesize continueInvoiceModel=_continueInvoiceModel;
@property(nonatomic) _Bool isSupplementInvoice; // @synthesize isSupplementInvoice=_isSupplementInvoice;
@property(copy, nonatomic) NSString *rePurchaseDesc; // @synthesize rePurchaseDesc=_rePurchaseDesc;
@property(nonatomic) long long invoiceType; // @synthesize invoiceType=_invoiceType;
@property(nonatomic) long long selectInvoiceIndex; // @synthesize selectInvoiceIndex=_selectInvoiceIndex;
@property(retain, nonatomic) NSMutableArray *invoiceDetailInfoList; // @synthesize invoiceDetailInfoList=_invoiceDetailInfoList;
@property(nonatomic) _Bool hasOnlineSel; // @synthesize hasOnlineSel=_hasOnlineSel;
@property(retain, nonatomic) HotelEntranceInformationModel *onlineSelEntrance; // @synthesize onlineSelEntrance=_onlineSelEntrance;
@property(nonatomic) int payStatus; // @synthesize payStatus=_payStatus;
@property(retain, nonatomic) NSString *payButtonDisplay; // @synthesize payButtonDisplay=_payButtonDisplay;
@property(retain, nonatomic) NSString *payStatusDisplay; // @synthesize payStatusDisplay=_payStatusDisplay;
@property(nonatomic) _Bool isShowContractHotel; // @synthesize isShowContractHotel=_isShowContractHotel;
@property(nonatomic) _Bool isUergentOrder; // @synthesize isUergentOrder=_isUergentOrder;
@property(retain, nonatomic) NSString *eInvoiceAdditionMes; // @synthesize eInvoiceAdditionMes=_eInvoiceAdditionMes;
@property(retain, nonatomic) NSString *eInvoiceRemark; // @synthesize eInvoiceRemark=_eInvoiceRemark;
@property(retain, nonatomic) NSMutableArray *travelInsurancesModelArray; // @synthesize travelInsurancesModelArray=_travelInsurancesModelArray;
@property(nonatomic) _Bool showTravelInsurance; // @synthesize showTravelInsurance=_showTravelInsurance;
@property(copy, nonatomic) NSString *lateTimeRemark; // @synthesize lateTimeRemark=_lateTimeRemark;
@property(retain, nonatomic) NSMutableArray *invoiceTypeList; // @synthesize invoiceTypeList=_invoiceTypeList;
@property(nonatomic) _Bool isContainOrderDetail; // @synthesize isContainOrderDetail=_isContainOrderDetail;
@property(retain, nonatomic) NSMutableArray *invoiceDeliveryModeList; // @synthesize invoiceDeliveryModeList=_invoiceDeliveryModeList;
@property(retain, nonatomic) NSMutableArray *invoiceList; // @synthesize invoiceList=_invoiceList;
@property(nonatomic) _Bool canAddInvoice; // @synthesize canAddInvoice=_canAddInvoice;
@property(copy, nonatomic) NSString *guranteeThawMessage; // @synthesize guranteeThawMessage=_guranteeThawMessage;
@property(retain, nonatomic) CouponTicketInfoViewModel *couponTicketModel; // @synthesize couponTicketModel=_couponTicketModel;
@property(copy, nonatomic) NSString *prePayAlterMsg; // @synthesize prePayAlterMsg=_prePayAlterMsg;
@property(nonatomic) _Bool isCanPrePay; // @synthesize isCanPrePay=_isCanPrePay;
@property(copy, nonatomic) NSString *companyIMUrl; // @synthesize companyIMUrl=_companyIMUrl;
@property(copy, nonatomic) NSString *companyIMEntrance; // @synthesize companyIMEntrance=_companyIMEntrance;
@property(copy, nonatomic) NSString *entranceSubTitle; // @synthesize entranceSubTitle=_entranceSubTitle;
@property(copy, nonatomic) NSString *selfServiceTitle; // @synthesize selfServiceTitle=_selfServiceTitle;
@property(copy, nonatomic) NSString *selfServiceURL; // @synthesize selfServiceURL=_selfServiceURL;
@property(retain, nonatomic) NSMutableArray *coordinateItemList; // @synthesize coordinateItemList=_coordinateItemList;
@property(copy, nonatomic) NSString *localAddress; // @synthesize localAddress=_localAddress;
@property(copy, nonatomic) NSString *hotelAddress; // @synthesize hotelAddress=_hotelAddress;
@property(retain, nonatomic) NSMutableArray *hotelEmailList; // @synthesize hotelEmailList=_hotelEmailList;
@property(retain, nonatomic) NSMutableArray *hotelTelephoneList; // @synthesize hotelTelephoneList=_hotelTelephoneList;
@property(copy, nonatomic) NSString *hotelTelephone; // @synthesize hotelTelephone=_hotelTelephone;
@property(nonatomic) int roomQuantity; // @synthesize roomQuantity=_roomQuantity;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(nonatomic) int hotelID; // @synthesize hotelID=_hotelID;
@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(retain, nonatomic) NSMutableArray *promotionRemarkList; // @synthesize promotionRemarkList=_promotionRemarkList;
@property(retain, nonatomic) NSMutableArray *refundRemarkList; // @synthesize refundRemarkList=_refundRemarkList;
@property(retain, nonatomic) HotelInsurancesInformationViewmModel *insurancesInfoModel; // @synthesize insurancesInfoModel=_insurancesInfoModel;
@property(retain, nonatomic) NSMutableArray *orderOptionalList; // @synthesize orderOptionalList=_orderOptionalList;
@property(copy, nonatomic) NSString *guaranteeMessage; // @synthesize guaranteeMessage=_guaranteeMessage;
@property(copy, nonatomic) NSString *rebateToastRemark; // @synthesize rebateToastRemark=_rebateToastRemark;
@property(retain, nonatomic) HotelProxyViewModel *proxyViewModel; // @synthesize proxyViewModel=_proxyViewModel;
@property(retain, nonatomic) NSString *logisticID; // @synthesize logisticID=_logisticID;
@property(retain, nonatomic) NSString *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(retain, nonatomic) NSMutableArray *orderDispatchInfoList; // @synthesize orderDispatchInfoList=_orderDispatchInfoList;
@property(retain, nonatomic) InvoiceInformationModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(retain, nonatomic) OrderProcessInformationModel *orderProcessModel; // @synthesize orderProcessModel=_orderProcessModel;
@property(copy, nonatomic) NSString *orderStatusRemark; // @synthesize orderStatusRemark=_orderStatusRemark;
@property(retain, nonatomic) RefundInfomationPackageModel *refundInformationPackageModel; // @synthesize refundInformationPackageModel=_refundInformationPackageModel;
@property(retain, nonatomic) HotelTinyPriceViewModel *backAmount; // @synthesize backAmount=_backAmount;
@property(copy, nonatomic) NSString *specialRemark; // @synthesize specialRemark=_specialRemark;
@property(copy, nonatomic) NSString *maskEmail; // @synthesize maskEmail=_maskEmail;
@property(copy, nonatomic) NSString *maskPhone; // @synthesize maskPhone=_maskPhone;
@property(copy, nonatomic) NSString *contactEmail; // @synthesize contactEmail=_contactEmail;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(copy, nonatomic) NSString *passengers; // @synthesize passengers=_passengers;
@property(copy, nonatomic) NSString *lastCancelTime; // @synthesize lastCancelTime=_lastCancelTime;
@property(copy, nonatomic) NSString *guaranteeInfo; // @synthesize guaranteeInfo=_guaranteeInfo;
@property(copy, nonatomic) NSString *lateArrTime; // @synthesize lateArrTime=_lateArrTime;
@property(retain, nonatomic) NSString *hotelConfirmationNumber; // @synthesize hotelConfirmationNumber=_hotelConfirmationNumber;
@property(copy, nonatomic) NSString *ExternalID; // @synthesize ExternalID=_ExternalID;
@property(copy, nonatomic) NSString *orderDate; // @synthesize orderDate=_orderDate;
@property(nonatomic) long long oriOrderID; // @synthesize oriOrderID=_oriOrderID;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(copy, nonatomic) NSString *breakfast; // @synthesize breakfast=_breakfast;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (void)setInfoByResponse:(id)arg1;
- (void)clean;
- (id)init;

@end

