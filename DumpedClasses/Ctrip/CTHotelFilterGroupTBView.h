//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface CTHotelFilterGroupTBView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    NSDictionary *leftDic;
    NSArray *_groupModelList;
}

@property(retain, nonatomic) NSArray *groupModelList; // @synthesize groupModelList=_groupModelList;
- (void).cxx_destruct;
- (void)setClick:(long long)arg1;
- (void)fillModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)getCellHeightWithMaxWidth:(double)arg1 model:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

