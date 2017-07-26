//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTHotelMainFilterDelegate.h"
#import "CTNetErrorDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTableView, CityModel, NSMutableArray, NSString;

@interface CTHotelAssociatedView : CTRootView <CTHotelMainFilterDelegate, CTNetErrorDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isDisplayExtraInfo;
    _Bool _isShowSearchEngine;
    int _mHotelType;
    CityModel *_mCityModel;
    NSMutableArray *_resultList;
    CTTableView *_tblView;
    id <associateViewClickedDelegate> _delegate;
    NSString *_keyWord;
}

@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(nonatomic) __weak id <associateViewClickedDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTTableView *tblView; // @synthesize tblView=_tblView;
@property(nonatomic) _Bool isShowSearchEngine; // @synthesize isShowSearchEngine=_isShowSearchEngine;
@property(nonatomic) _Bool isDisplayExtraInfo; // @synthesize isDisplayExtraInfo=_isDisplayExtraInfo;
@property(retain, nonatomic) NSMutableArray *resultList; // @synthesize resultList=_resultList;
@property(nonatomic) int mHotelType; // @synthesize mHotelType=_mHotelType;
@property(retain, nonatomic) CityModel *mCityModel; // @synthesize mCityModel=_mCityModel;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)getIsHighCellByDataType:(id)arg1 displayStr:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)getHotelSearchViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2 dataList:(id)arg3;
- (id)getGoogleLogoCell:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView:(struct CGRect)arg1;
- (void)initBaseData;
- (void)initBaseView;
- (id)initAssociatViewWithFrame:(struct CGRect)arg1 dataList:(id)arg2 searchKey:(id)arg3 hotelType:(int)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

