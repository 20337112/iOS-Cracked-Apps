//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMMessageAMP.h"

#import "TBIMShareMessage.h"

@class NSString;

@interface TBIMMessageAMPShare : TBIMMessageAMP <TBIMShareMessage>
{
}

- (id)toJsonDictionary;
- (id)from;
- (id)attrHostPic;
- (id)attrHostName;
- (id)attrItems;
- (id)attrGoodNum;
- (id)attrSaleNum;
- (id)attrActDesc;
- (id)attrActPic;
- (id)attrActUrl;
- (id)attrBuyNum;
- (id)attrTags;
- (id)shareTag;
- (id)likeModifyTime;
- (_Bool)like;
- (id)getLikeNum;
- (id)getShareMessage;
- (id)getshopLevelImageUrl;
- (id)getactionUrl;
- (double)getPrice;
- (id)getpicUrl;
- (id)getInnerContent;
- (id)getTitle;
- (int)getShareType;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

