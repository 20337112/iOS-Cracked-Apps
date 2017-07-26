//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class LatLngCoordModel, NSString;

@interface SchedulePoiDetailModel : CTBusinessBean <NSCoding>
{
    int globalPoiId;
    int resourceId;
    NSString *name;
    NSString *imgUrl;
    NSString *introduction;
    NSString *latitude;
    NSString *longitude;
    int poiType;
    NSString *priceDesc;
    NSString *distritId;
    NSString *districtName;
    NSString *suggestPlayTime;
    LatLngCoordModel *ggCoordModel;
    LatLngCoordModel *gdCoordModel;
    _Bool isOverseas;
    int commentCount;
    NSString *commentScore;
    NSString *ename;
    NSString *businessTime;
}

@property(copy, nonatomic) NSString *businessTime; // @synthesize businessTime;
@property(copy, nonatomic) NSString *ename; // @synthesize ename;
@property(copy, nonatomic) NSString *commentScore; // @synthesize commentScore;
@property(nonatomic) int commentCount; // @synthesize commentCount;
@property(nonatomic) _Bool isOverseas; // @synthesize isOverseas;
@property(retain, nonatomic) LatLngCoordModel *gdCoordModel; // @synthesize gdCoordModel;
@property(retain, nonatomic) LatLngCoordModel *ggCoordModel; // @synthesize ggCoordModel;
@property(copy, nonatomic) NSString *suggestPlayTime; // @synthesize suggestPlayTime;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName;
@property(copy, nonatomic) NSString *distritId; // @synthesize distritId;
@property(copy, nonatomic) NSString *priceDesc; // @synthesize priceDesc;
@property(nonatomic) int poiType; // @synthesize poiType;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int resourceId; // @synthesize resourceId;
@property(nonatomic) int globalPoiId; // @synthesize globalPoiId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

