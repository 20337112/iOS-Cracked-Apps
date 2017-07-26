//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTMapAnnotation, CTMapBaseAnnotationView, CTMapView, MKMapView, MKOverlayRenderer, NSError;

@protocol CTMapWidgetDelegate <NSObject>

@optional
- (MKOverlayRenderer *)mapView:(CTMapView *)arg1 rendererForOverlay:(id <MKOverlay>)arg2;
- (void)mapView:(CTMapView *)arg1 didZoomeAnimated:(_Bool)arg2;
- (void)mapView:(CTMapView *)arg1 didPanAnimated:(_Bool)arg2;
- (void)mapView:(CTMapView *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(CTMapView *)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapDidLongPressed:(struct CLLocationCoordinate2D)arg1;
- (void)mapLoadFailed:(MKMapView *)arg1 error:(NSError *)arg2;
- (void)mapLoadFinished:(MKMapView *)arg1;
- (void)calloutSelected:(CTMapAnnotation *)arg1;
- (void)annotationDeselected:(CTMapAnnotation *)arg1;
- (void)annotationSelected:(CTMapAnnotation *)arg1;
- (void)annotationSelectedAnnView:(CTMapBaseAnnotationView *)arg1;
@end

