//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTImagePickerMangerDelegate.h"
#import "CTNetErrorDelegate.h"
#import "CTTourVisaMaterialLargeViewDelegate.h"
#import "CTTourVisaTipDelegate.h"
#import "CTTourVisaUploadMaterialViewDelegate.h"
#import "CTTourVisaUploadNoMaterialViewDelegate.h"

@class CTAnimationLoadingView, CTImagePickerManger, CTNetErrorView, CTTourVisaMaterialLargeView, CTTourVisaTipView, CTTourVisaUploadMaterialModel, CTTourVisaUploadMaterialView, CTTourVisaUploadNoMaterialView, NSDictionary, NSString, UILabel, UIView;

@interface CTTourVisaMaterialUploadViewController : CTRootViewController <CTNetErrorDelegate, CTImagePickerMangerDelegate, CTTourVisaUploadMaterialViewDelegate, CTTourVisaUploadNoMaterialViewDelegate, CTTourVisaMaterialLargeViewDelegate, CTTourVisaTipDelegate>
{
    _Bool _isReuse;
    _Bool _isFirstLoad;
    _Bool _scanMode;
    NSDictionary *_originalParams;
    NSDictionary *_uploadParams;
    NSString *_navigaionBarTitle;
    long long _orderId;
    long long _visaOrderId;
    long long _archivesId;
    NSString *_acceptStatus;
    long long _reuseFlag;
    NSString *_passportId;
    UILabel *_topBarTitleLabel;
    UIView *_contentView;
    UIView *_marksLabelView;
    CTTourVisaUploadNoMaterialView *_noVisaMaterialView;
    CTTourVisaUploadMaterialView *_visaMaterialView;
    CTTourVisaMaterialLargeView *_largeVisaMaterialView;
    CTNetErrorView *_loadingErrorView;
    CTAnimationLoadingView *_pageLoadingView;
    CTAnimationLoadingView *_loadingView;
    CTTourVisaTipView *_visaTipView;
    UIView *_visaTipViewBgView;
    unsigned long long _recordCount;
    long long _uploadMaxCount;
    CTTourVisaUploadMaterialModel *_selectedVisaMaterialToScan;
    long long _selectedVisaMaterialTypeToScan;
    CTImagePickerManger *_uploadImagePickManager;
}

@property(retain, nonatomic) CTImagePickerManger *uploadImagePickManager; // @synthesize uploadImagePickManager=_uploadImagePickManager;
@property(nonatomic) long long selectedVisaMaterialTypeToScan; // @synthesize selectedVisaMaterialTypeToScan=_selectedVisaMaterialTypeToScan;
@property(retain, nonatomic) CTTourVisaUploadMaterialModel *selectedVisaMaterialToScan; // @synthesize selectedVisaMaterialToScan=_selectedVisaMaterialToScan;
@property(nonatomic) _Bool scanMode; // @synthesize scanMode=_scanMode;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(nonatomic) long long uploadMaxCount; // @synthesize uploadMaxCount=_uploadMaxCount;
@property(nonatomic) unsigned long long recordCount; // @synthesize recordCount=_recordCount;
@property(retain, nonatomic) UIView *visaTipViewBgView; // @synthesize visaTipViewBgView=_visaTipViewBgView;
@property(retain, nonatomic) CTTourVisaTipView *visaTipView; // @synthesize visaTipView=_visaTipView;
@property(retain, nonatomic) CTAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) CTAnimationLoadingView *pageLoadingView; // @synthesize pageLoadingView=_pageLoadingView;
@property(retain, nonatomic) CTNetErrorView *loadingErrorView; // @synthesize loadingErrorView=_loadingErrorView;
@property(retain, nonatomic) CTTourVisaMaterialLargeView *largeVisaMaterialView; // @synthesize largeVisaMaterialView=_largeVisaMaterialView;
@property(retain, nonatomic) CTTourVisaUploadMaterialView *visaMaterialView; // @synthesize visaMaterialView=_visaMaterialView;
@property(retain, nonatomic) CTTourVisaUploadNoMaterialView *noVisaMaterialView; // @synthesize noVisaMaterialView=_noVisaMaterialView;
@property(retain, nonatomic) UIView *marksLabelView; // @synthesize marksLabelView=_marksLabelView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *topBarTitleLabel; // @synthesize topBarTitleLabel=_topBarTitleLabel;
@property(copy, nonatomic) NSString *passportId; // @synthesize passportId=_passportId;
@property(nonatomic) long long reuseFlag; // @synthesize reuseFlag=_reuseFlag;
@property(nonatomic) _Bool isReuse; // @synthesize isReuse=_isReuse;
@property(copy, nonatomic) NSString *acceptStatus; // @synthesize acceptStatus=_acceptStatus;
@property(nonatomic) long long archivesId; // @synthesize archivesId=_archivesId;
@property(nonatomic) long long visaOrderId; // @synthesize visaOrderId=_visaOrderId;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *navigaionBarTitle; // @synthesize navigaionBarTitle=_navigaionBarTitle;
@property(retain, nonatomic) NSDictionary *uploadParams; // @synthesize uploadParams=_uploadParams;
@property(retain, nonatomic) NSDictionary *originalParams; // @synthesize originalParams=_originalParams;
- (void).cxx_destruct;
- (void)clearRecordCount;
- (void)reduceRecordCount;
- (void)addRecordCount;
- (void)showToastWithText:(id)arg1;
- (void)removePageLoadingView;
- (void)addPageLoadingView;
- (void)removeRequestLoadingView;
- (void)addRequestLoadingViewWithText:(id)arg1;
- (void)addRequestLoadingView;
- (void)hideLoadingErrorView;
- (void)showLoadingErrorView;
- (void)showVisaTipView;
- (void)navigationBackButtonClicked:(id)arg1;
- (void)cttourVisaTipViewClickSure;
- (void)cttourVisaTipViewClickCancel;
- (void)delegateRefreshBtnClicked:(id)arg1;
- (void)ct_imagePickerDidFailedWithUnAuthorized:(id)arg1;
- (void)ct_imagePickerDidCancelPick:(id)arg1;
- (void)ct_imagePicker:(id)arg1 didFinishedPickScaledImages:(id)arg2;
- (void)deleteVisaMaterialLargeView:(id)arg1;
- (void)visaUploadNoMaterialView:(id)arg1 choosePhotoWithUploadedCount:(long long)arg2;
- (void)visaUploadMaterialView:(id)arg1 cancelVisaMaterialArray:(id)arg2;
- (void)visaUploadMaterialView:(id)arg1 scanVisaMaterial:(id)arg2 visaMaterialType:(long long)arg3;
- (void)visaUploadMaterialView:(id)arg1 visaMaterialChange:(_Bool)arg2 visaMaterialUploadCount:(long long)arg3 deleteVisaMaterialArray:(id)arg4 reusedVisaMaterialArray:(id)arg5 deleteReusedVisaMaterialArray:(id)arg6;
- (void)visaUploadMaterialView:(id)arg1 choosePhotoWithUploadedCount:(long long)arg2;
- (void)scanLargeVisaMaterial:(id)arg1;
- (void)uploadVisaMaterialImageArray:(id)arg1;
- (id)fetchMaskUrl;
- (void)choosePhotoToUploadWithMaxCount:(long long)arg1;
- (void)requestScanLargeVisaMaterialImage:(id)arg1 type:(long long)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)requestUpdateVisaMaterials:(id)arg1 reusedVisaMaterialArray:(id)arg2 reusedVisaMaterialArrayToDelete:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)requestUploadVisaMaterial:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)updateVisaMaterialView:(id)arg1;
- (void)requestFetchVisaMaterials;
- (void)initVisaMaterialView;
- (void)initNoVisaMaterialView;
- (void)initContentView;
- (void)initNavigationBar;
- (void)initLoadingErrorView;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

