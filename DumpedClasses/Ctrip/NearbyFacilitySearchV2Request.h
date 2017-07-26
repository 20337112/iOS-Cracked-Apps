//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface NearbyFacilitySearchV2Request : CTBusinessBean
{
    int _serviceVersion;
    int _cityID;
    int _hotelID;
    int _hotelDataType;
    int _moduleSourceType;
    int _mapType;
    NSString *_keyword;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_radium;
    long long _flag;
}

@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic) int moduleSourceType; // @synthesize moduleSourceType=_moduleSourceType;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) int hotelDataType; // @synthesize hotelDataType=_hotelDataType;
@property(nonatomic) int hotelID; // @synthesize hotelID=_hotelID;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(copy, nonatomic) NSString *radium; // @synthesize radium=_radium;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

