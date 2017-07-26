//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTDestCommentEditCommentCellDelegate.h"
#import "CTDestCommentEditTripCostCellDelegate.h"
#import "CTDestPhotoUploadPreviewViewControllerDelegate.h"
#import "CTImagePickerMangerDelegate.h"
#import "CTLoadingViewDelegate.h"
#import "CTLoginWidgetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTDestCommentEditBaseInfo, CTDestCommentTripTypeItem, CTDestCopyrightView, CTImagePickerManger, DistrictCommentValidResponse, DistrictPoiCommentAddResponse, NSArray, NSMutableArray, NSString, NSTimer, NSURL, UITableView, UIView;

@interface CTDestCommentEditViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate, CTLoginWidgetDelegate, CTDestPhotoUploadPreviewViewControllerDelegate, CTDestCommentEditTripCostCellDelegate, CTDestCommentEditCommentCellDelegate, UINavigationControllerDelegate, CTLoadingViewDelegate, UIAlertViewDelegate, CTImagePickerMangerDelegate>
{
    _Bool _enterLottery;
    _Bool _loadDraft;
    int _commentAriPortCellNumberOffset;
    unsigned long long _mainScore;
    CTDestCommentEditBaseInfo *_commentBaseInfo;
    UITableView *_tableView;
    NSArray *_subScores;
    CTDestCommentTripTypeItem *_tripType;
    NSString *_tripDate;
    NSString *_tripCost;
    NSString *_tripComment;
    NSMutableArray *_tripPhotos;
    CTRootViewController *_sourceViewController;
    DistrictCommentValidResponse *_checkCommentResult;
    UIView *_currentFirstResponder;
    unsigned long long _currentPhotoUploadIndex;
    NSString *_currentHTTPRequestId;
    DistrictPoiCommentAddResponse *_commentAddResponse;
    NSString *_tokenForCheckIsCanComment;
    CDUnknownBlockType _rejectedBlock;
    unsigned long long _fastScore;
    NSTimer *_timer;
    CTImagePickerManger *_photomanager;
    CTDestCopyrightView *_copyrightView;
}

+ (id)goToCommentEditWithBaseInfo:(id)arg1 sourceViewController:(id)arg2 shouldLoginFirst:(CDUnknownBlockType)arg3 rejected:(CDUnknownBlockType)arg4 score:(unsigned long long)arg5;
+ (id)goToCommentEditWithBaseInfo:(id)arg1 sourceViewController:(id)arg2 shouldLoginFirst:(CDUnknownBlockType)arg3 rejected:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) CTDestCopyrightView *copyrightView; // @synthesize copyrightView=_copyrightView;
@property(retain, nonatomic) CTImagePickerManger *photomanager; // @synthesize photomanager=_photomanager;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long fastScore; // @synthesize fastScore=_fastScore;
@property(nonatomic) int commentAriPortCellNumberOffset; // @synthesize commentAriPortCellNumberOffset=_commentAriPortCellNumberOffset;
@property(nonatomic) _Bool loadDraft; // @synthesize loadDraft=_loadDraft;
@property(nonatomic) _Bool enterLottery; // @synthesize enterLottery=_enterLottery;
@property(copy, nonatomic) CDUnknownBlockType rejectedBlock; // @synthesize rejectedBlock=_rejectedBlock;
@property(copy, nonatomic) NSString *tokenForCheckIsCanComment; // @synthesize tokenForCheckIsCanComment=_tokenForCheckIsCanComment;
@property(retain, nonatomic) DistrictPoiCommentAddResponse *commentAddResponse; // @synthesize commentAddResponse=_commentAddResponse;
@property(copy, nonatomic) NSString *currentHTTPRequestId; // @synthesize currentHTTPRequestId=_currentHTTPRequestId;
@property(nonatomic) unsigned long long currentPhotoUploadIndex; // @synthesize currentPhotoUploadIndex=_currentPhotoUploadIndex;
@property(retain, nonatomic) UIView *currentFirstResponder; // @synthesize currentFirstResponder=_currentFirstResponder;
@property(retain, nonatomic) DistrictCommentValidResponse *checkCommentResult; // @synthesize checkCommentResult=_checkCommentResult;
@property(nonatomic) CTRootViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(retain, nonatomic) NSMutableArray *tripPhotos; // @synthesize tripPhotos=_tripPhotos;
@property(copy, nonatomic) NSString *tripComment; // @synthesize tripComment=_tripComment;
@property(copy, nonatomic) NSString *tripCost; // @synthesize tripCost=_tripCost;
@property(copy, nonatomic) NSString *tripDate; // @synthesize tripDate=_tripDate;
@property(retain, nonatomic) CTDestCommentTripTypeItem *tripType; // @synthesize tripType=_tripType;
@property(retain, nonatomic) NSArray *subScores; // @synthesize subScores=_subScores;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CTDestCommentEditBaseInfo *commentBaseInfo; // @synthesize commentBaseInfo=_commentBaseInfo;
@property(nonatomic) unsigned long long mainScore; // @synthesize mainScore=_mainScore;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)afterCancelLoadingWithView:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (double)compareFirstDate:(id)arg1 secondDate:(id)arg2;
- (void)tripComment:(id)arg1 didChanged:(id)arg2;
- (_Bool)tripCommentShouldEndEditing:(id)arg1;
- (_Bool)tripCommentShouldBeginEditing:(id)arg1;
- (void)tripCost:(id)arg1 didChanged:(id)arg2;
- (_Bool)tripCostShouldEndEditing:(id)arg1;
- (_Bool)tripCostShouldBeginEditing:(id)arg1;
- (void)ctd_PhotoUploadPreviewViewController:(id)arg1 didDeletePhotoAtIndex:(unsigned long long)arg2;
- (void)loginViewWillDisappear:(_Bool)arg1;
- (void)afterLoginSuccess:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, nonatomic) _Bool needsShowSubScores;
@property(readonly, nonatomic) _Bool isTrafficType;
@property(readonly, nonatomic) _Bool hadInputed;
@property(readonly, nonatomic) NSURL *dataStoreRootDir;
- (id)drawSpaceCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawAddPhotoCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawTripPhotoCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawTripCommentCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawTripCostCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawTripDateCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawSubScoreCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawSubScoreHeaderForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawMainScoreCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)drawFooterCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)backAction;
- (void)cancelDidClicked;
- (void)showImagePicker;
- (void)ct_imagePicker:(id)arg1 didFinishedPickScaledImages:(id)arg2;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)configTableViewFooter:(id)arg1;
- (void)goToRulePage;
- (void)configTableViewHeader:(id)arg1;
- (void)addImageToComment:(id)arg1 needsDismissPickerViewAfterLoaded:(_Bool)arg2;
- (void)publishBtnDidClicked;
- (id)validatePublishInfo;
- (void)uploadPhotos;
- (void)submitComment:(id)arg1;
- (void)getDraft;
- (void)saveDraft;
- (id)formatTripDate:(id)arg1;
- (id)handlePhotoUploadResult:(id)arg1;
- (id)handlePhotoUploadResultFileUrl:(id)arg1;
- (void)showToast:(id)arg1;
- (void)checkIsCanComment;
- (void)goToCommentEditTripPhotoPreviewWithIndex:(unsigned long long)arg1;
- (void)startCommentEdit;
- (void)retainSelfToSourceViewController:(_Bool)arg1;
- (void)removeInputFocus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

