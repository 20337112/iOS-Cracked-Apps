//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTPFloatingController.h"

@class CTPFastPayCacheBean, CTPFastPayWalletCell, CTPFastPayWalletSelectView, CTPFastPayWalletViewModel, NSMutableArray, NSMutableDictionary, PriceType;

@interface CTPFastPayWalletSelectController : CTPFloatingController
{
    int _minBaseValue;
    CTPFastPayCacheBean *_cacheBean;
    CTPFastPayWalletSelectView *_walletSelectView;
    NSMutableArray *_walletCells;
    NSMutableArray *_walletRowMethods;
    PriceType *_needToPay;
    PriceType *_stillNeedToPay;
    CTPFastPayWalletViewModel *_walletRWY;
    CTPFastPayWalletViewModel *_walletRWX;
    CTPFastPayWalletViewModel *_walletYE;
    CTPFastPayWalletCell *_cellRWY;
    CTPFastPayWalletCell *_cellRWX;
    CTPFastPayWalletCell *_cellYE;
    NSMutableDictionary *_usingStatusDic;
}

@property(retain, nonatomic) NSMutableDictionary *usingStatusDic; // @synthesize usingStatusDic=_usingStatusDic;
@property(retain, nonatomic) CTPFastPayWalletCell *cellYE; // @synthesize cellYE=_cellYE;
@property(retain, nonatomic) CTPFastPayWalletCell *cellRWX; // @synthesize cellRWX=_cellRWX;
@property(retain, nonatomic) CTPFastPayWalletCell *cellRWY; // @synthesize cellRWY=_cellRWY;
@property(retain, nonatomic) CTPFastPayWalletViewModel *walletYE; // @synthesize walletYE=_walletYE;
@property(retain, nonatomic) CTPFastPayWalletViewModel *walletRWX; // @synthesize walletRWX=_walletRWX;
@property(retain, nonatomic) CTPFastPayWalletViewModel *walletRWY; // @synthesize walletRWY=_walletRWY;
@property(retain, nonatomic) PriceType *stillNeedToPay; // @synthesize stillNeedToPay=_stillNeedToPay;
@property(retain, nonatomic) PriceType *needToPay; // @synthesize needToPay=_needToPay;
@property(retain, nonatomic) NSMutableArray *walletRowMethods; // @synthesize walletRowMethods=_walletRowMethods;
@property(retain, nonatomic) NSMutableArray *walletCells; // @synthesize walletCells=_walletCells;
@property(nonatomic) int minBaseValue; // @synthesize minBaseValue=_minBaseValue;
@property(nonatomic) __weak CTPFastPayWalletSelectView *walletSelectView; // @synthesize walletSelectView=_walletSelectView;
@property(nonatomic) __weak CTPFastPayCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
- (void).cxx_destruct;
- (long long)getWalletCellRows;
- (id)getTips;
- (void)backButtonAction;
- (struct CGRect)getFloatingTableContainerFrameWithData:(id)arg1;
- (void)viewDidLayout;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshWalletModel;
- (void)checkIsUsingChanged;
- (void)saveUsingStatus;
- (void)checkToDisableCell;
- (void)refreshWalletCells;
- (void)handlePaymentTypeSelect:(id)arg1;
- (id)ctp_WalletModel:(long long)arg1;
- (void)refreshLeftAmountView;
- (void)setupCells;
- (void)setupWalletModel;
- (void)commonInit;

@end

