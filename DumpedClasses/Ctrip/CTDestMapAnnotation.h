//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTMapAnnotation.h"

@class DistrictMapPoiInfoModel, MKAnnotationView;

@interface CTDestMapAnnotation : CTMapAnnotation
{
    _Bool _isHighlightedAnnotation;
    DistrictMapPoiInfoModel *_poiModel;
    MKAnnotationView *_annotationView;
}

@property(retain, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) _Bool isHighlightedAnnotation; // @synthesize isHighlightedAnnotation=_isHighlightedAnnotation;
@property(retain, nonatomic) DistrictMapPoiInfoModel *poiModel; // @synthesize poiModel=_poiModel;
- (void).cxx_destruct;
- (id)init;

@end

