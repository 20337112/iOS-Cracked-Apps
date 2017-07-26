//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTH5Plugin.h"

#import "CTLocationDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableDictionary, NSString;

@interface CTH5LocatePlugin : CTH5Plugin <CTLocationDelegate, UIActionSheetDelegate>
{
    NSString *_locateCallbackTagName;
    NSMutableDictionary *_locateHistoryDict;
    NSString *_fromAddressTitle;
    NSString *_toAddressTitle;
    NSString *_mapType;
    NSString *_coordinateType;
    NSString *_navigateMode;
    NSString *_showNavigationCallbackTagName;
    struct CLLocationCoordinate2D _start;
    struct CLLocationCoordinate2D _end;
}

@property(copy, nonatomic) NSString *showNavigationCallbackTagName; // @synthesize showNavigationCallbackTagName=_showNavigationCallbackTagName;
@property(copy, nonatomic) NSString *navigateMode; // @synthesize navigateMode=_navigateMode;
@property(copy, nonatomic) NSString *coordinateType; // @synthesize coordinateType=_coordinateType;
@property(copy, nonatomic) NSString *mapType; // @synthesize mapType=_mapType;
@property(copy, nonatomic) NSString *toAddressTitle; // @synthesize toAddressTitle=_toAddressTitle;
@property(retain, nonatomic) NSString *fromAddressTitle; // @synthesize fromAddressTitle=_fromAddressTitle;
@property(nonatomic) struct CLLocationCoordinate2D end; // @synthesize end=_end;
@property(nonatomic) struct CLLocationCoordinate2D start; // @synthesize start=_start;
@property(retain, nonatomic) NSMutableDictionary *locateHistoryDict; // @synthesize locateHistoryDict=_locateHistoryDict;
@property(copy, nonatomic) NSString *locateCallbackTagName; // @synthesize locateCallbackTagName=_locateCallbackTagName;
- (void).cxx_destruct;
- (void)callSystemMap;
- (void)callMapApp:(id)arg1;
- (id)naviApps;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showAppSelectActionSheet:(id)arg1;
- (void)selectNaviApp;
- (void)navigate;
- (void)showMapNavigation:(id)arg1;
- (void)mapNavigation:(id)arg1;
- (void)stopLocate:(id)arg1;
- (void)getCachedCtripCity:(id)arg1;
- (void)showMapWithPOIList:(id)arg1;
- (void)showMap:(id)arg1;
- (_Bool)isShowGoogleMapForPOIList:(id)arg1;
- (void)clear;
- (void)locateCallBack:(id)arg1 geoPoint:(struct CLLocationCoordinate2D)arg2 ctripCity:(id)arg3 locationClient:(id)arg4;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (id)locateFaildDescriptionByType:(int)arg1;
- (void)locationClient:(id)arg1 locationSuccessWithCtripCity:(id)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithGeoAddress:(id)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)getSequenceIdByLocationClient:(id)arg1;
- (void)locate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

