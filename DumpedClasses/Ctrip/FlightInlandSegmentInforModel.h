//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightSegmentDateInformationModel, NSMutableArray, NSString, TrainItemInformationModel;

@interface FlightInlandSegmentInforModel : CTBusinessBean
{
    int segmentNo;
    NSMutableArray *flightList;
    FlightSegmentDateInformationModel *segmentInfoModel;
    NSMutableArray *airlineInfoList;
    TrainItemInformationModel *trainInfoModel;
    NSString *noteIDs;
    NSString *changeNoteRemark;
    NSString *remark;
}

@property(copy, nonatomic) NSString *remark; // @synthesize remark;
@property(copy, nonatomic) NSString *changeNoteRemark; // @synthesize changeNoteRemark;
@property(copy, nonatomic) NSString *noteIDs; // @synthesize noteIDs;
@property(retain, nonatomic) TrainItemInformationModel *trainInfoModel; // @synthesize trainInfoModel;
@property(retain, nonatomic) NSMutableArray *airlineInfoList; // @synthesize airlineInfoList;
@property(retain, nonatomic) FlightSegmentDateInformationModel *segmentInfoModel; // @synthesize segmentInfoModel;
@property(retain, nonatomic) NSMutableArray *flightList; // @synthesize flightList;
@property(nonatomic) int segmentNo; // @synthesize segmentNo;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

