//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMFoldCommentProtocol.h"
#import "FMHtmlContentParcable.h"

@class FMCommentFavorInfo, FMSuperFavorInfoDO, FMUserTagListDO, NSArray, NSArray<FMCommenPictDO>, NSArray<FMCommentReplyDO>, NSNumber, NSString;

@interface FMItemCommentDO : NSObject <FMHtmlContentParcable, FMFoldCommentProtocol>
{
    long long _status;
    long long _commentId;
    long long _reporterId;
    long long _sellerId;
    double _detailCellHeight;
    long long _bizType;
    long long _ownerType;
    NSString *_itemId;
    NSString *_sellerName;
    NSString *_content;
    NSString *_reportTime;
    NSString *_reporterName;
    NSString *_reporterNick;
    NSString *_sellerNick;
    NSString *_voiceUrl;
    NSNumber *_voiceTime;
    NSString *_itemTitle;
    NSString *_bidPrice;
    NSString *_bidTag;
    NSString *_title;
    NSArray<FMCommenPictDO> *_commentPics;
    NSArray *_pics;
    NSArray *_tags;
    NSArray<FMCommentReplyDO> *_reply;
    FMCommentFavorInfo *_favorInfo;
    FMSuperFavorInfoDO *_superFavorInfo;
    FMUserTagListDO *_idleUserTagInfo;
}

+ (id)convertReplyDO:(id)arg1;
@property(retain, nonatomic) FMUserTagListDO *idleUserTagInfo; // @synthesize idleUserTagInfo=_idleUserTagInfo;
@property(retain, nonatomic) FMSuperFavorInfoDO *superFavorInfo; // @synthesize superFavorInfo=_superFavorInfo;
@property(retain, nonatomic) FMCommentFavorInfo *favorInfo; // @synthesize favorInfo=_favorInfo;
@property(retain, nonatomic) NSArray<FMCommentReplyDO> *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *pics; // @synthesize pics=_pics;
@property(retain, nonatomic) NSArray<FMCommenPictDO> *commentPics; // @synthesize commentPics=_commentPics;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bidTag; // @synthesize bidTag=_bidTag;
@property(copy, nonatomic) NSString *bidPrice; // @synthesize bidPrice=_bidPrice;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSNumber *voiceTime; // @synthesize voiceTime=_voiceTime;
@property(copy, nonatomic) NSString *voiceUrl; // @synthesize voiceUrl=_voiceUrl;
@property(copy, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(copy, nonatomic) NSString *reporterNick; // @synthesize reporterNick=_reporterNick;
@property(copy, nonatomic) NSString *reporterName; // @synthesize reporterName=_reporterName;
@property(copy, nonatomic) NSString *reportTime; // @synthesize reportTime=_reportTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *sellerName; // @synthesize sellerName=_sellerName;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(nonatomic) long long ownerType; // @synthesize ownerType=_ownerType;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) double detailCellHeight; // @synthesize detailCellHeight=_detailCellHeight;
@property(nonatomic) long long sellerId; // @synthesize sellerId=_sellerId;
@property(nonatomic) long long reporterId; // @synthesize reporterId=_reporterId;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)changeOppose:(_Bool)arg1;
- (void)changeFavor:(_Bool)arg1;
- (_Bool)hasVoice;
- (void)removeReplyComment:(id)arg1;
- (void)insertReplyComment:(id)arg1;
- (long long)getReporterId;
- (id)getDisplayText;
- (_Bool)isOwner;
- (id)getReporterNick;
- (long long)getCommentId;
- (void)replaceContentWithFontSize:(long long)arg1;
- (_Bool)isDelete;
- (id)init;
- (id)keysNeedHtmlParse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
