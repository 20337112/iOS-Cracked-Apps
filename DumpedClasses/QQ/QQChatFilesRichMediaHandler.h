//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQChatFilesBaseHandler.h"

#import "DBAsyncCallbackProtocol.h"
#import "PhotoBrowserViewControllerDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQMutipleImageHandlerDelegate.h"
#import "QQSVOriginalCellDelegete.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class ChatFilesEmptyView, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, QQLodingMoreFooterView, QQMutipleImageHandler, UICollectionView, UIPanGestureRecognizer;

@interface QQChatFilesRichMediaHandler : QQChatFilesBaseHandler <QQSVOriginalCellDelegete, UIActionSheetDelegate, QQMutipleImageHandlerDelegate, UIAlertViewDelegate, QQFriendSelectedViewControllerDelegate, DBAsyncCallbackProtocol, UICollectionViewDataSource, PhotoBrowserViewControllerDelegate, UICollectionViewDelegateFlowLayout>
{
    long long _beginTimeOrSeq;
    _Bool _isFetchEnd;
    _Bool _isLoadingMorePhotos;
    NSArray *_browserModelArr;
    QQLodingMoreFooterView *_footerView;
    _Bool _isPullUpLoadingMore;
    NSMutableSet *_msgSignSet;
    struct CGPoint _startPoint;
    long long _gestureAngleState;
    NSIndexPath *_panLastIndex;
    NSIndexPath *_panBeginIndex;
    _Bool _selectMode;
    UIPanGestureRecognizer *_panRecognizer;
    NSMutableArray *_allChangedIndexArray;
    ChatFilesEmptyView *_emptyView;
    NSMutableDictionary *_dataSource;
    UICollectionView *_collectionView;
    NSMutableArray *_sectionKeys;
}

@property(retain, nonatomic) NSMutableArray *sectionKeys; // @synthesize sectionKeys=_sectionKeys;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableDictionary *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)isBottomBarContaineRecognizer:(id)arg1;
- (_Bool)isItemIndexSelected:(id)arg1;
- (void)addChangedIndexInArray:(id)arg1;
- (void)setSelect:(_Bool)arg1 rangeFrom:(id)arg2 to:(id)arg3;
- (void)changeSelectRange;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)insertPhotos:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (_Bool)checkDuplicateMsg:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGRect)getOriginalRectForPhoto:(id)arg1 atIndex:(int)arg2;
- (struct CGRect)getOriginalRectForPhotoAtIndex:(int)arg1;
- (void)selectItemAtIndexPath:(id)arg1 checked:(_Bool)arg2;
- (void)revertSelectAtIndexPath:(id)arg1;
- (id)getAIOVC;
- (void)loadMore;
- (id)getRichModelWithSection:(id)arg1;
- (id)getKeyWithSection:(long long)arg1;
- (void)fetchNextPhotos;
- (void)checkEmptyView;
- (void)clearSelectedMessages;
- (void)batchDelete;
- (void)batchSave2WeiYun;
- (void)batchDownload;
- (void)batchForward;
- (void)hideSubviews;
- (void)reloadSubViews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithUin:(id)arg1 type:(int)arg2;
- (id)createAIOFileModelFromMessage:(id)arg1;
- (void)showVideoPlayer:(id)arg1;
- (void)openFileVideo:(id)arg1;
- (void)shortVideoPlayerDidClickForwardButton:(id)arg1;
- (struct CGRect)getThumbOriginalRectBySignString:(id)arg1;
- (struct CGRect)getOriginalRectForPhotoWithSign:(id)arg1;
- (id)getModelWithSign:(id)arg1;
- (_Bool)playOrDownloadShortVideo:(id)arg1 controller:(id)arg2;
- (void)shareToFriendSuccess;
- (void)mutipleImageHandler:(id)arg1 didPreparedWithError:(id)arg2;
- (void)mutipleImageHandlerStartHanldeImages:(id)arg1;
- (void)mutipleImageHandlerPausePrepared:(id)arg1;
- (void)mutipleImageHandlerContinuePrepared:(id)arg1;
- (id)validUUIDFromString:(id)arg1;
- (id)originalImageURLFromMessageModel:(id)arg1;
- (id)aioRichModelFromMessageModel:(id)arg1;
- (long long)selectedMediaType;
- (void)forwardImagesToGroupAlbum;
- (void)forwardImagesToQZone;
- (void)forwardFileVideoToFriends:(id)arg1;
- (void)forwardVideoToFriends;
- (void)forwardImagesToOthers:(id)arg1;
- (void)delayStartForwardMutipleImage:(id)arg1;
- (void)onForwardImageToContact;
- (_Bool)isCountLimitExceed:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSaveImagesButtonClick;
- (void)onSaveButtonClick;
- (void)onForwardVideoButtonClick;
- (void)onForwardConfirm;
- (void)onForwardImagesButtonClick;
- (void)onForwardButtonClick;
- (void)onDeleteButtonClick;
- (id)filterExistMedias:(id)arg1;
- (void)checkGroupAlbumUploadPermission;
- (long long)groupCode;
@property(nonatomic) _Bool hasGroupAlbumUploadPermission; // @dynamic hasGroupAlbumUploadPermission;
@property(copy, nonatomic) CDUnknownBlockType delayedForwardAction; // @dynamic delayedForwardAction;
@property(retain, nonatomic) QQMutipleImageHandler *mutipleImageHandler; // @dynamic mutipleImageHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

