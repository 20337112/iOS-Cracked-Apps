//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NVMSeparatorView, UIImageView, UILabel;

@interface NVMRetailContainerToolBar : UIView
{
    unsigned long long _salesOrder;
    unsigned long long _priceOrder;
    CDUnknownBlockType _priceTapHandler;
    CDUnknownBlockType _salesTapHandler;
    CDUnknownBlockType _searchTapHandler;
    UIView *_searchView;
    UIImageView *_searchIconImageView;
    UILabel *_searchContentLabel;
    UIView *_salesOrderView;
    UILabel *_salesOrderLabel;
    UIView *_priceOrderView;
    UILabel *_priceOrderLabel;
    UIImageView *_priceOrderIconView;
    NVMSeparatorView *_seperatorView;
}

@property(retain, nonatomic) NVMSeparatorView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UIImageView *priceOrderIconView; // @synthesize priceOrderIconView=_priceOrderIconView;
@property(retain, nonatomic) UILabel *priceOrderLabel; // @synthesize priceOrderLabel=_priceOrderLabel;
@property(retain, nonatomic) UIView *priceOrderView; // @synthesize priceOrderView=_priceOrderView;
@property(retain, nonatomic) UILabel *salesOrderLabel; // @synthesize salesOrderLabel=_salesOrderLabel;
@property(retain, nonatomic) UIView *salesOrderView; // @synthesize salesOrderView=_salesOrderView;
@property(retain, nonatomic) UILabel *searchContentLabel; // @synthesize searchContentLabel=_searchContentLabel;
@property(retain, nonatomic) UIImageView *searchIconImageView; // @synthesize searchIconImageView=_searchIconImageView;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(copy, nonatomic) CDUnknownBlockType searchTapHandler; // @synthesize searchTapHandler=_searchTapHandler;
@property(copy, nonatomic) CDUnknownBlockType salesTapHandler; // @synthesize salesTapHandler=_salesTapHandler;
@property(copy, nonatomic) CDUnknownBlockType priceTapHandler; // @synthesize priceTapHandler=_priceTapHandler;
- (void).cxx_destruct;
- (void)configureWithStore:(id)arg1;
@property(nonatomic) _Bool priceOrderHidden;
@property(nonatomic) _Bool salesOrderHidden;
@property(nonatomic) unsigned long long priceOrder; // @synthesize priceOrder=_priceOrder;
@property(nonatomic) unsigned long long salesOrder; // @synthesize salesOrder=_salesOrder;
- (void)configurePriceOrderViewWithPriceOrder:(unsigned long long)arg1;
- (void)configureSalesOrderViewWithSalesOrder:(unsigned long long)arg1;
- (void)handlePriceViewTap;
- (void)handleSalesViewTap;
- (void)handleSearchViewTap;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

