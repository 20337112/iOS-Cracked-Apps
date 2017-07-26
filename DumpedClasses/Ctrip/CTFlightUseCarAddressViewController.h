//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightRootViewController.h"

#import "CTLocationDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTFlightOrderConfirmCarUseSegmentInfoViewModel, CTLocationClient, FlightUseCarAddressInformationModel, NSLayoutConstraint, NSMutableArray, NSString, UITableView, UITextField, UIView;

@interface CTFlightUseCarAddressViewController : CTFlightRootViewController <CTLocationDelegate, UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    _Bool _isInSearchMode;
    _Bool _hasCurrentPosition;
    id <CTFlightUseCarAddressViewControllerDelegate> _mDelegate;
    CTFlightOrderConfirmCarUseSegmentInfoViewModel *_useCarSegmentModel;
    UITextField *_searchTextField;
    NSLayoutConstraint *_searchBarBottomLineHeight;
    UITableView *_mTableView;
    UIView *_headerView;
    NSMutableArray *_historyAddressList;
    NSMutableArray *_searchAddressList;
    FlightUseCarAddressInformationModel *_currentPositionModel;
    NSMutableArray *_sectionList;
    CTLocationClient *_locationClient;
    NSLayoutConstraint *_searchTextFieldLeft;
    NSLayoutConstraint *_searchTextFieldRight;
    NSLayoutConstraint *_headViewTop;
}

@property(retain, nonatomic) NSLayoutConstraint *headViewTop; // @synthesize headViewTop=_headViewTop;
@property(retain, nonatomic) NSLayoutConstraint *searchTextFieldRight; // @synthesize searchTextFieldRight=_searchTextFieldRight;
@property(retain, nonatomic) NSLayoutConstraint *searchTextFieldLeft; // @synthesize searchTextFieldLeft=_searchTextFieldLeft;
@property(retain, nonatomic) CTLocationClient *locationClient; // @synthesize locationClient=_locationClient;
@property(retain, nonatomic) NSMutableArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) FlightUseCarAddressInformationModel *currentPositionModel; // @synthesize currentPositionModel=_currentPositionModel;
@property(nonatomic) _Bool hasCurrentPosition; // @synthesize hasCurrentPosition=_hasCurrentPosition;
@property(nonatomic) _Bool isInSearchMode; // @synthesize isInSearchMode=_isInSearchMode;
@property(retain, nonatomic) NSMutableArray *searchAddressList; // @synthesize searchAddressList=_searchAddressList;
@property(retain, nonatomic) NSMutableArray *historyAddressList; // @synthesize historyAddressList=_historyAddressList;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(nonatomic) __weak NSLayoutConstraint *searchBarBottomLineHeight; // @synthesize searchBarBottomLineHeight=_searchBarBottomLineHeight;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) CTFlightOrderConfirmCarUseSegmentInfoViewModel *useCarSegmentModel; // @synthesize useCarSegmentModel=_useCarSegmentModel;
@property(nonatomic) __weak id <CTFlightUseCarAddressViewControllerDelegate> mDelegate; // @synthesize mDelegate=_mDelegate;
- (void).cxx_destruct;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithGeoAddress:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)backBarButtonClicked:(id)arg1;
- (void)onTapCleanHistoryList:(id)arg1;
- (void)onSearchTextFieldValueChanged:(id)arg1;
- (void)onTapClearSearchTextField:(id)arg1;
- (void)didSelectAddressViewModel:(id)arg1;
- (void)sendSearchAddressRequest;
- (void)resetSectionList;
- (void)loadCurrentPosition;
- (void)loadHistoryAddress;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initHeadViewWithABTest;
- (void)initView;
- (void)initSearchBar;
- (void)initData;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

