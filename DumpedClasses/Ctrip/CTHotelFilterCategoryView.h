//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTHotelFilterCategoryDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTableView, CityModel, NSDate, NSMutableArray, NSString;

@interface CTHotelFilterCategoryView : CTRootView <UITableViewDataSource, UITableViewDelegate, CTHotelFilterCategoryDelegate>
{
    NSMutableArray *expandList;
    _Bool _isShowHistory;
    int _mHotelType;
    id <CTHotelFilterTableViewDelegate> _delegate;
    CTTableView *_table;
    NSMutableArray *_dataList;
    CityModel *_mCityModel;
    NSDate *_checkInDate;
    NSDate *_checkOutDate;
}

@property(retain, nonatomic) NSDate *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(retain, nonatomic) NSDate *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(retain, nonatomic) CityModel *mCityModel; // @synthesize mCityModel=_mCityModel;
@property(nonatomic) int mHotelType; // @synthesize mHotelType=_mHotelType;
@property(nonatomic) _Bool isShowHistory; // @synthesize isShowHistory=_isShowHistory;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) CTTableView *table; // @synthesize table=_table;
@property(nonatomic) __weak id <CTHotelFilterTableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)getIndexAtDataList:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hotelFilterCategoryItemDidSel:(id)arg1 withItem:(id)arg2;
- (void)expandActionGroupType:(id)arg1 isExpanded:(_Bool)arg2;
- (void)moreActionGroupType:(id)arg1;
- (void)clearAction;
- (_Bool)checkIsCellChild:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (void)initBaseView;
- (id)initWithFrame:(struct CGRect)arg1 dataList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

