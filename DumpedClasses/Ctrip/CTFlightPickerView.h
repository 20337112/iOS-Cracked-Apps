//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface CTFlightPickerView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    long long numberOfRow_;
    long long rowHeight_;
    NSMutableArray *arrayRowHeight_;
    NSString *title_;
    long long selectRow_;
    id <CTFlightPickerViewDataSource> _dataSource;
    id <CTFlightPickerViewDelegate> _delegate;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <CTFlightPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CTFlightPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)selectRow:(long long)arg1;
- (void)dismiss;
- (void)show;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleGesture:(id)arg1;
- (void)setupContentView:(id)arg1;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

