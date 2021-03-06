//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseViewController.h"

#import "NearbyFriendTableViewDelegate.h"

@class CUserData, ITTagInfo, NMFeedListLBSDenyView, NSMutableArray, NSString, NearbyFriendTableView, ODRefreshControl, QQNearByFilterModel, QQNobodyView, UIView;

@interface CommonITFriendsViewController : NMBaseViewController <NearbyFriendTableViewDelegate>
{
    NSMutableArray *_dataSource;
    CUserData *_userData;
    NearbyFriendTableView *_tableView;
    ODRefreshControl *_refreshControl;
    QQNearByFilterModel *_curFilterModel;
    NMFeedListLBSDenyView *_lbsDenyView;
    _Bool _reloading;
    _Bool _showAddInterestTip;
    _Bool _isListEnd;
    unsigned int _interestTagType;
    ITTagInfo *_currentTagInfo;
    QQNobodyView *_nobodyView;
    UIView *_addInterestTipView;
}

@property(nonatomic) _Bool isListEnd; // @synthesize isListEnd=_isListEnd;
@property(retain, nonatomic) UIView *addInterestTipView; // @synthesize addInterestTipView=_addInterestTipView;
@property(retain, nonatomic) QQNobodyView *nobodyView; // @synthesize nobodyView=_nobodyView;
@property(retain, nonatomic) NMFeedListLBSDenyView *lbsDenyView; // @synthesize lbsDenyView=_lbsDenyView;
@property(nonatomic) unsigned int interestTagType; // @synthesize interestTagType=_interestTagType;
@property(retain, nonatomic) ITTagInfo *currentTagInfo; // @synthesize currentTagInfo=_currentTagInfo;
- (void).cxx_destruct;
- (void)encounterV2RequestFail:(id)arg1;
- (void)encounterV2RequestSucc:(id)arg1;
- (void)enterForeground;
- (void)showToast:(id)arg1 mode:(long long)arg2;
- (void)addInterestNotification:(id)arg1;
- (void)saveTag:(id)arg1;
- (void)addInterestTag:(id)arg1;
- (void)doneLoadingTableViewData:(_Bool)arg1 failTips:(id)arg2;
- (void)refreshEncounterList;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (_Bool)getMoreEncounter;
- (_Bool)getMoreData:(id)arg1;
- (_Bool)refreshTableList:(id)arg1;
- (void)getCommonInterestEncounter:(id)arg1 filter:(id)arg2;
- (_Bool)isNoEncounter;
- (void)requestNewList;
- (void)viewDidLoad;
- (void)showAddInterestTagTip:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

