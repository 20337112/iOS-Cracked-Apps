//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGCommentTableViewCellDelegate.h"
#import "KGViewControllerDelegate.h"
#import "KGWidgetMenuViewDelegate.h"
#import "KQInputViewDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WebViewWillRemoveDelegate.h"

@class KGCommentBaseSectionTableViewCell, KGDefaultNetErrorView, KGRefreshController, KGSongCommentInfo, KGSongDanmakuBLL, KGSongDanmakuBasicInfo, KGSongDanmakuListBLL, KGTableView, KGWidgetMenuView, KQInputView, NSArray, NSDictionary, NSMutableArray, NSString, PersonalInfoBlankViewController, SingleCommentInfo, SongInfo;

@interface KGSongDanmakuViewController : KGViewController <UITableViewDataSource, UITableViewDelegate, KGCommentTableViewCellDelegate, KGWidgetMenuViewDelegate, RefreshControlDelegate, KGViewControllerDelegate, KQInputViewDelegate, WebViewWillRemoveDelegate>
{
    _Bool _isLoading;
    _Bool _hasMore;
    long long _didSelectedMenuType;
    NSString *_sentContent;
    NSString *_senderUserID;
    _Bool _isRequestedCommentList;
    _Bool _isRequestedDanmakuDetail;
    _Bool _isBindPhone;
    _Bool _isExaming;
    SongInfo *_songInfo;
    long long _enter;
    SingleCommentInfo *_singleCommentInfo;
    KGTableView *_tableView;
    NSArray *_weightData;
    NSMutableArray *_listData;
    KGSongDanmakuListBLL *_songCommentBLL;
    KGSongDanmakuBLL *_songDanmakuBLL;
    KGRefreshController *_refreshController;
    KGWidgetMenuView *_widgetMenuView;
    PersonalInfoBlankViewController *_blankVC;
    KGDefaultNetErrorView *_retryAndErrorView;
    KQInputView *_inputView;
    NSString *_childrenid;
    KGCommentBaseSectionTableViewCell *_allCommonSectionHeader;
    KGSongCommentInfo *_currentCommentInfo;
    KGSongDanmakuBasicInfo *_currentDanmakuInfo;
    NSString *_sendCommentOfSongCommentID;
    long long _totalCount;
    NSDictionary *_didSelectedDic;
}

@property(nonatomic) _Bool isExaming; // @synthesize isExaming=_isExaming;
@property(nonatomic) _Bool isBindPhone; // @synthesize isBindPhone=_isBindPhone;
@property(nonatomic) _Bool isRequestedDanmakuDetail; // @synthesize isRequestedDanmakuDetail=_isRequestedDanmakuDetail;
@property(nonatomic) _Bool isRequestedCommentList; // @synthesize isRequestedCommentList=_isRequestedCommentList;
@property(retain, nonatomic) NSDictionary *didSelectedDic; // @synthesize didSelectedDic=_didSelectedDic;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSString *sendCommentOfSongCommentID; // @synthesize sendCommentOfSongCommentID=_sendCommentOfSongCommentID;
@property(retain, nonatomic) KGSongDanmakuBasicInfo *currentDanmakuInfo; // @synthesize currentDanmakuInfo=_currentDanmakuInfo;
@property(retain, nonatomic) KGSongCommentInfo *currentCommentInfo; // @synthesize currentCommentInfo=_currentCommentInfo;
@property(retain, nonatomic) KGCommentBaseSectionTableViewCell *allCommonSectionHeader; // @synthesize allCommonSectionHeader=_allCommonSectionHeader;
@property(copy, nonatomic) NSString *childrenid; // @synthesize childrenid=_childrenid;
@property(retain, nonatomic) KQInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) KGDefaultNetErrorView *retryAndErrorView; // @synthesize retryAndErrorView=_retryAndErrorView;
@property(retain, nonatomic) PersonalInfoBlankViewController *blankVC; // @synthesize blankVC=_blankVC;
@property(retain, nonatomic) KGWidgetMenuView *widgetMenuView; // @synthesize widgetMenuView=_widgetMenuView;
@property(retain, nonatomic) KGRefreshController *refreshController; // @synthesize refreshController=_refreshController;
@property(retain, nonatomic) KGSongDanmakuBLL *songDanmakuBLL; // @synthesize songDanmakuBLL=_songDanmakuBLL;
@property(retain, nonatomic) KGSongDanmakuListBLL *songCommentBLL; // @synthesize songCommentBLL=_songCommentBLL;
@property(retain, nonatomic) NSMutableArray *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) NSArray *weightData; // @synthesize weightData=_weightData;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SingleCommentInfo *singleCommentInfo; // @synthesize singleCommentInfo=_singleCommentInfo;
@property(nonatomic) long long enter; // @synthesize enter=_enter;
@property(copy, nonatomic) SongInfo *songInfo; // @synthesize songInfo=_songInfo;
- (void).cxx_destruct;
- (void)inputViewHeightChange:(double)arg1 andIsUp:(_Bool)arg2 andIsDown:(_Bool)arg3;
- (_Bool)inputViewShouldBeginEditing;
- (void)inputViewShouldEndEditingWithCurrentText:(id)arg1;
- (void)disableSendTextForMaxLimit;
- (void)sendText:(id)arg1;
- (void)loadingFinishAndRefresh;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)webViewWillRemove;
- (void)menuClickWithMenu:(id)arg1 infoObject:(id)arg2;
- (void)onClickedIcon_V:(id)arg1;
- (void)onClickedLikeButton:(id)arg1 cell:(id)arg2;
- (void)onClickedPicButton:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)p_showConfirmToPassTheTestAlertView;
- (_Bool)p_checkHadPassedTestToEditDanmu;
- (void)p_checkUserHadBindPhone;
- (void)p_showWithStatus:(id)arg1;
- (void)p_didSendComment:(id)arg1 withStatusToast:(id)arg2;
- (void)p_sendCommentHandle:(id)arg1 withResponse:(id)arg2;
- (id)p_danmakuInfoTransferToCommentInfo:(id)arg1;
- (id)p_createReportImage;
- (void)p_gotoVIPCenter:(int)arg1;
- (void)p_gotoReportViewWith:(id)arg1;
- (void)p_deleteCommentMainFun:(id)arg1;
- (void)p_deleteComment:(id)arg1;
- (id)p_removeDataWithSection:(long long)arg1 withCommonId:(id)arg2 withIsListData:(_Bool)arg3;
- (void)p_deleteCommentAfterRefresh:(id)arg1;
- (void)p_onChangeTheme:(id)arg1;
- (void)p_refreshLikeStateInData:(id)arg1 section:(unsigned long long)arg2;
- (void)p_refreshLikeStateInTableVeiwWith:(id)arg1 state:(_Bool)arg2;
- (void)p_hideKeyBoard:(id)arg1;
- (void)p_showKeyBoard:(id)arg1;
- (void)p_refreshWidgetMenuViewWithIndexPath:(id)arg1;
- (id)p_createMenusWith:(id)arg1;
- (void)p_userLogOut:(id)arg1;
- (void)p_userLogin:(id)arg1;
- (void)p_registerNotifycation;
- (void)p_gotoUserloginView;
- (void)p_sendContent:(id)arg1;
- (void)finishLoading;
- (void)p_requestData;
- (void)p_requestMessageDanmakuDetail;
- (void)p_requestDanmakuDetail;
- (void)p_requestDataWithOnlyWifiUsed;
- (void)p_requestAgain;
- (void)p_hiddenErrorView;
- (void)p_showErrorView;
- (void)p_initProperty;
- (void)KGUsingControllerState:(int)arg1;
- (long long)showPlayBarWay;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithSongDanmakuInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

