//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CRNCityModel : NSObject
{
    int _cityId;
    int _countryType;
    NSString *_cityName;
    NSString *_cityNameEn;
}

@property(nonatomic) int countryType; // @synthesize countryType=_countryType;
@property(retain, nonatomic) NSString *cityNameEn; // @synthesize cityNameEn=_cityNameEn;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
- (void).cxx_destruct;

@end

