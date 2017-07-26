//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CTHotelNoPicView, HotelImageSellerShowModel, HotelImageViewModel, NSArray, NSMutableArray, NSString;

@interface CTHotelImageGridView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isShowSubImage;
    _Bool _isBigImageTesting;
    int _hotelId;
    int _hotelDataType;
    HotelImageViewModel *_imageModel;
    NSMutableArray *_needPhotoItemArray;
    NSMutableArray *_tipArray;
    CTHotelNoPicView *_nopicView;
    HotelImageSellerShowModel *_hotelImageSellerShowModel;
    NSArray *_imageTabArray;
    long long _gridType;
}

+ (_Bool)isCategoryABTestingForB:(int)arg1;
+ (id)createView:(struct CGRect)arg1;
@property(nonatomic) _Bool isBigImageTesting; // @synthesize isBigImageTesting=_isBigImageTesting;
@property(nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property(retain, nonatomic) NSArray *imageTabArray; // @synthesize imageTabArray=_imageTabArray;
@property(retain, nonatomic) HotelImageSellerShowModel *hotelImageSellerShowModel; // @synthesize hotelImageSellerShowModel=_hotelImageSellerShowModel;
@property(nonatomic) int hotelDataType; // @synthesize hotelDataType=_hotelDataType;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
@property(nonatomic) _Bool isShowSubImage; // @synthesize isShowSubImage=_isShowSubImage;
@property(retain, nonatomic) CTHotelNoPicView *nopicView; // @synthesize nopicView=_nopicView;
@property(retain, nonatomic) NSMutableArray *tipArray; // @synthesize tipArray=_tipArray;
@property(retain, nonatomic) NSMutableArray *needPhotoItemArray; // @synthesize needPhotoItemArray=_needPhotoItemArray;
@property(retain, nonatomic) HotelImageViewModel *imageModel; // @synthesize imageModel=_imageModel;
- (void).cxx_destruct;
- (_Bool)isSellerShowForCondition;
- (id)viewController;
- (void)gotoShowBigImge:(long long)arg1 indexPath:(id)arg2;
- (void)gotoStreetViewController:(id)arg1;
- (void)streetViewControllrer:(id)arg1;
- (void)showBigImage:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)touchFooterView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)showSellerSection;
- (_Bool)isSellerShowABTestingForB;
- (void)initView;
- (long long)cellCountWithRoomViewModel:(long long)arg1;
- (id)roomImageModel:(long long)arg1;
- (id)roomImageViewModel:(long long)arg1;
- (_Bool)isHotelRoomImageGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

