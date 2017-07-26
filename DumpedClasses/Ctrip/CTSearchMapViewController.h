//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTLocationDelegate.h"
#import "CTMapWidgetDelegate.h"
#import "CTSearchAddressVCDelegate.h"

@class CTMapAnnotation, CTSearchZoomAnimateMapView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CTSearchMapViewController : CTRootViewController <CTMapWidgetDelegate, CTSearchAddressVCDelegate, CTLocationDelegate>
{
    _Bool isshow;
    _Bool _isHideSearchItem;
    CTSearchZoomAnimateMapView *_map;
    NSString *_address;
    NSString *_cityName;
    UIView *_searchBackGroundView;
    UIButton *_cityButton;
    UILabel *_cityLabel;
    UIButton *_searchButton;
    UILabel *_addressLabel;
    UIImageView *_searchImageView;
    NSArray *_arrayShowAnnotation;
    NSMutableDictionary *_cityDict;
    CTMapAnnotation *_currentBigAnnotation;
    NSMutableArray *_annotationArray;
    NSString *_currentCityName;
    NSString *_baiduRegion;
}

@property(retain, nonatomic) NSString *baiduRegion; // @synthesize baiduRegion=_baiduRegion;
@property(retain, nonatomic) NSString *currentCityName; // @synthesize currentCityName=_currentCityName;
@property(retain, nonatomic) NSMutableArray *annotationArray; // @synthesize annotationArray=_annotationArray;
@property(retain, nonatomic) CTMapAnnotation *currentBigAnnotation; // @synthesize currentBigAnnotation=_currentBigAnnotation;
@property(retain, nonatomic) NSMutableDictionary *cityDict; // @synthesize cityDict=_cityDict;
@property(retain, nonatomic) NSArray *arrayShowAnnotation; // @synthesize arrayShowAnnotation=_arrayShowAnnotation;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(retain, nonatomic) UIButton *cityButton; // @synthesize cityButton=_cityButton;
@property(retain, nonatomic) UIView *searchBackGroundView; // @synthesize searchBackGroundView=_searchBackGroundView;
@property(nonatomic) _Bool isHideSearchItem; // @synthesize isHideSearchItem=_isHideSearchItem;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) CTSearchZoomAnimateMapView *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (void)processDetailNotification:(id)arg1;
- (void)addNotification;
- (void)gotoUrl:(id)arg1;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (long long)preferredStatusBarStyle;
- (void)createSearchButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)adjustStatusBar;
- (void)searchPoisWithLat:(double)arg1 lon:(double)arg2;
- (long long)cachedCtripCityId;
- (void)backAddressPosition:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)createButton;
- (id)boolToString:(_Bool)arg1;
- (void)mapView:(id)arg1 didPanAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didZoomeAnimated:(_Bool)arg2;
- (void)changeSmallToBigWithAnn:(id)arg1;
- (void)changeBigToSmallWithAnn:(id)arg1;
- (void)annotationSelected:(id)arg1;
- (void)calloutSelected:(id)arg1;
- (id)createAnnotationWithXib:(id)arg1;
- (void)showFourWithLat:(double)arg1 lon:(double)arg2;
- (void)dealloc;
- (void)showMapCenter;
- (void)loadCities;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

