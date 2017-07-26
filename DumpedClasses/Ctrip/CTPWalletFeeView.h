//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTPFloatingView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, TravelTicketPaymentModel, UITextView;

@interface CTPWalletFeeView : CTPFloatingView <UITableViewDataSource, UITableViewDelegate>
{
    TravelTicketPaymentModel *_rwyTicket;
    TravelTicketPaymentModel *_rwxTicket;
    NSString *_tipInfo;
    long long _walletFeeType;
    NSArray *_walletList;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSArray *walletList; // @synthesize walletList=_walletList;
@property(nonatomic) long long walletFeeType; // @synthesize walletFeeType=_walletFeeType;
@property(copy, nonatomic) NSString *tipInfo; // @synthesize tipInfo=_tipInfo;
@property(retain, nonatomic) TravelTicketPaymentModel *rwxTicket; // @synthesize rwxTicket=_rwxTicket;
@property(retain, nonatomic) TravelTicketPaymentModel *rwyTicket; // @synthesize rwyTicket=_rwyTicket;
- (void).cxx_destruct;
- (void)refreshNewLayout;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dimiss;
- (void)dimissAction:(id)arg1;
- (void)setupTopView;
- (void)setupBottomView;
- (void)setupTableView;
- (void)setupWalletFeeInfo;
- (id)initWithFrame:(struct CGRect)arg1 initViews:(_Bool)arg2 feeType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

