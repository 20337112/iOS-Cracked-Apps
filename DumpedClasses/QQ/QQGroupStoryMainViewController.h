//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "MQZoneTableFootLoadingViewDelegate.h"
#import "QQMoreOptionTableViewCellScrollStateDelegate.h"
#import "QQStoryFeedCellDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "TBStoryInteractiveDelegate.h"
#import "TBStoryMgrDelegate.h"
#import "TBVideoServiceDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CIImage, MQZoneTableFootLoadingView, NSDate, NSIndexPath, NSMutableArray, NSString, NSTimer, ODRefreshControl, TBRspGetUserGuide, TBStoryCommentFaceTextView, TBStoryMgr, UIImageView, UILabel, UILongPressGestureRecognizer, UITableView, UIView;

@interface QQGroupStoryMainViewController : QQViewController <QQMoreOptionTableViewCellScrollStateDelegate, UIGestureRecognizerDelegate, TBStoryInteractiveDelegate, UITableViewDataSource, UITableViewDelegate, MQZoneTableFootLoadingViewDelegate, TBStoryMgrDelegate, TBVideoServiceDelegate, TBBizNetworkLogicDelegate, QQStoryFeedCellDelegate>
{
    _Bool _isScrollToEnd;
    UITableView *_tableView;
    _Bool _isDragToBack;
    NSIndexPath *_leftSwipCellIndex;
    UILongPressGestureRecognizer *_touchGestureRecognizer;
    TBStoryMgr *_dataMgr;
    NSMutableArray *_userArr;
    NSMutableArray *_feedListArr;
    NSMutableArray *_dataSource;
    NSTimer *_timer;
    long long _loadingCount;
    _Bool _hasDisappearOnce;
    _Bool _hasDisplayedLocalGuide;
    _Bool _hasEnteredDeliverGuide;
    TBRspGetUserGuide *_deliverGuideModel;
    TBStoryCommentFaceTextView *_faceTextView;
    long long _feedListSection;
    _Bool _isBottomCoverLayerStyleChanging;
    ODRefreshControl *_refreshControl;
    MQZoneTableFootLoadingView *_loadMoreFooter;
    UIImageView *_backgroundBubble;
    UILabel *_caiDanTips;
    NSString *_videoDir;
    CIImage *_maskImage;
    _Bool _isRefreshDone;
    _Bool _hasPreloadCaptureSession;
    unsigned long long _refreshTime;
    unsigned long long _expiredArrCount;
    _Bool _isAllFriendListEnd;
    _Bool _needShowLoadingIndicator;
    UIView *_blankView;
    UIImageView *_blankIcon;
    UILabel *_blankLabel;
    long long _entryType;
    double _clickTime;
    NSDate *_lastFreshDate;
}

@property(retain, nonatomic) NSDate *lastFreshDate; // @synthesize lastFreshDate=_lastFreshDate;
@property(nonatomic) double clickTime; // @synthesize clickTime=_clickTime;
@property(nonatomic) long long entryType; // @synthesize entryType=_entryType;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)storyVideoCaptureViewControllerDidCancel:(id)arg1;
- (void)resetTableViewOffset;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)getInteractiveCellHeight:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)getModelFromDataSource:(id)arg1;
- (void)onCompleteFeedList:(_Bool)arg1;
- (void)onRefreshData;
- (void)onHandleError:(id)arg1;
- (void)isHiddenLoadingMore:(_Bool)arg1;
- (void)checkLoadingMoreStatus;
- (void)stopLoadingWithErr:(_Bool)arg1;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
- (void)analyseISScrollToEnd:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stopRefreshCtrlAnimate:(_Bool)arg1 isShowFailedTips:(_Bool)arg2;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (int)getRedState;
- (void)sortVideoDataList:(id)arg1;
- (void)loadMoreData;
- (void)insertEmptyPageSectionData;
- (void)prepareVideoCellInfo:(id)arg1;
- (void)insertFeedListSectionData;
- (void)reloadData;
- (void)failedToConnect;
- (void)refreshLoadingDataReport;
- (id)getLastFreshDate;
- (void)sendRefreshDataRequest;
- (void)onBatchRemarkReadFailListDone;
- (void)refreshDataRequest;
- (void)networkDataReport;
- (void)autoRefresh;
- (void)doPrepareDisplayData;
- (void)doInitData;
- (void)doInitUI;
- (void)dealloc;
- (_Bool)isSupportRightDragToGoBack;
- (void)onDragToGoBackEnable:(id)arg1;
- (void)scrollStoryViewToTop;
- (void)removeObserver;
- (void)addObserver;
- (void)pushDiscovery:(id)arg1;
- (void)addDiscoverEntry;
- (void)showBlankViewIfNeeded;
- (_Bool)hasNoData;
- (void)initBlankView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadAppearance;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setNavigationBarTheme;
- (id)initWithEntryType:(long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)resetScrollToLeftState;
- (void)removeTouchGesture;
- (void)leftSwipTouchDown;
- (void)resetLeftSwipGesture;
- (_Bool)isMessageTabInLeftSwipState;
- (void)tableView:(id)arg1 scrollBackToCenterStateInRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;
- (_Bool)p_checkNetworkIsWifi;
- (id)allMyStoryVideoTime:(id)arg1 onlyHasDoodle:(_Bool)arg2;
- (void)onActionTapSelfHeader;
- (void)didKeyBoardShowWithFeedID:(id)arg1 relativeY:(double)arg2 boardHeight:(double)arg3;
- (void)shouldShowKeyBoardWithDelegate:(id)arg1 commentInfo:(id)arg2;
- (void)shouldReloadData:(id)arg1;
- (void)onRequestMoreVideoCover:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)getCommentIndexAtTableView:(id)arg1;
- (struct CGRect)getTableViewCellRectOnScreen:(id)arg1;
- (double)getOffsetCompareToMidScreen:(struct CGRect)arg1;
- (void)beginAutoPlayingVideo;
- (void)stopAutoPlayingVideo;
- (void)didSelectedMemoryCell:(id)arg1 withIndexPath:(id)arg2;
- (void)didSelectVideoCell:(id)arg1 withIndexPath:(id)arg2;
- (void)didSelectedCellWithIndexPath:(id)arg1 withModel:(id)arg2;
- (id)tableView:(id)arg1 selfExpandCellForModel:(id)arg2;
- (id)tableView:(id)arg1 storyTitleCellForModel:(id)arg2;
- (id)tableView:(id)arg1 videoCellForModel:(id)arg2;
- (id)tableView:(id)arg1 timeCellForModel:(id)arg2;
- (id)tableView:(id)arg1 feedCellForModel:(id)arg2;
- (id)tableView:(id)arg1 memoryCellForModel:(id)arg2;
- (id)tableView:(id)arg1 storyEmptyPageCellForModel:(id)arg2;
- (id)tableView:(id)arg1 interactiveCellForModel:(id)arg2;
- (id)createTableViewCell:(id)arg1 WithModel:(id)arg2;
- (struct CGRect)getCommentRectAtTableView:(id)arg1;
- (id)getFeedInfoIndexAtTableView:(id)arg1;
- (id)getCommentIndexInFeedList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

