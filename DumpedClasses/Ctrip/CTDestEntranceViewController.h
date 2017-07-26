//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTAdvertisementViewDelegate.h"
#import "CTDestBrandStrengthenViewDelegate.h"
#import "CTDestHomePagePopViewDelegate.h"
#import "CTDestUserFeedBackViewDelegate.h"
#import "CTLocationDelegate.h"
#import "CTLoginWidgetDelegate.h"
#import "RefreshControlDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTDestCtripCommunityCell, CTDestEntranceCacheBean, CTDestEntranceCombinationCell, CTDestRecommendTravelCell, CTDestTravelsImagePickerController, CTDestUserFeedBackView, CTLocationClient, CTTableView, NSArray, NSMutableArray, NSMutableDictionary, NSString, RefreshControl, UIButton, UIImageView, UILabel, UIView;

@interface CTDestEntranceViewController : CTRootViewController <CTLoginWidgetDelegate, CTLocationDelegate, UIAlertViewDelegate, CTDestHomePagePopViewDelegate, CTAdvertisementViewDelegate, CTDestBrandStrengthenViewDelegate, RefreshControlDelegate, CTDestUserFeedBackViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool isFirstAppear;
    _Bool isFirstAppearHotelCoupon;
    _Bool isDragging;
    CTLocationClient *lastLocationClient;
    _Bool needShowUGC;
    int afterLoginMode;
    _Bool _showRightBarButtons;
    _Bool _showBrandTip;
    _Bool _isFirstIN;
    _Bool _hasRequestMain;
    int _showType;
    int _districtId;
    int _currentDistrictID;
    int _lastCtripCityType;
    int _alterDistrictId;
    int _pageIndex;
    NSString *_districtName;
    CTDestEntranceCacheBean *_cacheBean;
    long long _lastCtripCityId;
    CTTableView *_tableView;
    NSArray *_cellOrder;
    UIView *_topBarView;
    UIButton *_backButton;
    UIImageView *_topBgImageView;
    UILabel *_topTitleLabel;
    UIButton *_searchButton;
    UIButton *_bigSearchButton;
    UIButton *_rightTopButton;
    UIView *_shadowView;
    UIButton *_editButton;
    UIImageView *_dotIV;
    UIView *_popView;
    NSString *_requestToken;
    UIButton *_buttonFootPrint;
    RefreshControl *_refreshControl;
    CTDestUserFeedBackView *_feedBackView;
    UIButton *_pullUpBtn;
    NSString *_pageCode;
    CTDestEntranceCombinationCell *_cell;
    CTDestRecommendTravelCell *_recommendCell;
    NSMutableDictionary *_dic;
    NSMutableArray *_recommendArray;
    CTDestTravelsImagePickerController *_ipc;
    CTDestCtripCommunityCell *_ctripCell;
}

+ (void)gotoSetHomeCity:(int)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)handleGoToDistrict:(id)arg1 districtId:(int)arg2 isShow:(_Bool)arg3;
+ (void)gotoDistrictHelper:(id)arg1 districtId:(int)arg2 showBrandTip:(_Bool)arg3;
+ (void)gotoDistrictHelper:(id)arg1 districtId:(int)arg2;
@property(nonatomic) _Bool hasRequestMain; // @synthesize hasRequestMain=_hasRequestMain;
@property(retain, nonatomic) CTDestCtripCommunityCell *ctripCell; // @synthesize ctripCell=_ctripCell;
@property(retain, nonatomic) CTDestTravelsImagePickerController *ipc; // @synthesize ipc=_ipc;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NSMutableDictionary *dic; // @synthesize dic=_dic;
@property(retain, nonatomic) CTDestRecommendTravelCell *recommendCell; // @synthesize recommendCell=_recommendCell;
@property(retain, nonatomic) CTDestEntranceCombinationCell *cell; // @synthesize cell=_cell;
@property(nonatomic) _Bool isFirstIN; // @synthesize isFirstIN=_isFirstIN;
@property(retain, nonatomic) NSString *pageCode; // @synthesize pageCode=_pageCode;
@property(retain, nonatomic) UIButton *pullUpBtn; // @synthesize pullUpBtn=_pullUpBtn;
@property(retain, nonatomic) CTDestUserFeedBackView *feedBackView; // @synthesize feedBackView=_feedBackView;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) int alterDistrictId; // @synthesize alterDistrictId=_alterDistrictId;
@property(retain, nonatomic) UIButton *buttonFootPrint; // @synthesize buttonFootPrint=_buttonFootPrint;
@property(retain, nonatomic) NSString *requestToken; // @synthesize requestToken=_requestToken;
@property(retain, nonatomic) UIView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIImageView *dotIV; // @synthesize dotIV=_dotIV;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIButton *rightTopButton; // @synthesize rightTopButton=_rightTopButton;
@property(retain, nonatomic) UIButton *bigSearchButton; // @synthesize bigSearchButton=_bigSearchButton;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIImageView *topBgImageView; // @synthesize topBgImageView=_topBgImageView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) NSArray *cellOrder; // @synthesize cellOrder=_cellOrder;
@property(retain, nonatomic) CTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int lastCtripCityType; // @synthesize lastCtripCityType=_lastCtripCityType;
@property(nonatomic) long long lastCtripCityId; // @synthesize lastCtripCityId=_lastCtripCityId;
@property(retain, nonatomic) CTDestEntranceCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(nonatomic) int currentDistrictID; // @synthesize currentDistrictID=_currentDistrictID;
@property(nonatomic) _Bool showBrandTip; // @synthesize showBrandTip=_showBrandTip;
@property(retain, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(nonatomic) int districtId; // @synthesize districtId=_districtId;
@property(nonatomic) _Bool showRightBarButtons; // @synthesize showRightBarButtons=_showRightBarButtons;
@property(nonatomic) int showType; // @synthesize showType=_showType;
- (void).cxx_destruct;
- (void)afterLoginSuccess:(id)arg1;
- (void)handleLogCode:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showImagePicker;
- (void)popView:(id)arg1 selectedSubViewWithIndex:(long long)arg2;
- (void)doFadeUgc;
- (void)gotoAd:(id)arg1;
- (void)gotoDistrictId:(int)arg1;
- (void)gotoImageList;
- (void)gotoWeatherDetail;
- (void)gotoSightImageList;
- (void)gotoSelectDestination;
- (void)gotoTopSearch;
- (void)gotoSearch;
- (void)popViewStates:(_Bool)arg1;
- (void)rightButtonSelected:(id)arg1;
- (void)gotoShare;
- (void)gotoNewActivity;
- (void)gotoNewAsk;
- (void)gotoCommentsByOrderUGC;
- (void)gotoCommentsByPlus;
- (void)gotoCommentUGC:(int)arg1;
- (void)gotoComments;
- (void)gotoNewNotesByOrderUGC;
- (void)gotoNewNotesByPlus;
- (void)gotoNewNotes;
- (void)gotoNotes;
- (void)gotoNoteDetail:(id)arg1;
- (void)gotoJourney;
- (void)gotoGuideBookListZero;
- (void)gotoTravelDecisionMaking;
- (void)gotoSearchFromPage:(id)arg1 districtID:(int)arg2 anchorPoint:(id)arg3;
- (void)brandViewClose:(id)arg1;
- (void)mapButtonClicked;
- (void)showEditView:(id)arg1;
- (void)footPrintTapped:(id)arg1;
- (void)reloadRowForTableview:(id)arg1;
- (void)gotoOffLinePocket;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)bottomAdAdjustAnimation:(id)arg1;
- (void)advertisementView:(id)arg1 didFailLoadWithError:(id)arg2 andBusinessInfo:(id)arg3;
- (void)advertisementViewDidLoadSucceed:(id)arg1 withBusinessInfo:(id)arg2;
- (void)gotoSwitchDestination;
- (void)changeCity;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)handleLabelTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (_Bool)isShowingInTravel;
- (_Bool)isShowingDomicile;
- (void)requestSetDomicile:(int)arg1;
- (void)requestMoreDataWithTravelingGps:(int)arg1;
- (void)requestMoreDataWithGps;
- (void)renderPageWithResponse;
- (void)handleHomePageForUBT;
- (void)renderPageWithResponse:(_Bool)arg1;
- (void)requestBookData;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)getVLeaderInfo;
- (void)getRecommendTravel;
- (void)handleBrandTip;
- (void)refreshCacheBean;
- (void)requestMainData;
- (void)requestMainData:(_Bool)arg1;
- (void)requestDomicile;
- (void)syncHomeCity;
- (void)getBannerListRequest;
- (void)doRequestForBannerList:(unsigned long long)arg1;
- (void)showAlterView:(id)arg1;
- (void)newChangeCity;
- (void)locationFailSwitchCity;
- (void)locationFinished;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCtripCity:(id)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithGeoAddress:(id)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)backBarButtonClicked:(id)arg1;
- (void)updateNewActionDot;
- (void)handleShowDot;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)saveFootPrint;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pullDownToBackView;
- (void)dataADD;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)scrollToBottom;
- (void)showPullUpTip;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

