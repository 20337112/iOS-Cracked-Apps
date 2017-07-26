//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseTableViewCell.h"

#import "CTDestHorizFlowViewDataSource.h"
#import "CTDestHorizFlowViewDelegate.h"

@class CTDestHorizFlowView, NSMutableArray, NSString;

@interface CTDestPOIPhotoUploadPhotoCell : CTDestBaseTableViewCell <CTDestHorizFlowViewDataSource, CTDestHorizFlowViewDelegate>
{
    CDUnknownBlockType _photoDidSelected;
    NSMutableArray *_tripPhotos;
    CTDestHorizFlowView *_photoFlow;
}

+ (double)heightWithItem:(id)arg1;
@property(retain, nonatomic) CTDestHorizFlowView *photoFlow; // @synthesize photoFlow=_photoFlow;
@property(retain, nonatomic) NSMutableArray *tripPhotos; // @synthesize tripPhotos=_tripPhotos;
@property(copy, nonatomic) CDUnknownBlockType photoDidSelected; // @synthesize photoDidSelected=_photoDidSelected;
- (void).cxx_destruct;
- (void)ctd_horizFlowView:(id)arg1 didSelectCellAtIndex:(unsigned long long)arg2;
- (double)ctd_gapForCellsInHorizFlowView:(id)arg1;
- (double)ctd_horizFlowView:(id)arg1 widthForCellAtIndex:(unsigned long long)arg2;
- (id)ctd_horizFlowView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (unsigned long long)ctd_numberOfCellsInHorizFlowView:(id)arg1;
- (void)layoutSubviews;
- (void)configWithItem:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

