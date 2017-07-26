//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CTHotelUpDownArrowBtnDelegate.h"
#import "CommentRoomSelectDelegate.h"

@class CTCoreTextLabel, CTHotelCommentBasicInfoView, NSString, UIView;

@interface CTHotelCommentDetailCell : UITableViewCell <CommentRoomSelectDelegate, CTHotelUpDownArrowBtnDelegate>
{
    UIView *commentView;
    CDUnknownBlockType commentblock;
    UIView *hotelReplyView;
    NSString *_keyword;
    CTHotelCommentBasicInfoView *_basicInfoView;
    CTCoreTextLabel *_coreTxtView;
    UIView *_commentArrowView;
    UIView *_mImageView;
    UIView *_lineView;
    UIView *_showHotelReply;
}

+ (_Bool)isAppend:(id)arg1;
+ (_Bool)isReply:(id)arg1;
+ (_Bool)isDisplayCommentHelpful:(id)arg1;
+ (_Bool)isShowHotelReplyView:(id)arg1;
+ (_Bool)isNeedExpendView:(id)arg1;
+ (double)getReplyAndAppendHeight:(id)arg1;
+ (double)getImageListHeight:(id)arg1 isShowInn:(_Bool)arg2;
+ (double)getCoreTextHeight:(id)arg1 isShowInn:(_Bool)arg2;
+ (double)getCellInfoHight:(id)arg1 isShowInn:(_Bool)arg2;
@property(retain, nonatomic) UIView *showHotelReply; // @synthesize showHotelReply=_showHotelReply;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *mImageView; // @synthesize mImageView=_mImageView;
@property(retain, nonatomic) UIView *commentArrowView; // @synthesize commentArrowView=_commentArrowView;
@property(retain, nonatomic) CTCoreTextLabel *coreTxtView; // @synthesize coreTxtView=_coreTxtView;
@property(retain, nonatomic) CTHotelCommentBasicInfoView *basicInfoView; // @synthesize basicInfoView=_basicInfoView;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)didSelectRoomType:(id)arg1;
- (void)prepareForReuse;
- (void)hotelAppendGOBackCommentListClickComment:(id)arg1 withType:(int)arg2;
- (id)createRecommandAndHelpfulView:(id)arg1;
- (double)drawAppendViewAndHotelReplyView:(id)arg1 withRow:(long long)arg2 viewY:(double)arg3;
- (id)showHotelReply:(id)arg1 withRow:(long long)arg2 viewY:(double)arg3;
- (void)expandHotelReply;
- (void)shareBtnClick:(id)arg1;
- (void)appendBtnClick:(id)arg1;
- (id)createShareButton:(long long)arg1;
- (id)createAppendButton:(long long)arg1;
- (void)setBtnStyle:(id)arg1;
- (void)autoLayoutAppendButtonwithModel:(id)arg1 listRow:(long long)arg2;
- (id)getUsefulCount:(long long)arg1;
- (void)btnClick:(id)arg1;
- (void)createHelpfulButton:(id)arg1 withRow:(long long)arg2;
- (void)coreTextClickEvent:(id)arg1;
- (void)createCommentArrowWithRow:(long long)arg1 withIsExpanded:(_Bool)arg2;
- (double)initFooterLineView:(_Bool)arg1 viewY:(double)arg2 fullLine:(_Bool)arg3;
- (void)arrowBtnAction:(id)arg1;
- (void)usefulCommentBtn:(id)arg1 listRow:(long long)arg2;
- (void)commentStatus:(id)arg1;
- (void)hotelReplyViewModel:(id)arg1 isExpand:(_Bool)arg2;
- (double)creatHotelReplyWithModel:(id)arg1 listRow:(long long)arg2 isExpand:(_Bool)arg3 ViewY:(double)arg4;
- (double)initCommentImageList:(id)arg1 isShowArrow:(_Bool)arg2 viewY:(double)arg3;
- (void)createCoreTextString:(id)arg1 withIsExpanded:(_Bool)arg2 WithIsNeedExpendView:(_Bool)arg3 isShowInn:(_Bool)arg4;
- (double)creatCommentBasicInfoView:(id)arg1 canRoomClicked:(_Bool)arg2;
- (void)callCommentBlock:(int)arg1 index:(long long)arg2;
- (void)gotoGroupHotelAppendImage:(id)arg1;
- (void)gotoGroupUserAppendImage:(id)arg1;
- (void)gotoGroupImage:(id)arg1;
- (void)gotoGroupHotelContentClick;
- (void)gotoGroupAppendContentClick;
- (void)gotoGroupContentClick;
- (void)gotoGroupAppendButtonClick;
- (void)gotoGroupHelpfulButtonClick;
- (void)setCellInfo:(id)arg1 withIsSplitBar:(_Bool)arg2 withListRow:(long long)arg3 isRoomClicked:(_Bool)arg4 isFullLine:(_Bool)arg5 isShowInn:(_Bool)arg6 block:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

