//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTDestAnnotation, CTDestGoogleAnnotation, NSString;

@interface CTDestTTDMapItem : NSObject
{
    _Bool _isFav;
    _Bool _isCurrent;
    _Bool _isChina;
    _Bool _isRecommend;
    int _commentCount;
    unsigned long long _itemId;
    NSString *_itemName;
    unsigned long long _globalPoiId;
    unsigned long long _districtId;
    double _score;
    NSString *_price;
    long long _type;
    NSString *_trafficInfo;
    NSString *_address;
    CTDestGoogleAnnotation *_googleAnnotation;
    NSString *_photoUrl;
    NSString *_distance;
    NSString *_foodLabel;
    NSString *_tel;
    NSString *_openTime;
    NSString *_recommendFoods;
    NSString *_introduce;
    NSString *_enName;
    NSString *_shiMeiLinLabel;
    CTDestAnnotation *_annotation;
    struct CLLocationCoordinate2D _coordinate;
    struct CLLocationCoordinate2D _googleCoordinate;
}

+ (id)createWithItem:(id)arg1;
@property(retain, nonatomic) CTDestAnnotation *annotation; // @synthesize annotation=_annotation;
@property(retain, nonatomic) NSString *shiMeiLinLabel; // @synthesize shiMeiLinLabel=_shiMeiLinLabel;
@property(retain, nonatomic) NSString *enName; // @synthesize enName=_enName;
@property(retain, nonatomic) NSString *introduce; // @synthesize introduce=_introduce;
@property(retain, nonatomic) NSString *recommendFoods; // @synthesize recommendFoods=_recommendFoods;
@property(retain, nonatomic) NSString *openTime; // @synthesize openTime=_openTime;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *foodLabel; // @synthesize foodLabel=_foodLabel;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) CTDestGoogleAnnotation *googleAnnotation; // @synthesize googleAnnotation=_googleAnnotation;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *trafficInfo; // @synthesize trafficInfo=_trafficInfo;
@property(nonatomic) _Bool isChina; // @synthesize isChina=_isChina;
@property(nonatomic) _Bool isCurrent; // @synthesize isCurrent=_isCurrent;
@property(nonatomic) _Bool isFav; // @synthesize isFav=_isFav;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct CLLocationCoordinate2D googleCoordinate; // @synthesize googleCoordinate=_googleCoordinate;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned long long districtId; // @synthesize districtId=_districtId;
@property(nonatomic) unsigned long long globalPoiId; // @synthesize globalPoiId=_globalPoiId;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) unsigned long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)annotationTypeWithMapPOIType:(long long)arg1;
- (int)convertPoiType:(long long)arg1;
- (long long)compareMapItem:(id)arg1;

@end

