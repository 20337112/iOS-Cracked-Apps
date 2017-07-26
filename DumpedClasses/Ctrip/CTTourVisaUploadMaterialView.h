//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTTourVisaMaterialUploadCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSAttributedString, NSMutableArray, NSString, UIButton, UICollectionView, UIScrollView;

@interface CTTourVisaUploadMaterialView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, CTTourVisaMaterialUploadCellDelegate>
{
    _Bool _scanMode;
    id <CTTourVisaUploadMaterialViewDelegate> _delegate;
    NSString *_tipInfo;
    NSMutableArray *_reusedVisaMaterialArray;
    NSMutableArray *_uploadedVisaMaterialArray;
    NSMutableArray *_tempedVisaMaterialArray;
    NSMutableArray *_reusedVisaMaterialUIArray;
    NSMutableArray *_uploadVisaMaterialUIArray;
    UIScrollView *_contentScrollView;
    UICollectionView *_visaCollectionView;
    UIButton *_finishButton;
    NSAttributedString *_tipInfoAttributedStr;
    double _tipInfoHeight;
}

@property(nonatomic) _Bool scanMode; // @synthesize scanMode=_scanMode;
@property(nonatomic) double tipInfoHeight; // @synthesize tipInfoHeight=_tipInfoHeight;
@property(copy, nonatomic) NSAttributedString *tipInfoAttributedStr; // @synthesize tipInfoAttributedStr=_tipInfoAttributedStr;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) UICollectionView *visaCollectionView; // @synthesize visaCollectionView=_visaCollectionView;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) NSMutableArray *uploadVisaMaterialUIArray; // @synthesize uploadVisaMaterialUIArray=_uploadVisaMaterialUIArray;
@property(retain, nonatomic) NSMutableArray *reusedVisaMaterialUIArray; // @synthesize reusedVisaMaterialUIArray=_reusedVisaMaterialUIArray;
@property(retain, nonatomic) NSMutableArray *tempedVisaMaterialArray; // @synthesize tempedVisaMaterialArray=_tempedVisaMaterialArray;
@property(retain, nonatomic) NSMutableArray *uploadedVisaMaterialArray; // @synthesize uploadedVisaMaterialArray=_uploadedVisaMaterialArray;
@property(retain, nonatomic) NSMutableArray *reusedVisaMaterialArray; // @synthesize reusedVisaMaterialArray=_reusedVisaMaterialArray;
@property(copy, nonatomic) NSString *tipInfo; // @synthesize tipInfo=_tipInfo;
@property(nonatomic) __weak id <CTTourVisaUploadMaterialViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)tempedMaterialDidAdd;
- (_Bool)visaMaterialDidChange;
- (long long)fetchAlreadyUploadCount;
- (void)cancelVisaMaterialOperations;
- (void)finishButtonClicked:(id)arg1;
- (void)visaMaterialUIModelChecked:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)hideVisaUploadMaterialView;
- (void)showVisaUploadMaterialView;
- (void)refreshUIWithUploadedVisaMaterialArray:(id)arg1 tempedVisaMaterialArray:(id)arg2;
- (void)refreshUIWithReusedVisaMaterialArray:(id)arg1;
- (void)refreshTempedVisaMaterialArray;
- (void)removeTempedVisaMaterial:(id)arg1;
- (void)addTempedVisaMaterialArray:(id)arg1;
- (void)removeUploadedVisaMaterial:(id)arg1;
- (void)updateUploadedVisaMaterialArray:(id)arg1;
- (void)removeReusedVisaMaterial:(id)arg1;
- (void)updateReusedVisaMaterialArray:(id)arg1;
- (void)initVisaCollectionView;
- (void)initContentScollView;
- (void)initBottomBarView;
- (void)initTipInfo;
- (id)initWithFrame:(struct CGRect)arg1 scanMode:(_Bool)arg2 tipInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

