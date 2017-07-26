//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightIntlPackageSwitchInformationModel, NSMutableArray, NSString;

@interface FlightIntlDetailPackageBaseInformationModel : CTBusinessBean
{
    int pageType;
    int packageTypeId;
    int packageType;
    int packageSubType;
    _Bool isSale;
    NSString *packageID;
    NSString *packageCode;
    NSString *extendParams;
    NSString *packageName;
    NSString *packageRemark;
    NSString *packageDescriptionURL;
    NSMutableArray *discountList;
    FlightIntlPackageSwitchInformationModel *packageSwitchInforModel;
    NSMutableArray *noteList;
    NSString *packageClauseKey;
    long long packageFlagMap;
}

@property(nonatomic) long long packageFlagMap; // @synthesize packageFlagMap;
@property(copy, nonatomic) NSString *packageClauseKey; // @synthesize packageClauseKey;
@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList;
@property(retain, nonatomic) FlightIntlPackageSwitchInformationModel *packageSwitchInforModel; // @synthesize packageSwitchInforModel;
@property(retain, nonatomic) NSMutableArray *discountList; // @synthesize discountList;
@property(copy, nonatomic) NSString *packageDescriptionURL; // @synthesize packageDescriptionURL;
@property(copy, nonatomic) NSString *packageRemark; // @synthesize packageRemark;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName;
@property(copy, nonatomic) NSString *extendParams; // @synthesize extendParams;
@property(copy, nonatomic) NSString *packageCode; // @synthesize packageCode;
@property(copy, nonatomic) NSString *packageID; // @synthesize packageID;
@property(nonatomic) _Bool isSale; // @synthesize isSale;
@property(nonatomic) int packageSubType; // @synthesize packageSubType;
@property(nonatomic) int packageType; // @synthesize packageType;
@property(nonatomic) int packageTypeId; // @synthesize packageTypeId;
@property(nonatomic) int pageType; // @synthesize pageType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

