//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightInlandMiddlePackageBaseInformationModel, NSMutableArray, NSString;

@interface FlightInlandMiddlePackageInformationModel : CTBusinessBean
{
    int segmentNo;
    FlightInlandMiddlePackageBaseInformationModel *packageBasicInfoModel;
    NSMutableArray *salePolicyInfoList;
    NSString *packageString;
    long long packageFlag;
}

@property(nonatomic) long long packageFlag; // @synthesize packageFlag;
@property(copy, nonatomic) NSString *packageString; // @synthesize packageString;
@property(retain, nonatomic) NSMutableArray *salePolicyInfoList; // @synthesize salePolicyInfoList;
@property(retain, nonatomic) FlightInlandMiddlePackageBaseInformationModel *packageBasicInfoModel; // @synthesize packageBasicInfoModel;
@property(nonatomic) int segmentNo; // @synthesize segmentNo;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

