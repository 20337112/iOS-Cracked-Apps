//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightFilterPluginView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface CTFlightFilterClassView : CTFlightFilterPluginView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_contentTableView;
    NSMutableArray *_selectClassModelArray;
    NSMutableArray *_classModelArr;
    id <CTFlightFilterPluginViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CTFlightFilterPluginViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *classModelArr; // @synthesize classModelArr=_classModelArr;
@property(retain, nonatomic) NSMutableArray *selectClassModelArray; // @synthesize selectClassModelArray=_selectClassModelArray;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
- (void).cxx_destruct;
- (void)updateSelectedValue;
- (void)deleteItemWithDataID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)resetWithDefaultValue;
- (void)initTableViewWithFrame:(struct CGRect)arg1;
- (void)refershViewWithSelectClassModelArray:(id)arg1 classModelArr:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 selectClassModelArray:(id)arg2 classModelArr:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

