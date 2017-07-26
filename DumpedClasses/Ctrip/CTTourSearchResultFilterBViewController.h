//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CAAnimationDelegate.h"
#import "CTNetErrorDelegate.h"
#import "CTTourMenuViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTHTTPClient, CTNetErrorView, CTTourHomeHeaderView, CTTourSearchMenuView, CTTourSearchModel, CTTourSearchPosition, CTTourSearchRequestModel, CTTourSearchResultBViewController, CTTourSearchTicketHotelModel, CTTourSearchUpAdverCell, CTTourTouchView, NSArray, NSDictionary, NSMutableArray, NSString, UIButton, UIImage, UIImageView, UILabel, UITableView;

@interface CTTourSearchResultFilterBViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource, CAAnimationDelegate, CTTourMenuViewDelegate, CTNetErrorDelegate>
{
    double MenuViewHeight;
    CTTourHomeHeaderView *headerRefreshView;
    CTTourSearchUpAdverCell *adverCell;
    _Bool _isVIPUser;
    _Bool _isAdvClosed;
    _Bool _isRefresh;
    int _PageIndex;
    NSString *_Tab;
    NSString *_searchType;
    NSDictionary *_params;
    CTTourSearchPosition *_currentPoi;
    CTTourSearchResultBViewController *_parentVC;
    double _topMenuHeight;
    CTTourSearchMenuView *_topMenuView;
    UITableView *_tableView;
    CTTourTouchView *_bottomRightContainerView;
    UIButton *_historyButton;
    UIButton *_compareButton;
    UILabel *_compareNumLabel;
    UIImageView *_compareNumBgImage;
    CTNetErrorView *_loadingErrorView;
    NSMutableArray *_recommentProductsArray;
    NSMutableArray *_nomalProductsArray;
    CTTourSearchTicketHotelModel *_TicketHotelModel;
    NSArray *_recommendCitiesArray;
    CTTourSearchRequestModel *_request;
    CTTourSearchModel *_response;
    CTTourSearchModel *_responseForFilters;
    CTHTTPClient *_client;
    UIImage *_shareImage;
    NSMutableArray *_layers;
    CDUnknownBlockType _animationFinishBlock;
    UILabel *_noMoreLabel;
    NSArray *_localCompareArr;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSArray *localCompareArr; // @synthesize localCompareArr=_localCompareArr;
@property(retain, nonatomic) UILabel *noMoreLabel; // @synthesize noMoreLabel=_noMoreLabel;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) int PageIndex; // @synthesize PageIndex=_PageIndex;
@property(nonatomic) _Bool isAdvClosed; // @synthesize isAdvClosed=_isAdvClosed;
@property(copy, nonatomic) CDUnknownBlockType animationFinishBlock; // @synthesize animationFinishBlock=_animationFinishBlock;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(retain, nonatomic) CTHTTPClient *client; // @synthesize client=_client;
@property(retain, nonatomic) CTTourSearchModel *responseForFilters; // @synthesize responseForFilters=_responseForFilters;
@property(retain, nonatomic) CTTourSearchModel *response; // @synthesize response=_response;
@property(retain, nonatomic) CTTourSearchRequestModel *request; // @synthesize request=_request;
@property(nonatomic) _Bool isVIPUser; // @synthesize isVIPUser=_isVIPUser;
@property(copy, nonatomic) NSArray *recommendCitiesArray; // @synthesize recommendCitiesArray=_recommendCitiesArray;
@property(retain, nonatomic) CTTourSearchTicketHotelModel *TicketHotelModel; // @synthesize TicketHotelModel=_TicketHotelModel;
@property(retain, nonatomic) NSMutableArray *nomalProductsArray; // @synthesize nomalProductsArray=_nomalProductsArray;
@property(retain, nonatomic) NSMutableArray *recommentProductsArray; // @synthesize recommentProductsArray=_recommentProductsArray;
@property(retain, nonatomic) CTNetErrorView *loadingErrorView; // @synthesize loadingErrorView=_loadingErrorView;
@property(retain, nonatomic) UIImageView *compareNumBgImage; // @synthesize compareNumBgImage=_compareNumBgImage;
@property(retain, nonatomic) UILabel *compareNumLabel; // @synthesize compareNumLabel=_compareNumLabel;
@property(retain, nonatomic) UIButton *compareButton; // @synthesize compareButton=_compareButton;
@property(retain, nonatomic) UIButton *historyButton; // @synthesize historyButton=_historyButton;
@property(nonatomic) __weak CTTourTouchView *bottomRightContainerView; // @synthesize bottomRightContainerView=_bottomRightContainerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CTTourSearchMenuView *topMenuView; // @synthesize topMenuView=_topMenuView;
@property(nonatomic) double topMenuHeight; // @synthesize topMenuHeight=_topMenuHeight;
@property(nonatomic) __weak CTTourSearchResultBViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) CTTourSearchPosition *currentPoi; // @synthesize currentPoi=_currentPoi;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *Tab; // @synthesize Tab=_Tab;
- (void).cxx_destruct;
- (void)delegateRefreshBtnClicked:(id)arg1;
- (void)updateForMenuViewFilterButton:(_Bool)arg1;
- (void)refreshTopMenuView:(id)arg1;
- (void)closeSubMenuView;
- (void)openSubMenuView;
- (void)selectedPreferFilterButtonSuccess:(id)arg1;
- (void)selectedSubMenuSuccess:(id)arg1;
- (void)refreshTableView;
- (void)checkFilterButtonState;
- (void)openAdverAction;
- (void)gotoOtherCityPage:(id)arg1;
- (void)doTickHotelEnter;
- (void)didClickedHistoryButton:(id)arg1;
- (void)didClickedComparyButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadMore;
- (void)refreshData;
- (void)changeParamsWithItem:(id)arg1 type:(id)arg2 withDataType:(id)arg3;
- (void)getResponse;
- (void)initResponse:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)addHistoryButtonAndCompareButton;
- (void)viewDidLoad;
- (id)initWithParentViewController:(id)arg1 frame:(struct CGRect)arg2;
- (void)category_updateResponseForFiltersWithItem:(id)arg1 type:(id)arg2 isBigType:(_Bool)arg3;
- (void)didSelectedFilterItems:(id)arg1 isPrefer:(_Bool)arg2;
- (void)category_PreferFilterItemSelected:(id)arg1;
- (void)category_FilterItemSelected:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)category_startAnimationandView:(id)arg1 andRect:(struct CGRect)arg2 andFinisnRect:(struct CGPoint)arg3 andFinishBlock:(CDUnknownBlockType)arg4;
- (void)category_resetFilterMenuView;
- (void)category_refreshTitleAndFrame:(id)arg1;
- (void)category_switchHeaderViewWhenScroll;
- (void)category_updateFilterViewStatusFromResponseForFilters:(id)arg1;
- (void)category_refreshCompareButton;
- (void)category_showCompareButton:(_Bool)arg1;
- (void)showNoResultView;
- (void)category_showNoResultView:(_Bool)arg1;
- (void)category_showLoadingErrorView:(_Bool)arg1;
- (void)category_history_filter;
- (_Bool)filterButtonSelected;
- (long long)isfilter;
- (id)butype:(id)arg1;
- (id)tapName;
- (void)category_logCode:(id)arg1 withParams:(id)arg2;
- (_Bool)isHaveMore;
- (void)openUrlWithProduct:(id)arg1;
- (void)category_didSelectedProduct:(id)arg1 withCell:(id)arg2;
- (void)category_requestCreateMyTrace:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)category_requestCreateAggregateTrace:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)category_cancelFavoriteWithProduct:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)category_addProductToFavorite:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)doAddFavoriteWithButton:(id)arg1 withCell:(id)arg2;
- (void)category_addFavoriteAction:(id)arg1 withCell:(id)arg2;
- (void)saveTourCompareData:(id)arg1 success:(CDUnknownBlockType)arg2;
- (void)category_addCompareAction:(id)arg1 withCell:(id)arg2;
- (void)private_loadTraceWithProducts:(id)arg1;
- (void)private_loadFavoriteWithProducts:(id)arg1;
- (void)private_loadImageWithProducts:(id)arg1;
- (void)private_requestRecommendCities;
- (void)private_requestAggregateTrace;
- (void)private_requestMyTrace;
- (void)private_requestTicketHotelAccess;
- (void)private_requestFavoritedProducts:(id)arg1;
- (void)private_requestProductsDetail:(id)arg1;
- (void)category_requestWithAsynchronous:(id)arg1;
- (void)beginUpdateTableView:(id)arg1 withLogBlock:(CDUnknownBlockType)arg2;
- (void)beforeUpdateTableView:(id)arg1 withLogBlock:(CDUnknownBlockType)arg2;
- (void)category_updateTableView:(id)arg1 withLogBlock:(CDUnknownBlockType)arg2;
- (id)category_changeParamsWithItem:(id)arg1 type:(id)arg2 withDataType:(id)arg3 withRequest:(id)arg4;
- (void)category_requestAllFilters;
- (void)category_requestDataWithParamter:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 withLogBlock:(CDUnknownBlockType)arg3;
- (void)category_requestDataWithRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 withLogBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

