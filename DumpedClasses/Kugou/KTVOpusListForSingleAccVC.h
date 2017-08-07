//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

#import "KFScrollPageManagerDelegate.h"
#import "KGPageViewProtocol.h"
#import "KGViewControllerDelegate.h"
#import "KTVSingleAccHeaderViewDelegate.h"
#import "KtvOpusListForAccVLLDelegate.h"
#import "KtvOpusListForWholeAccVLLDelegate.h"
#import "TabViewDelegate.h"

@class KFScrollPageManager, KGDefaultNetErrorView, KGDefaultTopView, KTVEmptyView, KTVOpusListForWholeAccVLL, KTVSingleAccHeaderView, KTVSingleAccView, KTV_NormalAccompanyHelper, KTV_SongInfo, KtvOpusListForAccVLL, KtvOpusListForSingleAccVM, NSString, TipsTabView;

@interface KTVOpusListForSingleAccVC : KTVViewController <KGViewControllerDelegate, TabViewDelegate, KtvOpusListForWholeAccVLLDelegate, KFScrollPageManagerDelegate, KGPageViewProtocol, KtvOpusListForAccVLLDelegate, KTVSingleAccHeaderViewDelegate>
{
    _Bool _isFromTheme;
    _Bool _firstDisplayChorus;
    _Bool _isP2PForbiddenStatus;
    int _themetype;
    KTV_SongInfo *_info;
    unsigned long long _pageType;
    unsigned long long _enterType;
    KTVSingleAccHeaderView *_jukeBoxView;
    KGDefaultTopView *_dtopView;
    KFScrollPageManager *_scrollContent;
    TipsTabView *_mtabView;
    KtvOpusListForSingleAccVM *_monthListVM;
    KtvOpusListForAccVLL *_monthListVLL;
    KTVSingleAccView *_monthListView;
    KtvOpusListForSingleAccVM *_wholeListVM;
    KTVOpusListForWholeAccVLL *_wholeListVLL;
    KTVSingleAccView *_wholeListView;
    KtvOpusListForSingleAccVM *_chorusListVM;
    KtvOpusListForAccVLL *_chorusListVLL;
    KTVSingleAccView *_chorusListView;
    long long _curentShowViewIndex;
    KGDefaultNetErrorView *_netErrorView;
    KTV_NormalAccompanyHelper *_normalAccHelper;
    KTVEmptyView *_emptyView;
    struct CGRect _viewFrame;
}

@property(retain, nonatomic) KTVEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool isP2PForbiddenStatus; // @synthesize isP2PForbiddenStatus=_isP2PForbiddenStatus;
@property(retain, nonatomic) KTV_NormalAccompanyHelper *normalAccHelper; // @synthesize normalAccHelper=_normalAccHelper;
@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(nonatomic) long long curentShowViewIndex; // @synthesize curentShowViewIndex=_curentShowViewIndex;
@property(retain, nonatomic) KTVSingleAccView *chorusListView; // @synthesize chorusListView=_chorusListView;
@property(retain, nonatomic) KtvOpusListForAccVLL *chorusListVLL; // @synthesize chorusListVLL=_chorusListVLL;
@property(retain, nonatomic) KtvOpusListForSingleAccVM *chorusListVM; // @synthesize chorusListVM=_chorusListVM;
@property(retain, nonatomic) KTVSingleAccView *wholeListView; // @synthesize wholeListView=_wholeListView;
@property(retain, nonatomic) KTVOpusListForWholeAccVLL *wholeListVLL; // @synthesize wholeListVLL=_wholeListVLL;
@property(retain, nonatomic) KtvOpusListForSingleAccVM *wholeListVM; // @synthesize wholeListVM=_wholeListVM;
@property(retain, nonatomic) KTVSingleAccView *monthListView; // @synthesize monthListView=_monthListView;
@property(retain, nonatomic) KtvOpusListForAccVLL *monthListVLL; // @synthesize monthListVLL=_monthListVLL;
@property(retain, nonatomic) KtvOpusListForSingleAccVM *monthListVM; // @synthesize monthListVM=_monthListVM;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(retain, nonatomic) TipsTabView *mtabView; // @synthesize mtabView=_mtabView;
@property(retain, nonatomic) KFScrollPageManager *scrollContent; // @synthesize scrollContent=_scrollContent;
@property(retain, nonatomic) KGDefaultTopView *dtopView; // @synthesize dtopView=_dtopView;
@property(retain, nonatomic) KTVSingleAccHeaderView *jukeBoxView; // @synthesize jukeBoxView=_jukeBoxView;
@property(nonatomic) _Bool firstDisplayChorus; // @synthesize firstDisplayChorus=_firstDisplayChorus;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) int themetype; // @synthesize themetype=_themetype;
@property(nonatomic) _Bool isFromTheme; // @synthesize isFromTheme=_isFromTheme;
@property(retain, nonatomic) KTV_SongInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)dismissEmpty;
- (void)showEmptyOnView:(id)arg1 withText:(id)arg2;
- (void)loadData;
- (void)dismissNetError;
- (void)showNetErrorOnView:(id)arg1;
- (long long)showPlayBarWay;
- (void)ktvOpusListForWholeAccVll:(id)arg1 showUserSpaceForUserId:(long long)arg2;
- (void)ktvOpusListForWholeAccVll:(id)arg1 showListenForOpusInfo:(id)arg2;
- (void)ktvOpusListForAccVll:(id)arg1 showUserSpaceForUserId:(long long)arg2;
- (void)ktvOpusListForAccVll:(id)arg1 showListenForOpusInfo:(id)arg2;
- (void)singleAccHeaderView:(id)arg1 didClickRightBtnWithType:(unsigned long long)arg2;
- (id)pageSrollview;
- (long long)currentPage;
- (long long)totalPageCount;
- (struct UIEdgeInsets)edgeInsetsForIndex:(long long)arg1 scrollPageManager:(id)arg2;
- (void)scrollPageManager:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (void)btnClicked:(long long)arg1;
- (void)goToRecord;
- (void)showChorusListView;
- (void)createChorusListView;
- (void)showWholeListView;
- (void)createWholeListView;
- (void)showMonthListView;
- (void)createMonthListView;
- (void)viewDidLoad;
- (void)KGUsingControllerState:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
