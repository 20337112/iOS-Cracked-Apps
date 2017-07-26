//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTLivechatChatUtility, CTLivechatGroupUtility, NSTimer;

@interface CTLivechatLib : NSObject
{
    NSTimer *timeOutAlert0;
    NSTimer *timeOutAlert30;
    NSTimer *timeOutAlert60;
    NSTimer *timeGetQueueInfo;
    NSTimer *timeGetClientMessage;
    CTLivechatChatUtility *_chatUtility;
    CTLivechatGroupUtility *_groupUtility;
    long long _requestCount;
    id <CTLivechatLibDelegate> _requestDelegate;
}

@property(nonatomic) __weak id <CTLivechatLibDelegate> requestDelegate; // @synthesize requestDelegate=_requestDelegate;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) CTLivechatGroupUtility *groupUtility; // @synthesize groupUtility=_groupUtility;
@property(retain, nonatomic) CTLivechatChatUtility *chatUtility; // @synthesize chatUtility=_chatUtility;
- (void).cxx_destruct;
- (id)getUrl:(id)arg1;
- (void)setHeader;
- (void)insertCells:(id)arg1;
- (void)insertCell:(id)arg1;
- (void)appendCells:(id)arg1;
- (void)appendCell:(id)arg1;
- (void)linkedServerCallBack;
- (void)goToOtherGroupCallBack;
- (void)goToServiceCallBack;
- (void)closeChatCallBack:(id)arg1;
- (void)loginSuccessCallBack:(id)arg1;
- (void)upLoadImgCallBack:(id)arg1;
- (void)closeChatByNetworkTimeout;
- (void)sendOrder:(id)arg1 completetoin:(CDUnknownBlockType)arg2;
- (void)upLoadImg:(id)arg1 completetoin:(CDUnknownBlockType)arg2;
- (void)clearTimeOutAlertTimer;
- (void)clearGetQueueInfoTimer;
- (void)clearGetClientMessageTimer;
- (void)clearAllTimer;
- (id)createMsgWithQuestionItems:(id)arg1;
- (id)createImageMsg:(id)arg1;
- (id)createHistoryMsgWithHtmlText:(id)arg1 isFromSelf:(_Bool)arg2;
- (id)createMsgWithHtmlText:(id)arg1 isFromSelf:(_Bool)arg2;
- (id)createMsgWithText:(id)arg1 isFromSelf:(_Bool)arg2;
- (void)doTimeOutExit;
- (void)timeOutAlertWithExit;
- (void)timeOutAlert;
- (void)setTimeOutAlert;
- (void)clientLeave:(id)arg1;
- (void)getQueueInfo;
- (void)received:(id)arg1;
- (void)saveScore:(id)arg1 checkedReasons:(id)arg2;
- (void)closeChat;
- (void)timeOut;
- (void)joinQueue:(long long)arg1;
- (void)getNegativeCommentReason;
- (void)robotRequest:(id)arg1 completetoin:(CDUnknownBlockType)arg2;
- (void)questionById:(id)arg1 completetoin:(CDUnknownBlockType)arg2;
- (void)robotRootMenuRequest;
- (void)getSelfServiceFAQ:(long long)arg1;
- (void)processWithGetCilentHistoryMessages:(id)arg1;
- (void)updateMaxMessageIDByGetClientMessage:(id)arg1;
- (void)processWithGetCilentMessages:(id)arg1;
- (void)getClientHistoryMessage:(CDUnknownBlockType)arg1;
- (void)getClientMessage;
- (void)getClientAllMessage;
- (void)sendClientMessage:(id)arg1 completetoin:(CDUnknownBlockType)arg2;
- (void)sendSleepWarningMessage:(id)arg1;
- (void)clientSendMessage:(id)arg1 completetoin:(CDUnknownBlockType)arg2;
- (void)gotoOtherGroup;
- (void)goToService:(long long)arg1;
- (void)getServerLeaveMessage:(long long)arg1;
- (void)chatLoginSuccess:(id)arg1;
- (void)reJoinQueue;
- (void)chatLogin:(CDUnknownBlockType)arg1;
- (void)initChat:(id)arg1;
- (void)libInit;

@end

