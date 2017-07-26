//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTLocationDelegate.h"
#import "UIActionSheetDelegate.h"

@class CTGeoAddress, CTLocationClient, NSArray, NSString, UIView;

@interface CTHotelNaviManager : NSObject <UIActionSheetDelegate, CTLocationDelegate>
{
    _Bool _isMarkPoi;
    long long _typeOptions;
    CTGeoAddress *_startLocation;
    CTGeoAddress *_targetlLocation;
    CTLocationClient *_locationClient;
    NSString *_navigateTypeName;
}

+ (id)manager;
@property(retain, nonatomic) NSString *navigateTypeName; // @synthesize navigateTypeName=_navigateTypeName;
@property(nonatomic) _Bool isMarkPoi; // @synthesize isMarkPoi=_isMarkPoi;
@property(retain, nonatomic) CTLocationClient *locationClient; // @synthesize locationClient=_locationClient;
@property(retain, nonatomic) CTGeoAddress *targetlLocation; // @synthesize targetlLocation=_targetlLocation;
@property(retain, nonatomic) CTGeoAddress *startLocation; // @synthesize startLocation=_startLocation;
@property(nonatomic) long long typeOptions; // @synthesize typeOptions=_typeOptions;
- (void).cxx_destruct;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)navigateFrom:(id)arg1 to:(id)arg2 typeOptions:(long long)arg3 markPOI:(_Bool)arg4;
@property(readonly, nonatomic) UIView *targetView;
@property(readonly, nonatomic) NSArray *navigableTypes;
- (void)showNavigateTypeSelector;
- (void)navigateByAMap;
- (void)navigateByBaidu;
- (void)navigateByGoogle;
- (void)navigateByNative;
- (id)navigateTypeNameWithType:(long long)arg1;
- (void)openMapWithUrl:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

