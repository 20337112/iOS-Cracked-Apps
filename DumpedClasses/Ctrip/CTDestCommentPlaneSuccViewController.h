//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTDestPCommentPlaneSuccShareComment.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTDestCommentPlaneSuccHeadView, DistrictPoiCommentAddResponse, NSArray, NSString, UITableView, UIView;

@interface CTDestCommentPlaneSuccViewController : CTRootViewController <UITableViewDataSource, UITableViewDelegate, CTDestPCommentPlaneSuccShareComment>
{
    _Bool _isInternationalFlight;
    int _globalPoiId;
    DistrictPoiCommentAddResponse *_dataModel;
    NSString *_commentContent;
    NSString *_poiName;
    long long _poiType;
    long long _poiId;
    long long _score;
    long long _orderId;
    NSString *_flightNo;
    UIView *_myContainerView;
    UITableView *_planeListTableView;
    CTDestCommentPlaneSuccHeadView *_planeListHeadView;
    NSArray *_poiList;
    NSArray *_flightInfoList;
}

@property(retain, nonatomic) NSArray *flightInfoList; // @synthesize flightInfoList=_flightInfoList;
@property(retain, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
@property(retain, nonatomic) CTDestCommentPlaneSuccHeadView *planeListHeadView; // @synthesize planeListHeadView=_planeListHeadView;
@property(retain, nonatomic) UITableView *planeListTableView; // @synthesize planeListTableView=_planeListTableView;
@property(retain, nonatomic) UIView *myContainerView; // @synthesize myContainerView=_myContainerView;
@property(retain, nonatomic) NSString *flightNo; // @synthesize flightNo=_flightNo;
@property(nonatomic) int globalPoiId; // @synthesize globalPoiId=_globalPoiId;
@property(nonatomic) _Bool isInternationalFlight; // @synthesize isInternationalFlight=_isInternationalFlight;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(nonatomic) long long poiId; // @synthesize poiId=_poiId;
@property(nonatomic) long long poiType; // @synthesize poiType=_poiType;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(retain, nonatomic) DistrictPoiCommentAddResponse *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (id)addbackBarButtomItem;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)goToMyComments;
- (void)backBarButtonClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)sharePlaneComment;
- (void)backToFlight;
- (void)getRecommendResource;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

