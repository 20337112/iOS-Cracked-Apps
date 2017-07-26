//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface RegionInformationModel : CTBusinessBean
{
    int _cityID;
    int _districtID;
    int _countryType;
    NSString *_cityName;
    NSString *_districtName;
    NSString *_provinceName;
    NSString *_countryName;
}

@property(nonatomic) int countryType; // @synthesize countryType=_countryType;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int districtID; // @synthesize districtID=_districtID;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

