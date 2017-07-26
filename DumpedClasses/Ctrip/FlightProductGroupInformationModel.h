//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightIntlProductAttributeInformationModel, FlightSegmentDateInformationModel, NSMutableArray, NSString;

@interface FlightProductGroupInformationModel : CTBusinessBean
{
    NSString *productID;
    FlightIntlProductAttributeInformationModel *productAttributeInfoModel;
    int segmentNo;
    NSMutableArray *flightList;
    FlightSegmentDateInformationModel *travelTimeModel;
    NSMutableArray *policyList;
    NSString *paramJsonStr;
    long long flagMap;
}

@property(nonatomic) long long flagMap; // @synthesize flagMap;
@property(copy, nonatomic) NSString *paramJsonStr; // @synthesize paramJsonStr;
@property(retain, nonatomic) NSMutableArray *policyList; // @synthesize policyList;
@property(retain, nonatomic) FlightSegmentDateInformationModel *travelTimeModel; // @synthesize travelTimeModel;
@property(retain, nonatomic) NSMutableArray *flightList; // @synthesize flightList;
@property(nonatomic) int segmentNo; // @synthesize segmentNo;
@property(retain, nonatomic) FlightIntlProductAttributeInformationModel *productAttributeInfoModel; // @synthesize productAttributeInfoModel;
@property(copy, nonatomic) NSString *productID; // @synthesize productID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

