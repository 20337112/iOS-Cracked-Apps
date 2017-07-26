//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightCommonUpPushSubView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTTableView, DispatchImportContentModel, DispatchModel, NSArray, NSDictionary, NSString;

@interface CTFlightDeliveryCoverView : CTFlightCommonUpPushSubView <UITableViewDelegate, UITableViewDataSource>
{
    long long _airportDepartIndex;
    long long _airportArriveIndex;
    long long _airportNoGetIndex;
    long long _airportGetIndex;
    _Bool _isAirportGetSelectedDepartRoute;
    id <CTFlightDeliveryCoverViewDelegate> _delegateSelect;
    CTTableView *_detailsTableView;
    DispatchImportContentModel *_myImportContentModel;
    DispatchModel *_myDispatchModel;
    NSArray *_sectionTypes;
    NSArray *_expressActivities;
    NSDictionary *_sectionInfos;
    NSDictionary *_sectionTitles;
    long long _selectedDepartAirportIndex;
    long long _selectedArriveAirportIndex;
    NSString *_departCityName;
    NSString *_arriveCityName;
}

+ (id)showCostDetailsViewWithDeliveryView:(id)arg1;
@property(nonatomic) _Bool isAirportGetSelectedDepartRoute; // @synthesize isAirportGetSelectedDepartRoute=_isAirportGetSelectedDepartRoute;
@property(copy, nonatomic) NSString *arriveCityName; // @synthesize arriveCityName=_arriveCityName;
@property(copy, nonatomic) NSString *departCityName; // @synthesize departCityName=_departCityName;
@property(nonatomic) long long selectedArriveAirportIndex; // @synthesize selectedArriveAirportIndex=_selectedArriveAirportIndex;
@property(nonatomic) long long selectedDepartAirportIndex; // @synthesize selectedDepartAirportIndex=_selectedDepartAirportIndex;
@property(retain, nonatomic) NSDictionary *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSDictionary *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(retain, nonatomic) NSArray *expressActivities; // @synthesize expressActivities=_expressActivities;
@property(retain, nonatomic) NSArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
@property(retain, nonatomic) DispatchModel *myDispatchModel; // @synthesize myDispatchModel=_myDispatchModel;
@property(retain, nonatomic) DispatchImportContentModel *myImportContentModel; // @synthesize myImportContentModel=_myImportContentModel;
@property(nonatomic) __weak CTTableView *detailsTableView; // @synthesize detailsTableView=_detailsTableView;
@property(nonatomic) __weak id <CTFlightDeliveryCoverViewDelegate> delegateSelect; // @synthesize delegateSelect=_delegateSelect;
- (void).cxx_destruct;
- (double)contentHeight;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tobeDiamand:(id)arg1;
- (void)giftCardInstruction:(id)arg1;
- (void)handleTapEventWithIndexPath:(id)arg1;
- (double)setupAirportGetCell:(id)arg1 sectionType:(long long)arg2 row:(long long)arg3;
- (double)setupExpressActivityCell:(id)arg1 row:(long long)arg2;
- (double)setupExpressCell:(id)arg1 deliveryType:(int)arg2;
- (double)setupSectionTitleCell:(id)arg1 sectionType:(long long)arg2;
- (void)resetSectionDatas;
- (void)initView;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

