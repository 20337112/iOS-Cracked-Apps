//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface CTARDataCenter : NSObject
{
    int _requestedCityID;
    int _captureDistance;
    NSMutableArray *_pointList;
    NSMutableArray *_removeList;
    double _lBSActivityID;
    double _districtID;
    NSString *_requestedCityName;
    NSString *_achievementUrl;
    NSString *_activityHomeUrl;
    NSString *_backgroundImgUrl;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *backgroundImgUrl; // @synthesize backgroundImgUrl=_backgroundImgUrl;
@property(copy, nonatomic) NSString *activityHomeUrl; // @synthesize activityHomeUrl=_activityHomeUrl;
@property(copy, nonatomic) NSString *achievementUrl; // @synthesize achievementUrl=_achievementUrl;
@property(copy, nonatomic) NSString *requestedCityName; // @synthesize requestedCityName=_requestedCityName;
@property(nonatomic) int captureDistance; // @synthesize captureDistance=_captureDistance;
@property(nonatomic) int requestedCityID; // @synthesize requestedCityID=_requestedCityID;
@property(nonatomic) double districtID; // @synthesize districtID=_districtID;
@property(nonatomic) double lBSActivityID; // @synthesize lBSActivityID=_lBSActivityID;
@property(retain, nonatomic) NSMutableArray *removeList; // @synthesize removeList=_removeList;
@property(retain, nonatomic) NSMutableArray *pointList; // @synthesize pointList=_pointList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanData;
- (id)init;

@end

