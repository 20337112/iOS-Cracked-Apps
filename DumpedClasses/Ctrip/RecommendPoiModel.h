//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class BasicCoordinateModel, NSMutableArray, NSString;

@interface RecommendPoiModel : CTBusinessBean
{
    long long poiId;
    int poiType;
    NSString *name;
    int districtId;
    NSString *districtName;
    NSString *districtEName;
    NSString *districtType;
    BasicCoordinateModel *locationInfoModel;
    NSString *distance;
    NSString *rating;
    NSString *coverImageUrl;
    NSMutableArray *imageList;
    NSString *introduce;
    int businessId;
    NSString *address;
    NSString *detailUrl;
}

@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl;
@property(copy, nonatomic) NSString *address; // @synthesize address;
@property(nonatomic) int businessId; // @synthesize businessId;
@property(copy, nonatomic) NSString *introduce; // @synthesize introduce;
@property(retain, nonatomic) NSMutableArray *imageList; // @synthesize imageList;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl;
@property(copy, nonatomic) NSString *rating; // @synthesize rating;
@property(copy, nonatomic) NSString *distance; // @synthesize distance;
@property(retain, nonatomic) BasicCoordinateModel *locationInfoModel; // @synthesize locationInfoModel;
@property(copy, nonatomic) NSString *districtType; // @synthesize districtType;
@property(copy, nonatomic) NSString *districtEName; // @synthesize districtEName;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName;
@property(nonatomic) int districtId; // @synthesize districtId;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int poiType; // @synthesize poiType;
@property(nonatomic) long long poiId; // @synthesize poiId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
