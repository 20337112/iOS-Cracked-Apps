//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface BrowseHistoryInformationModel : CTBusinessBean
{
    int bizType;
    NSString *visitTime;
    NSString *title;
    NSString *departureCityName;
    NSString *arrivalCityName;
    NSString *startTime;
    NSString *endTime;
    NSString *imageUrl;
    NSString *jumpUrl;
    NSString *priceLabel;
    _Bool isSearch;
    NSMutableArray *extensionsList;
}

@property(retain, nonatomic) NSMutableArray *extensionsList; // @synthesize extensionsList;
@property(nonatomic) _Bool isSearch; // @synthesize isSearch;
@property(copy, nonatomic) NSString *priceLabel; // @synthesize priceLabel;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime;
@property(copy, nonatomic) NSString *arrivalCityName; // @synthesize arrivalCityName;
@property(copy, nonatomic) NSString *departureCityName; // @synthesize departureCityName;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *visitTime; // @synthesize visitTime;
@property(nonatomic) int bizType; // @synthesize bizType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

