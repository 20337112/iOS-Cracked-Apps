//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelZoneMetroDataModel : CTBusinessBean
{
    int _landmarkIndex;
    int _flag;
    int _weightFlag;
    NSString *_landmarkName;
    NSString *_landmarkNamePY;
    NSString *_landmarkNameJP;
    NSString *_firstLetter;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_landmarkCode;
    NSString *_landmarkEnName;
}

@property(copy, nonatomic) NSString *landmarkEnName; // @synthesize landmarkEnName=_landmarkEnName;
@property(copy, nonatomic) NSString *landmarkCode; // @synthesize landmarkCode=_landmarkCode;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int weightFlag; // @synthesize weightFlag=_weightFlag;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *firstLetter; // @synthesize firstLetter=_firstLetter;
@property(copy, nonatomic) NSString *landmarkNameJP; // @synthesize landmarkNameJP=_landmarkNameJP;
@property(copy, nonatomic) NSString *landmarkNamePY; // @synthesize landmarkNamePY=_landmarkNamePY;
@property(copy, nonatomic) NSString *landmarkName; // @synthesize landmarkName=_landmarkName;
@property(nonatomic) int landmarkIndex; // @synthesize landmarkIndex=_landmarkIndex;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

