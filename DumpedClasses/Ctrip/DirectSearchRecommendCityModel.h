//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface DirectSearchRecommendCityModel : CTBusinessBean
{
    _Bool _isDomestic;
    int _cityID;
    NSString *_cityName;
    NSString *_provinceName;
    NSString *_keyword;
    NSString *_countryName;
}

@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) _Bool isDomestic; // @synthesize isDomestic=_isDomestic;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

