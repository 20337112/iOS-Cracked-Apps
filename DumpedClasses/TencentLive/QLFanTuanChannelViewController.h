//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLChannelRecmdViewCtl.h"

#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLThumbCreationUserInfo.h"
#import "UIWXLoginViewButtonDelegate.h"

@class NSIndexPath, NSString, QLFantuanChannelHeaderView, UIImageView;

@interface QLFanTuanChannelViewController : QLChannelRecmdViewCtl <QLThumbCreationUserInfo, UIWXLoginViewButtonDelegate, QLJumpObjectOpenUrlDelegate>
{
    _Bool _forceToLoadData;
    NSString *_channelID;
    UIImageView *_imgHeadShadow;
    QLFantuanChannelHeaderView *_topView;
}

+ (_Bool)OpenJumpUrlWithobject;
+ (id)defaultQLChannelObj;
@property(retain, nonatomic) QLFantuanChannelHeaderView *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool forceToLoadData; // @synthesize forceToLoadData=_forceToLoadData;
@property(retain, nonatomic) UIImageView *imgHeadShadow; // @synthesize imgHeadShadow=_imgHeadShadow;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (unsigned long long)getViewPageTypeWithObject:(id)arg1;
- (void)didTapCustomBtnWithTitle:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)dragReload:(_Bool)arg1;
- (void)ClickLogin:(id)arg1;
- (void)ClickWXLogin:(id)arg1;
- (_Bool)shouldHideSearchEntryWhenAppear;
- (void)followActionFinish:(id)arg1;
- (void)loginChange:(id)arg1;
- (id)pageDescription;
- (_Bool)responseDragbackAtScreenPoint:(struct CGPoint)arg1;
- (void)retryDown:(id)arg1;
- (void)searBarViewSearchBtnClicked:(id)arg1;
- (void)resetCategoryCode;
- (Class)thumbsMgrClass;
- (_Bool)shouldReportShowUpCells;
- (void)enterPage;
- (_Bool)navigationBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithChannelListItem:(id)arg1;
- (id)initWithChannelId:(id)arg1;
- (void)dealloc;
- (void)refreshObjIndexpathStartFrom:(id)arg1;
- (void)fb_Inner_EraseViewCellWithIndexPath:(id)arg1;
- (void)fb_EraseObjectWithFanId:(id)arg1;
- (void)fb_EraseViewCellWithIndexPath:(id)arg1;
@property(retain, nonatomic) NSIndexPath *fb_IndexPath;
- (void)didTapNewMsgPromptLabel;
- (void)removeCustomNewMsgItemFromModel:(id)arg1;
- (void)insertCustomNewMsgItemIntoModel:(id)arg1;
- (_Bool)canInsertNewMsgItem:(unsigned long long *)arg1 withModel:(id)arg2 existBeforeInsert:(_Bool *)arg3;
- (void)showUnreadMsgTips;
- (void)handleNewUnreadMsg;
@property(retain, nonatomic) NSString *unReadMsgUserImageUrl; // @dynamic unReadMsgUserImageUrl;
@property(nonatomic) unsigned long long unReadMsgCount; // @dynamic unReadMsgCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

