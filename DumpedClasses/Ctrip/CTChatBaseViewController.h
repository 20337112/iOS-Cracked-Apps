//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTChatRootViewController.h"

@class CTChatBar, CTTableView, UIBarButtonItem;

@interface CTChatBaseViewController : CTChatRootViewController
{
    _Bool _loadingMoreMessage;
    _Bool _allowScrollToBottom;
    CTChatBar *_chatBar;
    CTTableView *_tableView;
    UIBarButtonItem *_goGroup;
    UIBarButtonItem *_goToolBox;
    UIBarButtonItem *_gohome;
    UIBarButtonItem *_goSetting;
    UIBarButtonItem *_msgList;
}

@property(nonatomic) _Bool allowScrollToBottom; // @synthesize allowScrollToBottom=_allowScrollToBottom;
@property(retain, nonatomic) UIBarButtonItem *msgList; // @synthesize msgList=_msgList;
@property(retain, nonatomic) UIBarButtonItem *goSetting; // @synthesize goSetting=_goSetting;
@property(retain, nonatomic) UIBarButtonItem *gohome; // @synthesize gohome=_gohome;
@property(retain, nonatomic) UIBarButtonItem *goToolBox; // @synthesize goToolBox=_goToolBox;
@property(retain, nonatomic) UIBarButtonItem *goGroup; // @synthesize goGroup=_goGroup;
@property(retain, nonatomic) CTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CTChatBar *chatBar; // @synthesize chatBar=_chatBar;
@property(nonatomic) _Bool loadingMoreMessage; // @synthesize loadingMoreMessage=_loadingMoreMessage;
- (void).cxx_destruct;
- (void)goToUserSetting:(id)arg1;
- (void)goToLatest:(id)arg1;
- (void)goToHome:(id)arg1;
- (void)goToToolBox:(id)arg1;
- (void)gotoGroupSetting:(id)arg1;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (void)creatTableView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

