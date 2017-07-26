//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class CTFlightNewCProductSupplementViewModel, CTFlightOrderConfirmCarUseViewModel, NSMutableDictionary, NSString, PriceType;

@interface CTFlightOrderConfirmXProductViewModel : CTViewModel
{
    _Bool _isSwitchOpen;
    _Bool _isForce;
    _Bool _isOriginSwitchOpen;
    _Bool _needReadHistory;
    int _productType;
    int _productSubType;
    int _unitType;
    int _productSaleType;
    NSString *_productDispalyName;
    NSString *_productSecondName;
    NSString *_flightIconUrl;
    NSString *_productPriceContent;
    NSString *_productSaleTipInfo;
    NSString *_buyFirstSegmentProductTip;
    NSString *_buySecondSegmentProductTip;
    NSString *_productDesc;
    CTFlightNewCProductSupplementViewModel *_flightNewCProductModel;
    NSString *_productName;
    NSString *_productID;
    NSString *_productCode;
    NSString *_priceReMark;
    PriceType *_productPrice;
    unsigned long long _minCount;
    unsigned long long _maxCount;
    NSMutableDictionary *_productNoteDic;
    CTFlightOrderConfirmCarUseViewModel *_flightCaruseModel;
    NSString *_timeConfigString;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSString *timeConfigString; // @synthesize timeConfigString=_timeConfigString;
@property(nonatomic) int productSaleType; // @synthesize productSaleType=_productSaleType;
@property(retain, nonatomic) CTFlightOrderConfirmCarUseViewModel *flightCaruseModel; // @synthesize flightCaruseModel=_flightCaruseModel;
@property(retain, nonatomic) NSMutableDictionary *productNoteDic; // @synthesize productNoteDic=_productNoteDic;
@property(nonatomic) _Bool needReadHistory; // @synthesize needReadHistory=_needReadHistory;
@property(nonatomic) int unitType; // @synthesize unitType=_unitType;
@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) unsigned long long minCount; // @synthesize minCount=_minCount;
@property(retain, nonatomic) PriceType *productPrice; // @synthesize productPrice=_productPrice;
@property(nonatomic) int productSubType; // @synthesize productSubType=_productSubType;
@property(nonatomic) int productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *priceReMark; // @synthesize priceReMark=_priceReMark;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) CTFlightNewCProductSupplementViewModel *flightNewCProductModel; // @synthesize flightNewCProductModel=_flightNewCProductModel;
@property(nonatomic) _Bool isOriginSwitchOpen; // @synthesize isOriginSwitchOpen=_isOriginSwitchOpen;
@property(nonatomic) _Bool isForce; // @synthesize isForce=_isForce;
@property(nonatomic) _Bool isSwitchOpen; // @synthesize isSwitchOpen=_isSwitchOpen;
@property(copy, nonatomic) NSString *productDesc; // @synthesize productDesc=_productDesc;
@property(copy, nonatomic) NSString *buySecondSegmentProductTip; // @synthesize buySecondSegmentProductTip=_buySecondSegmentProductTip;
@property(copy, nonatomic) NSString *buyFirstSegmentProductTip; // @synthesize buyFirstSegmentProductTip=_buyFirstSegmentProductTip;
@property(copy, nonatomic) NSString *productSaleTipInfo; // @synthesize productSaleTipInfo=_productSaleTipInfo;
@property(copy, nonatomic) NSString *productPriceContent; // @synthesize productPriceContent=_productPriceContent;
@property(copy, nonatomic) NSString *flightIconUrl; // @synthesize flightIconUrl=_flightIconUrl;
@property(copy, nonatomic) NSString *productSecondName; // @synthesize productSecondName=_productSecondName;
@property(copy, nonatomic) NSString *productDispalyName; // @synthesize productDispalyName=_productDispalyName;
- (void).cxx_destruct;
- (_Bool)isFLightXproductSameDataWithData:(id)arg1;
- (id)getFlightPriceDetailShowName;
- (id)getFlightSaleBySegmentProductName;
- (void)setFlightSaleBySegmentProductName;
- (void)setFlightStytleBSelectDispalyTitleWithExtendType:(int)arg1 caruserSegmentMode:(id)arg2;
- (void)doWithXProductPriceWithSaleType:(int)arg1 model:(id)arg2;
- (void)setStatusWithPricemark;
- (void)cancelProductSelect;
- (void)setCTypeProductDisplayModel;
- (_Bool)isUserCarProductSelected;
- (id)getProductTotalPrice;
- (id)getPackageNoteModelListWithType:(int)arg1 isInland:(_Bool)arg2 interBabyCount:(int)arg3;
- (void)resetProductNameWithDepartCity:(id)arg1 arriveCity:(id)arg2;
- (void)setUpWithProtoModel:(id)arg1 departCity:(id)arg2 arriveCity:(id)arg3 noteList:(id)arg4;
- (void)setUpWithProtoModel:(id)arg1 productSaleType:(int)arg2 departCity:(id)arg3 arriveCity:(id)arg4;
- (void)initData;
- (id)init;

@end

