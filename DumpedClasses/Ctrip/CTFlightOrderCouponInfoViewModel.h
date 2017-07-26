//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class CTFlightAdditionalCouponViewModel, NSArray, NSMutableArray, NSString;

@interface CTFlightOrderCouponInfoViewModel : CTViewModel
{
    _Bool _supportAdditionalCoupon;
    _Bool _hasUseCarCoupon;
    _Bool _isAutoBindingCoupon;
    int _result;
    NSArray *_additionalCouponList;
    NSArray *_originalCouponList;
    CTFlightAdditionalCouponViewModel *_selectedAdditionalCoupon;
    CTFlightAdditionalCouponViewModel *_optimalCoupon;
    NSString *_lastInputAdditionalCouponCode;
    NSString *_useCarCouponHintMsg;
    NSMutableArray *_extentInfoList;
    NSString *_xUseCouponURL;
    NSString *_xCanUseCouponURL;
    NSString *_resultMessage;
}

@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) _Bool isAutoBindingCoupon; // @synthesize isAutoBindingCoupon=_isAutoBindingCoupon;
@property(copy, nonatomic) NSString *xCanUseCouponURL; // @synthesize xCanUseCouponURL=_xCanUseCouponURL;
@property(copy, nonatomic) NSString *xUseCouponURL; // @synthesize xUseCouponURL=_xUseCouponURL;
@property(retain, nonatomic) NSMutableArray *extentInfoList; // @synthesize extentInfoList=_extentInfoList;
@property(copy, nonatomic) NSString *useCarCouponHintMsg; // @synthesize useCarCouponHintMsg=_useCarCouponHintMsg;
@property(nonatomic) _Bool hasUseCarCoupon; // @synthesize hasUseCarCoupon=_hasUseCarCoupon;
@property(copy, nonatomic) NSString *lastInputAdditionalCouponCode; // @synthesize lastInputAdditionalCouponCode=_lastInputAdditionalCouponCode;
@property(retain, nonatomic) CTFlightAdditionalCouponViewModel *optimalCoupon; // @synthesize optimalCoupon=_optimalCoupon;
@property(retain, nonatomic) CTFlightAdditionalCouponViewModel *selectedAdditionalCoupon; // @synthesize selectedAdditionalCoupon=_selectedAdditionalCoupon;
@property(retain, nonatomic) NSArray *originalCouponList; // @synthesize originalCouponList=_originalCouponList;
@property(retain, nonatomic) NSArray *additionalCouponList; // @synthesize additionalCouponList=_additionalCouponList;
@property(nonatomic) _Bool supportAdditionalCoupon; // @synthesize supportAdditionalCoupon=_supportAdditionalCoupon;
- (void).cxx_destruct;
- (_Bool)selectedCouponIsOptimalCoupon;
- (_Bool)checkCouponWithPrice:(id)arg1 coupon:(id)arg2 swichers:(id)arg3;
- (void)sortCouponForFistTime:(double)arg1 swichers:(id)arg2 prices:(id)arg3;
- (void)copyToOriginalCouponList;
- (void)disposeTicketCoupon:(id)arg1 totalPrice:(double)arg2 enableArray:(id)arg3 disableArray:(id)arg4;
- (long long)getValidCouponCount:(id)arg1;
- (id)groupEnabledCouponList:(id)arg1;
- (void)groupCouponList:(id)arg1 totalPrice:(double)arg2 swichers:(id)arg3;
- (void)groupCouponList:(double)arg1 swichers:(id)arg2;
- (void)sortCouponList:(id)arg1 totalPrice:(double)arg2 swichers:(id)arg3 isCalOptimal:(_Bool)arg4;
- (void)sortCouponList:(double)arg1 swichers:(id)arg2 isCalOptimal:(_Bool)arg3;
- (void)insertCouponToList:(id)arg1;
- (id)init;

@end

