//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTGoogleMapAnotation;

@protocol CTGoogleMapViewDelegate <NSObject>

@optional
- (void)onInfoWindowClicked:(CTGoogleMapAnotation *)arg1;
- (void)onAnotationClicked:(CTGoogleMapAnotation *)arg1;
- (void)mapZoomChanged:(int)arg1;
- (void)mapCenterChanged:(double)arg1 longitude:(double)arg2;
- (void)loadGoogleMapFail;
- (void)loadGoogleMapFinish;
@end

