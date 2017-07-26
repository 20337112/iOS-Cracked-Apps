//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTHotelFilterTBModel, CTSimpleLineView, NSArray, NSString;

@interface CTHotelFilterParentTBView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    double _tbCellHeight;
    NSArray *_parentModelList;
    CTHotelFilterTBModel *_focusModel;
    CTSimpleLineView *_arrowLineView;
}

@property(retain, nonatomic) CTSimpleLineView *arrowLineView; // @synthesize arrowLineView=_arrowLineView;
@property(retain, nonatomic) CTHotelFilterTBModel *focusModel; // @synthesize focusModel=_focusModel;
@property(retain, nonatomic) NSArray *parentModelList; // @synthesize parentModelList=_parentModelList;
@property(nonatomic) double tbCellHeight; // @synthesize tbCellHeight=_tbCellHeight;
- (void).cxx_destruct;
- (void)updateArrow;
- (unsigned long long)getFocusedIndex;
- (void)scrollToSelectedRow:(long long)arg1;
- (void)getSelectRow;
- (void)setClick:(long long)arg1;
- (void)fillModels:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getCellHeightWithMaxWidth:(double)arg1 model:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
