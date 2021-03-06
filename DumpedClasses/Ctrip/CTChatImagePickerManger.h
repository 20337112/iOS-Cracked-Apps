//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSURL, UIImageView, UINavigationController, UIViewController;

@interface CTChatImagePickerManger : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate>
{
    _Bool _isNeedOriginalImage;
    _Bool _canEditViaCamera;
    _Bool _canEditViaAblum;
    double _allowMaxEdgeLength;
    NSURL *_cameraMaskImageURL;
    UIViewController *_ctr;
    id <CTChatImagePickerMangerDelegate> _ct_imagePickerDelegate;
    unsigned long long _maxSelectableCount;
    NSString *_exceedAlertText;
    long long _maxImageFileSize;
    NSMutableArray *_selectedArr;
    UINavigationController *_imagePickerNav;
    UIImageView *_cameraMaskView;
    NSString *_savedImageDirectory;
    CDUnknownBlockType _resultBlock;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSString *savedImageDirectory; // @synthesize savedImageDirectory=_savedImageDirectory;
@property(retain, nonatomic) UIImageView *cameraMaskView; // @synthesize cameraMaskView=_cameraMaskView;
@property(retain, nonatomic) UINavigationController *imagePickerNav; // @synthesize imagePickerNav=_imagePickerNav;
@property(retain, nonatomic) NSMutableArray *selectedArr; // @synthesize selectedArr=_selectedArr;
@property(nonatomic) long long maxImageFileSize; // @synthesize maxImageFileSize=_maxImageFileSize;
@property(nonatomic) _Bool canEditViaAblum; // @synthesize canEditViaAblum=_canEditViaAblum;
@property(nonatomic) _Bool canEditViaCamera; // @synthesize canEditViaCamera=_canEditViaCamera;
@property(copy, nonatomic) NSString *exceedAlertText; // @synthesize exceedAlertText=_exceedAlertText;
@property(nonatomic) unsigned long long maxSelectableCount; // @synthesize maxSelectableCount=_maxSelectableCount;
@property(nonatomic) id <CTChatImagePickerMangerDelegate> ct_imagePickerDelegate; // @synthesize ct_imagePickerDelegate=_ct_imagePickerDelegate;
@property(nonatomic) __weak UIViewController *ctr; // @synthesize ctr=_ctr;
@property(retain, nonatomic) NSURL *cameraMaskImageURL; // @synthesize cameraMaskImageURL=_cameraMaskImageURL;
@property(nonatomic) double allowMaxEdgeLength; // @synthesize allowMaxEdgeLength=_allowMaxEdgeLength;
@property(nonatomic) _Bool isNeedOriginalImage; // @synthesize isNeedOriginalImage=_isNeedOriginalImage;
- (void).cxx_destruct;
- (id)imageWithColor:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)rightItemClicked;
- (void)leftItemClicked;
- (void)removeAllTmpFiles;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)directTakePhotosWithMaxSelectableCount:(unsigned long long)arg1 maxImageFileSize:(long long)arg2 canEditSinglePhotoViaCamera:(_Bool)arg3 canEditSinglePhotoViaAlbum:(_Bool)arg4;
- (void)directChooseImageWithMaxSelectableCount:(unsigned long long)arg1 maxImageFileSize:(long long)arg2 canEditSinglePhotoViaCamera:(_Bool)arg3 canEditSinglePhotoViaAlbum:(_Bool)arg4;
- (void)chooseImageWithMaxSelectableCount:(unsigned long long)arg1 maxImageFileSize:(long long)arg2 canEditSinglePhotoViaCamera:(_Bool)arg3 canEditSinglePhotoViaAlbum:(_Bool)arg4;
- (void)takePhoto;
- (void)requestCameraAuthorIfNeed;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)resetCameraMaskImageURL;
- (void)choosePhotoByAlbum;
- (void)requestAuthorizationIfNeed;
- (void)storeImages:(id)arg1;
- (void)handleSelectedPhotos:(id)arg1;
- (void)handleFinishedPick:(id)arg1;
- (id)initWithViewController:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

