//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightUseCarAddressSearchRequest : CTBusinessBean
{
    int _serviceType;
    NSString *_airportCode;
    NSString *_keyWord;
    NSString *_gUID;
    NSString *_cityCode;
}

@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSString *gUID; // @synthesize gUID=_gUID;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(copy, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

