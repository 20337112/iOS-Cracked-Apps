//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTCoordinate2D, CTCtripCity, CTGeoAddress, CTLocationClient;

@protocol CTLocationDelegate <NSObject>

@optional
- (void)locationClient:(CTLocationClient *)arg1 locationFail:(int)arg2;
- (void)locationClient:(CTLocationClient *)arg1 locationSuccessWithCtripCity:(CTCtripCity *)arg2;
- (void)locationClient:(CTLocationClient *)arg1 locationSuccessWithGeoAddress:(CTGeoAddress *)arg2;
- (void)locationClient:(CTLocationClient *)arg1 locationSuccessWithCTCoordinate2D:(CTCoordinate2D *)arg2;
- (void)locationClient:(CTLocationClient *)arg1 locationSuccessWithCoordinate:(struct CLLocationCoordinate2D)arg2;
@end

