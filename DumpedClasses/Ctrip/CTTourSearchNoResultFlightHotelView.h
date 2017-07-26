//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTourSearchTicketHotelModel, NSString, UITableView;

@interface CTTourSearchNoResultFlightHotelView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    CTTourSearchTicketHotelModel *_flightHotelModel;
    UITableView *_searchNoResultTableView;
}

@property(retain, nonatomic) UITableView *searchNoResultTableView; // @synthesize searchNoResultTableView=_searchNoResultTableView;
@property(retain, nonatomic) CTTourSearchTicketHotelModel *flightHotelModel; // @synthesize flightHotelModel=_flightHotelModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateFlightHotelView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

