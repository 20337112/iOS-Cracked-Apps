//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTMyCtripHybridBackDelegate.h"
#import "CTSetUpViewControllerDelegate.h"

@class CTBottomTipView, CTMessageCenterManager, CTMyCtripCommonManager, CTMyCtripLoginOutTableView, CTMyCtripLoginTableView, CTMyCtripOrderManager, CTMyCtripPocketManager, CTMyCtripToolBarManager, CTMyCtripUserInfoManager, NSString;

@interface CTMyCtripRootViewController : CTRootViewController <CTSetUpViewControllerDelegate, CTMyCtripHybridBackDelegate>
{
    _Bool _needUpdate;
    _Bool _pocketIndicate;
    _Bool _isAppear;
    _Bool _hasPushed;
    _Bool _isLoginByWidget;
    CTBottomTipView *_bottomTipView;
    CTMyCtripLoginOutTableView *_loginOutTableView;
    CTMyCtripLoginTableView *_loginTableView;
    CTMyCtripCommonManager *_homeManager;
    CTMyCtripOrderManager *_orderManager;
    CTMyCtripPocketManager *_pocketManager;
    CTMessageCenterManager *_messageManager;
    CTMyCtripToolBarManager *_toolBarManager;
    CTMyCtripUserInfoManager *_userInfoManager;
}

@property(retain, nonatomic) CTMyCtripUserInfoManager *userInfoManager; // @synthesize userInfoManager=_userInfoManager;
@property(retain, nonatomic) CTMyCtripToolBarManager *toolBarManager; // @synthesize toolBarManager=_toolBarManager;
@property(retain, nonatomic) CTMessageCenterManager *messageManager; // @synthesize messageManager=_messageManager;
@property(retain, nonatomic) CTMyCtripPocketManager *pocketManager; // @synthesize pocketManager=_pocketManager;
@property(retain, nonatomic) CTMyCtripOrderManager *orderManager; // @synthesize orderManager=_orderManager;
@property(retain, nonatomic) CTMyCtripCommonManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) CTMyCtripLoginTableView *loginTableView; // @synthesize loginTableView=_loginTableView;
@property(retain, nonatomic) CTMyCtripLoginOutTableView *loginOutTableView; // @synthesize loginOutTableView=_loginOutTableView;
- (void).cxx_destruct;
- (int)applyNavigationBarStyle;
- (void)backFromHyrbidMyCtrip;
- (void)willReturnToSuperViewController:(id)arg1;
- (void)afterLoginSuccess:(id)arg1;
- (void)afterNoMemberSuccess:(id)arg1;
- (void)forbidDoubleClick;
- (void)openURL:(id)arg1 logCode:(id)arg2;
- (id)myRightUrl;
- (void)memberLogin;
- (void)clickToolBarButton:(long long)arg1;
- (void)clickTranslation;
- (void)clickMyRight_bottom;
- (void)clickMyRight;
- (void)clickMyInsurance;
- (void)clickFlightState;
- (void)clickOrderLeader;
- (void)clickOrderCalender;
- (void)clickOrderReminder;
- (void)clickSetting;
- (void)clickMore;
- (void)clickLifeTour;
- (void)clickCooperation;
- (void)clickMyHistory;
- (void)clickMyFav;
- (void)clickUsualInfo;
- (void)clickPocketIndicate;
- (void)clickTourCredit;
- (void)clickMyGroupBuying;
- (void)clickMyPoints;
- (void)clickMyCoupon;
- (void)clickMyWallet;
- (void)unLoggedCheckOrderBtnClicked;
- (void)clickMyCommunity;
- (void)clickMsgBtn;
- (void)toCommentClicked:(id)arg1;
- (void)toGoClicked:(id)arg1;
- (void)toPayClicked:(id)arg1;
- (void)allOrderClicked:(id)arg1;
- (void)clickLoginBtn;
- (void)clickScanBtn:(id)arg1;
- (void)clickToMyAccount;
- (void)clickloginOutTableViewCell:(id)arg1;
- (void)clickLoginTableViewCell:(id)arg1;
- (void)clickOROtherButtonWithType:(unsigned long long)arg1 itemModel:(id)arg2;
- (void)clickORActionsButtonWithMetricCode:(id)arg1 actionURL:(id)arg2;
- (void)clickToolBarCellWithItem:(long long)arg1;
- (void)clickTableViewHeaderClubBtn;
- (void)clickPocketBtnWithType:(unsigned long long)arg1;
- (void)clickOrderBtnWithType:(unsigned long long)arg1;
- (void)refreshDataAfterLoginSuccess;
- (void)netWorkChanged;
- (void)logoutFinished;
- (void)loginSuccess:(id)arg1;
- (void)initUnLoginCellClickEvents;
- (void)initButtonClickedEvents;
- (void)initUnloginEvents;
- (void)initLoginEvents;
- (void)getFinanceUserVerify:(id)arg1;
- (void)handleBottomBanner:(id)arg1;
- (void)handleTopBg:(id)arg1;
- (void)handleToolsData;
- (void)handlePocketData:(_Bool)arg1;
- (void)handleOrderReminderData;
- (void)handleOrderMenuData;
- (void)handleMessageTip;
- (void)handleMessageData;
- (void)handleUserInfoData;
- (void)refreshData;
- (void)initLoginManager;
- (void)initUpdateRedDot;
- (void)initAction;
- (void)initView;
- (void)initObserver;
- (void)dealloc;
- (void)initHybridIpad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

