//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelPassengersViewController.h"

#import "CTHotelPassengerEditDelegate.h"

@class CTHotelCircularButton, NSString;

@interface CTHotelPassengersInsViewController : CTHotelPassengersViewController <CTHotelPassengerEditDelegate>
{
    CTHotelCircularButton *createBtn;
    NSString *_btnTitle;
}

@property(copy, nonatomic) NSString *btnTitle; // @synthesize btnTitle=_btnTitle;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setEditVCTitle:(id)arg1;
- (void)selectFinished;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)createNewPassenger:(id)arg1;
- (void)initBaseView;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

