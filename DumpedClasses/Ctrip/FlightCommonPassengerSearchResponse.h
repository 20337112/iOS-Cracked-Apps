//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightCommonPassengerSearchResponse : CTBusinessBean
{
    int result;
    NSString *errMessage;
    int passengerCount;
    NSMutableArray *flightCommonPassengerInfoItemList;
    NSMutableArray *noteList;
}

@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList;
@property(retain, nonatomic) NSMutableArray *flightCommonPassengerInfoItemList; // @synthesize flightCommonPassengerInfoItemList;
@property(nonatomic) int passengerCount; // @synthesize passengerCount;
@property(copy, nonatomic) NSString *errMessage; // @synthesize errMessage;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

