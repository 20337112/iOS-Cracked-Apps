//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTDestMapUtil : NSObject
{
}

+ (_Bool)isGoogleMapDestinationIsInChina:(_Bool)arg1;
+ (id)getMapConfig;
+ (void)syncMapConfig:(id)arg1;
+ (_Bool)isGoogleMap:(_Bool)arg1;
+ (id)getIconLinePath:(int)arg1;
+ (id)getIOSMapIconPath:(_Bool)arg1 type:(int)arg2;
+ (id)getIconPath:(_Bool)arg1 type:(int)arg2;
+ (void)setCenter:(struct CLLocationCoordinate2D)arg1 map:(id)arg2 zoomLevel:(int)arg3;
+ (void)drawPolyline:(id)arg1 map:(id)arg2 autoScale:(_Bool)arg3;
+ (void)AddAnnotations:(id)arg1 map:(id)arg2 autoScale:(_Bool)arg3;
+ (void)addPackagesMapPluginJs:(id)arg1;
+ (void)createPackagesMapJs:(id)arg1;

@end

