//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTHotelPassengerEditDelegate.h"
#import "CTUniformTableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTHotelPassengerViewModel, CTUniformTableView, NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface CTHotelPassengersViewController : CTRootViewController <CTHotelPassengerEditDelegate, CTUniformTableViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    CTHotelPassengerViewModel *model_;
    _Bool _isTicketHolder;
    CTUniformTableView *_tbPassenger;
    UILabel *_lbInfo;
    long long _ctrlType;
    long long _tag;
    UIView *_headerView;
    unsigned long long _maxSelectNum;
    long long _editIndex;
    NSMutableArray *_passengers;
    id <CTHotelPassengerInfoDelegate> _delegate;
    NSArray *_supportCardList;
}

@property(retain, nonatomic) NSArray *supportCardList; // @synthesize supportCardList=_supportCardList;
@property(nonatomic) __weak id <CTHotelPassengerInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *passengers; // @synthesize passengers=_passengers;
@property(nonatomic) _Bool isTicketHolder; // @synthesize isTicketHolder=_isTicketHolder;
@property(nonatomic) long long editIndex; // @synthesize editIndex=_editIndex;
@property(nonatomic) unsigned long long maxSelectNum; // @synthesize maxSelectNum=_maxSelectNum;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long ctrlType; // @synthesize ctrlType=_ctrlType;
@property(retain, nonatomic) UILabel *lbInfo; // @synthesize lbInfo=_lbInfo;
@property(retain, nonatomic) CTUniformTableView *tbPassenger; // @synthesize tbPassenger=_tbPassenger;
- (void).cxx_destruct;
- (void)refreshUI;
- (void)pullUpToAddData:(id)arg1;
- (_Bool)setPassengerSel:(id)arg1;
- (void)addNewOrEditSucess:(id)arg1;
- (void)passengerEditSucess:(id)arg1;
- (void)selectFinished;
- (id)getSelectedPassenger;
- (void)setEditVCTitle:(id)arg1;
- (void)handleEditNodeButton:(id)arg1;
- (void)createCheckView:(id)arg1 inCell:(id)arg2 model:(id)arg3;
- (void)createEditButton:(id)arg1 inCell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fetchPassenger:(id)arg1;
- (void)fetchPassengerFromRemote:(id)arg1;
- (void)initdata;
- (void)initView;
- (id)initWithSelPassengers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

