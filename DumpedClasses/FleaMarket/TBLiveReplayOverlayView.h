//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBLiveOverlayProtocol.h"

@class NSString, TBLiveAccountAreaView, TBLiveAvatarView, TBLiveCommentProcessor, TBLiveDetailInfoModel, TBLiveGoodsPromptView, TBMPBPlayerControlView, UIButton;

@interface TBLiveReplayOverlayView : UIView <TBLiveOverlayProtocol>
{
    TBLiveAvatarView *_avatarImgList;
    TBLiveCommentProcessor *_commentProcessor;
    TBLiveGoodsPromptView *_goodsPromptView;
    TBLiveAccountAreaView *_accountView;
    id <TBLivePlayLivingDelegate> _delegate;
    UIButton *_closeBtn;
    UIButton *_shareBtn;
    TBMPBPlayerControlView *_playerControlView;
    TBLiveDetailInfoModel *_detailInfoModel;
}

@property(retain, nonatomic) TBLiveDetailInfoModel *detailInfoModel; // @synthesize detailInfoModel=_detailInfoModel;
@property(retain, nonatomic) TBMPBPlayerControlView *playerControlView; // @synthesize playerControlView=_playerControlView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak id <TBLivePlayLivingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBLiveAccountAreaView *accountView; // @synthesize accountView=_accountView;
@property(retain, nonatomic) TBLiveGoodsPromptView *goodsPromptView; // @synthesize goodsPromptView=_goodsPromptView;
@property(retain, nonatomic) TBLiveCommentProcessor *commentProcessor; // @synthesize commentProcessor=_commentProcessor;
@property(retain, nonatomic) TBLiveAvatarView *avatarImgList; // @synthesize avatarImgList=_avatarImgList;
- (void).cxx_destruct;
- (void)handleGesture:(id)arg1;
- (void)tapOverlayView;
- (void)tapGoodsListBuntton:(long long)arg1;
- (void)onClickShareBtn:(id)arg1;
- (void)updateLiveDetailInfo:(id)arg1;
- (void)updateLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1 playerControlView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

