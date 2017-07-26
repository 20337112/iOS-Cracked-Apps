//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightDateTimeInformationModel, FlightIntlBasicDetailInformationModel, FlightIntlDetailAirportInformationModel, FlightIntlMidCraftTypeInformationModel, FlightStopInformationModel, NSMutableArray;

@interface FlightIntlDetailInformationModel : CTBusinessBean
{
    int flightIndex;
    FlightIntlBasicDetailInformationModel *basicInfoModel;
    FlightIntlDetailAirportInformationModel *departAirportInfoModel;
    FlightIntlDetailAirportInformationModel *arriveAirportInfoModel;
    FlightDateTimeInformationModel *dateInfoModel;
    FlightIntlMidCraftTypeInformationModel *craftInfoModel;
    FlightStopInformationModel *stopInfoModel;
    NSMutableArray *flightNoteList;
}

@property(retain, nonatomic) NSMutableArray *flightNoteList; // @synthesize flightNoteList;
@property(retain, nonatomic) FlightStopInformationModel *stopInfoModel; // @synthesize stopInfoModel;
@property(retain, nonatomic) FlightIntlMidCraftTypeInformationModel *craftInfoModel; // @synthesize craftInfoModel;
@property(retain, nonatomic) FlightDateTimeInformationModel *dateInfoModel; // @synthesize dateInfoModel;
@property(retain, nonatomic) FlightIntlDetailAirportInformationModel *arriveAirportInfoModel; // @synthesize arriveAirportInfoModel;
@property(retain, nonatomic) FlightIntlDetailAirportInformationModel *departAirportInfoModel; // @synthesize departAirportInfoModel;
@property(retain, nonatomic) FlightIntlBasicDetailInformationModel *basicInfoModel; // @synthesize basicInfoModel;
@property(nonatomic) int flightIndex; // @synthesize flightIndex;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

