//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightCommonOrderConfirmViewController.h"

#import "CTFlightInvoiceTitleWidgetDelegate.h"

@class NSString;

@interface CTInlandFlightOrderConfirmViewController : CTFlightCommonOrderConfirmViewController <CTFlightInvoiceTitleWidgetDelegate>
{
}

- (void)updateCarUsePriceMark;
- (void)backBarButtonClicked:(id)arg1;
- (_Bool)hasInvoiceTitleOfOrderPage;
- (void)doWithOrderChangeResultFailWith:(id)arg1;
- (_Bool)doWithOrderChangeFrameFailWithErrorCode:(int)arg1 serverErrorCode:(int)arg2 errorMsg:(id)arg3;
- (void)goToSearchVC;
- (void)flightPayCancelAfterActionWithOrderId:(long long)arg1;
- (void)onPayThirdCancelWithPaymentInfo:(id)arg1;
- (_Bool)onPayFailedWithPaymentInfo:(id)arg1;
- (void)onPaySuccessWithPaymentInfo:(id)arg1;
- (void)sendGetPaymentInfoService;
- (void)goToSuccessPage;
- (void)selectInvoiceTitleModel:(id)arg1 andTitleWidget:(id)arg2;
- (void)readHistoryDeliveryInfo;
- (void)returnFirstTripMiddlePageAndRefresh;
- (void)returnFirstTripAndRefresh;
- (void)setupFlightOrderSummaryDataWithoriginalList:(id)arg1;
- (id)getFlightOrderFillViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)log4ViewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

