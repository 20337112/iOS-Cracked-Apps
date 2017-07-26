//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CTHotelInvoiceItemView, CTInvoiceTitleManagerCacheBean, CustomerUserInvoiceModel, NSString, UIButton, UILabel;

@interface CTHotelInvoiceTitleEditViewController : CTRootViewController <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    _Bool _isNewCreated;
    _Bool _isOverseaReceipt;
    CustomerUserInvoiceModel *_invoiceTitleStrModel;
    CTInvoiceTitleManagerCacheBean *_cacheBean;
    id <CTHotelInvoiceTitleEditViewControllerDelegate> _delegate;
    long long _type;
    CTHotelInvoiceItemView *_invoiceItemView;
    CTHotelInvoiceItemView *_invoiceTitleView;
    CTHotelInvoiceItemView *_invoiceTaxNumView;
    UIButton *_btnDelete;
    UILabel *_lbTaxNumInfo;
}

@property(retain, nonatomic) UILabel *lbTaxNumInfo; // @synthesize lbTaxNumInfo=_lbTaxNumInfo;
@property(retain, nonatomic) UIButton *btnDelete; // @synthesize btnDelete=_btnDelete;
@property(retain, nonatomic) CTHotelInvoiceItemView *invoiceTaxNumView; // @synthesize invoiceTaxNumView=_invoiceTaxNumView;
@property(retain, nonatomic) CTHotelInvoiceItemView *invoiceTitleView; // @synthesize invoiceTitleView=_invoiceTitleView;
@property(retain, nonatomic) CTHotelInvoiceItemView *invoiceItemView; // @synthesize invoiceItemView=_invoiceItemView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <CTHotelInvoiceTitleEditViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isOverseaReceipt; // @synthesize isOverseaReceipt=_isOverseaReceipt;
@property(nonatomic) _Bool isNewCreated; // @synthesize isNewCreated=_isNewCreated;
@property(retain, nonatomic) CTInvoiceTitleManagerCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(retain, nonatomic) CustomerUserInvoiceModel *invoiceTitleStrModel; // @synthesize invoiceTitleStrModel=_invoiceTitleStrModel;
- (void).cxx_destruct;
- (void)sendEditTitleService:(id)arg1;
- (void)sendAddTitleService:(id)arg1;
- (void)pressCompleteBtn;
- (void)switchInvoiceType;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)deleteAction;
- (void)initView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tapContentView:(id)arg1;
- (void)viewDidLoad;
- (void)pressBackBtn;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

