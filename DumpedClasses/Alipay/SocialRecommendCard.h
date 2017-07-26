//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFView.h"

#import "APCommonSelectTableViewCellDelegate.h"
#import "MFWidgetPluginProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class APButton, NSCache, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIImage, UILabel, UIView;

@interface SocialRecommendCard : MFView <MFWidgetPluginProtocol, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, APCommonSelectTableViewCellDelegate>
{
    _Bool _didLog;
    _Bool _toContact;
    _Bool _shoudldShowMobile;
    NSDictionary *_extInfo;
    id <MFWidgetPluginProtocol> _delegate;
    NSString *_clientId;
    NSString *_cardId;
    NSString *_bizNo;
    NSString *_dtlogMontor;
    NSMutableArray *_recommenArray;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    NSMutableArray *_dataArray;
    NSMutableDictionary *_addedDict;
    NSMutableDictionary *_dataDict;
    NSMutableDictionary *_errorContact;
    UIView *_line;
    APButton *_moreBtn;
    UILabel *_moreLabel;
    long long _scrollIndex;
    NSDate *_scrollDate;
    NSMutableArray *_allUserIds;
    UIImage *_defaultImage;
    NSCache *_imageCache;
    NSMutableDictionary *_languageDict;
}

+ (double)heightOfCard;
+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(nonatomic) _Bool shoudldShowMobile; // @synthesize shoudldShowMobile=_shoudldShowMobile;
@property(retain, nonatomic) NSMutableDictionary *languageDict; // @synthesize languageDict=_languageDict;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) NSMutableArray *allUserIds; // @synthesize allUserIds=_allUserIds;
@property(retain, nonatomic) NSDate *scrollDate; // @synthesize scrollDate=_scrollDate;
@property(nonatomic) long long scrollIndex; // @synthesize scrollIndex=_scrollIndex;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) APButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(nonatomic) _Bool toContact; // @synthesize toContact=_toContact;
@property(nonatomic) _Bool didLog; // @synthesize didLog=_didLog;
@property(retain, nonatomic) NSMutableDictionary *errorContact; // @synthesize errorContact=_errorContact;
@property(retain, nonatomic) NSMutableDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(retain, nonatomic) NSMutableDictionary *addedDict; // @synthesize addedDict=_addedDict;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *recommenArray; // @synthesize recommenArray=_recommenArray;
@property(retain, nonatomic) NSString *dtlogMontor; // @synthesize dtlogMontor=_dtlogMontor;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) __weak id <MFWidgetPluginProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
- (void).cxx_destruct;
- (void)logReportActionCode:(id)arg1 thirdParams:(id)arg2 clickUserId:(id)arg3 appId:(id)arg4 seedId:(id)arg5 UcId:(id)arg6;
- (id)getScrollView;
- (void)languageChange;
- (void)log135ExposureToIndex:(long long)arg1;
- (id)getMessageFromDict:(id)arg1;
- (id)convertToNewFriend:(id)arg1 dict:(id)arg2;
- (id)convertToSaveArray;
- (void)saveContact;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)logCardDidScroll;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickSecondBtnWithItem:(id)arg1;
- (id)contactInfoFromMsg:(id)arg1;
- (void)didClickAccBtnWithItem:(id)arg1;
- (void)didClickIconWithItem:(id)arg1;
- (id)getTextWithTextKey:(id)arg1 defaultText:(id)arg2 bundleName:(id)arg3;
- (id)getLocalImageWithName:(id)arg1 stretchLeftCap:(double)arg2 topHeight:(double)arg3;
- (id)getLocalImageWithName:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewMore;
- (void)enterMoreBtn;
- (_Bool)shouldShowCheckMore;
- (void)updateFriend:(id)arg1;
- (long long)getEndIndex;
- (void)didSendFriendRequest:(id)arg1;
- (void)updateAllFriendStatus;
- (void)reloadWithOriData:(id)arg1;
- (void)adjustFrame;
- (void)setupEnterMore;
- (void)setupCollectionView;
- (void)setupViews;
- (void)generateAllImages;
- (void)generateLanuageCache;
- (void)generateStretchableImage;
- (void)prepareResourceCache;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMFDelegate:(id)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
