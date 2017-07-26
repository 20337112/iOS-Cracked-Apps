//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTHotelOptionRefundHeadView, CTHotelOrderDetailCacheBean, NSString, UITableView;

@interface CTHotelOptionRefundDetailViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *mTableView;
    CTHotelOrderDetailCacheBean *cacheBean;
    CTHotelOptionRefundHeadView *headView;
    _Bool isShowLoading;
    id <CTHotelWalletPaymentDelegate> _delegate;
}

@property(nonatomic) __weak id <CTHotelWalletPaymentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setCtripCacheBean:(id)arg1;
- (void)cancelClick:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

