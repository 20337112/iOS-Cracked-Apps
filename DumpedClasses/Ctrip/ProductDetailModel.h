//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class CarRentalRecommendDetailModel, NSString, PriceType;

@interface ProductDetailModel : CTBusinessBean
{
    int _tagFlagBitMap;
    long long _productID;
    NSString *_productName;
    NSString *_productDesc;
    PriceType *_salePrice;
    NSString *_salePriceCurrency;
    PriceType *_oriPrice;
    NSString *_origPriceCurrency;
    PriceType *_totalPrice;
    NSString *_totalPriceCurrency;
    PriceType *_savePrice;
    NSString *_savePriceCurrency;
    NSString *_person;
    NSString *_distanceRemark;
    NSString *_hRatingOverAll;
    NSString *_zoneName;
    NSString *_productImage;
    NSString *_sortType;
    NSString *_cashRefundRate;
    NSString *_productDetailUrl;
    CarRentalRecommendDetailModel *_carRentalInfoModel;
}

@property(retain, nonatomic) CarRentalRecommendDetailModel *carRentalInfoModel; // @synthesize carRentalInfoModel=_carRentalInfoModel;
@property(nonatomic) int tagFlagBitMap; // @synthesize tagFlagBitMap=_tagFlagBitMap;
@property(copy, nonatomic) NSString *productDetailUrl; // @synthesize productDetailUrl=_productDetailUrl;
@property(copy, nonatomic) NSString *cashRefundRate; // @synthesize cashRefundRate=_cashRefundRate;
@property(copy, nonatomic) NSString *sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) NSString *productImage; // @synthesize productImage=_productImage;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(copy, nonatomic) NSString *hRatingOverAll; // @synthesize hRatingOverAll=_hRatingOverAll;
@property(copy, nonatomic) NSString *distanceRemark; // @synthesize distanceRemark=_distanceRemark;
@property(copy, nonatomic) NSString *person; // @synthesize person=_person;
@property(copy, nonatomic) NSString *savePriceCurrency; // @synthesize savePriceCurrency=_savePriceCurrency;
@property(retain, nonatomic) PriceType *savePrice; // @synthesize savePrice=_savePrice;
@property(copy, nonatomic) NSString *totalPriceCurrency; // @synthesize totalPriceCurrency=_totalPriceCurrency;
@property(retain, nonatomic) PriceType *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(copy, nonatomic) NSString *origPriceCurrency; // @synthesize origPriceCurrency=_origPriceCurrency;
@property(retain, nonatomic) PriceType *oriPrice; // @synthesize oriPrice=_oriPrice;
@property(copy, nonatomic) NSString *salePriceCurrency; // @synthesize salePriceCurrency=_salePriceCurrency;
@property(retain, nonatomic) PriceType *salePrice; // @synthesize salePrice=_salePrice;
@property(copy, nonatomic) NSString *productDesc; // @synthesize productDesc=_productDesc;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) long long productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

