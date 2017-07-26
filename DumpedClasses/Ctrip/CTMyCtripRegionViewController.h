//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTLocationDelegate.h"
#import "CTRegionPickerDataSourceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTAddressNode, CTLocationClient, CTRegionNode, CTUniformTableView, NSArray, NSString, UILabel, UIView;

@interface CTMyCtripRegionViewController : CTRootViewController <CTRegionPickerDataSourceDelegate, UITableViewDataSource, UITableViewDelegate, CTLocationDelegate>
{
    unsigned char _isLocationSuccess;
    CTAddressNode *_node;
    CTRegionNode *_provinceNode;
    CTRegionNode *_districtNode;
    long long _viewShowType;
    id <CTMyCtripRegionViewControllerDelegate> _delegate;
    CTUniformTableView *_tableView;
    UIView *_headView;
    NSArray *_provinces;
    UILabel *_loctionLabel;
    NSString *_locAddress;
    CTLocationClient *_locationClient;
}

@property(retain, nonatomic) CTLocationClient *locationClient; // @synthesize locationClient=_locationClient;
@property(retain, nonatomic) NSString *locAddress; // @synthesize locAddress=_locAddress;
@property(nonatomic) unsigned char isLocationSuccess; // @synthesize isLocationSuccess=_isLocationSuccess;
@property(retain, nonatomic) UILabel *loctionLabel; // @synthesize loctionLabel=_loctionLabel;
@property(retain, nonatomic) NSArray *provinces; // @synthesize provinces=_provinces;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) CTUniformTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <CTMyCtripRegionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long viewShowType; // @synthesize viewShowType=_viewShowType;
@property(retain, nonatomic) CTRegionNode *districtNode; // @synthesize districtNode=_districtNode;
@property(retain, nonatomic) CTRegionNode *provinceNode; // @synthesize provinceNode=_provinceNode;
@property(retain, nonatomic) CTAddressNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)handleTapLocViewRecognizer:(id)arg1;
- (void)locationClient:(id)arg1 locationSuccessWithGeoAddress:(id)arg2;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCtripCity:(id)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)startLocation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)regionPickerDataSourceLoadFinished:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cityBtnClick:(id)arg1;
- (id)searchNodeIn:(id)arg1 with:(id)arg2;
- (void)switchBtnClick:(id)arg1;
- (void)layoutProvinceView:(id)arg1;
- (void)layoutHeadView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

