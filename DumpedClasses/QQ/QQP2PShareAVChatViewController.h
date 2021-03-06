//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupAVChatViewController.h"

#import "QUIActionSheetDelegate.h"

@class NSString, NSTimer, QUIActionSheet, UIView;

@interface QQP2PShareAVChatViewController : QQGroupAVChatViewController <QUIActionSheetDelegate>
{
    UIView *_closeView;
    QUIActionSheet *_replyMsgActionSheet;
    NSString *_textToSend;
    int _avChatState;
    _Bool _needRequestRemoteVideo;
    NSTimer *_switchMultiTimer;
    _Bool _autoAccept;
}

@property(nonatomic) _Bool autoAccept; // @synthesize autoAccept=_autoAccept;
- (void)NetChangeSuc;
- (id)getChatWindow;
- (_Bool)isRecvRequestShowing;
- (_Bool)handleNetState;
- (void)onAddMem;
- (int)getAVChatState;
- (int)chatType;
- (void)onTelephoneStated;
- (void)onEnterBackGround;
- (void)onUpStageFail:(id)arg1;
- (void)onUpStageSuccess:(id)arg1;
- (void)checkVideoMemCount;
- (void)checkAutoRequestAllView;
- (void)requestRemoteVideo;
- (void)requestAllView;
- (void)checkVideoAbility;
- (void)onResume;
- (void)onSuspend;
- (void)showControlPanel:(_Bool)arg1;
- (void)onVideoShowPanelMessageBarPressDelegate;
- (void)receiveMessage;
- (void)onFriendDeleted:(id)arg1;
- (void)onForceOffLine;
- (void)quitOnRunning;
- (void)delayCloseSession;
- (void)closedByNetErr:(id)arg1;
- (void)switchToMutiAVTimeOut;
- (void)recvCloseTOMulAVChat;
- (void)closedOnRunning;
- (void)onMemberPPTOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberPPTIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberScreenIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoOut:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberVideoIn:(int)arg1 inMemArray:(id)arg2;
- (void)onMemberGetOut:(int)arg1 withGroupID:(long long)arg2 inMemArray:(id)arg3;
- (void)changeToVideo;
- (void)changeToAudio;
- (void)showTipsChange:(id)arg1;
- (void)onTipsViewShowTime:(id)arg1;
- (void)onTipsViewShowTips:(id)arg1;
- (void)onControlPanelChangeToVideo:(_Bool)arg1;
- (void)closeGroupAudioSession;
- (void)onCloseAction;
- (void)onSmallViewTouch:(id)arg1 withType:(int)arg2;
- (_Bool)isPanelHideable;
- (void)onSelfInRoomOnmain;
- (void)onReturnAction;
- (void)onToggleCameraAction;
- (void)onCameraAction;
- (void)onMuteAction;
- (void)onSpeakerAction;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onReplyMsgAction;
- (void)onRejectAction;
- (void)OnAccept;
- (void)onAcceptAction;
- (void)CloseWhenNotified;
- (long long)numberOfItemInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCollectionViewLayout;
- (void)initMemberCollectionView;
- (void)initControlPanel;
- (void)initShowPanel;
- (void)dealloc;
- (void)initNotification;
- (void)unInitInterface;
- (void)initInterfaceWithNoClick;
- (void)initInterface;
- (id)initWithRelationType:(int)arg1 businessType:(int)arg2 relationID:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

