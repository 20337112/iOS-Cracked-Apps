//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PriceType;

@interface CTQTEInfoModel : NSObject
{
    _Bool isNeedQTESearchInOrderPage;
    _Bool isNeedQTESearchInPaymentPage;
    _Bool _isSeatSoldOut;
    _Bool _isPriceChange;
    int _bookQueryResult;
    int _currentQTEChangeType;
    PriceType *qTEPrice;
    NSString *qTESnNo;
    PriceType *qTETax;
    PriceType *qTEFuelCharge;
}

@property(nonatomic) _Bool isPriceChange; // @synthesize isPriceChange=_isPriceChange;
@property(nonatomic) _Bool isSeatSoldOut; // @synthesize isSeatSoldOut=_isSeatSoldOut;
@property(nonatomic) int currentQTEChangeType; // @synthesize currentQTEChangeType=_currentQTEChangeType;
@property(nonatomic) int bookQueryResult; // @synthesize bookQueryResult=_bookQueryResult;
@property(retain, nonatomic) PriceType *qTEFuelCharge; // @synthesize qTEFuelCharge;
@property(retain, nonatomic) PriceType *qTETax; // @synthesize qTETax;
@property(retain, nonatomic) NSString *qTESnNo; // @synthesize qTESnNo;
@property(retain, nonatomic) PriceType *qTEPrice; // @synthesize qTEPrice;
@property(nonatomic) _Bool isNeedQTESearchInPaymentPage; // @synthesize isNeedQTESearchInPaymentPage;
@property(nonatomic) _Bool isNeedQTESearchInOrderPage; // @synthesize isNeedQTESearchInOrderPage;
- (void).cxx_destruct;
- (id)getTotalPrice;
- (id)getTaxFuelPrice;
- (void)initCache;
- (void)clean;
- (id)init;

@end

