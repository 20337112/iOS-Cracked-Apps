//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTMapAnnotation.h"

@class CTTourAnnotationView, CTTourTTDMapModel, NSString;

@interface CTTourAnnotation : CTMapAnnotation
{
    _Bool _isHightlight;
    _Bool _isCurrent;
    _Bool _isFemale;
    _Bool _isShowCallout;
    long long _tourtype;
    long long _status;
    NSString *_avatarUrl;
    NSString *_UserInfoUrl;
    CTTourTTDMapModel *_mapCardModel;
    CTTourAnnotationView *_tourAnnotationView;
}

@property(retain, nonatomic) CTTourAnnotationView *tourAnnotationView; // @synthesize tourAnnotationView=_tourAnnotationView;
@property(retain, nonatomic) CTTourTTDMapModel *mapCardModel; // @synthesize mapCardModel=_mapCardModel;
@property(copy, nonatomic) NSString *UserInfoUrl; // @synthesize UserInfoUrl=_UserInfoUrl;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isShowCallout; // @synthesize isShowCallout=_isShowCallout;
@property(nonatomic) _Bool isFemale; // @synthesize isFemale=_isFemale;
@property(nonatomic) _Bool isCurrent; // @synthesize isCurrent=_isCurrent;
@property(nonatomic) _Bool isHightlight; // @synthesize isHightlight=_isHightlight;
@property(nonatomic) long long tourtype; // @synthesize tourtype=_tourtype;
- (void).cxx_destruct;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

