//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface TrainTicketInfoModel : CTBusinessBean
{
    NSString *trainNumber;
    PriceType *ticketPrice;
    NSString *departureDateTime;
    NSString *seatTypeName;
    int routeSequence;
    NSString *departStation;
    NSString *arriveStation;
    NSString *arriveDateTime;
    NSString *alternativeSeat;
    NSString *jLAlternativeTrain;
    NSString *jLAlternativeSeat;
}

+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSString *jLAlternativeSeat; // @synthesize jLAlternativeSeat;
@property(copy, nonatomic) NSString *jLAlternativeTrain; // @synthesize jLAlternativeTrain;
@property(copy, nonatomic) NSString *alternativeSeat; // @synthesize alternativeSeat;
@property(copy, nonatomic) NSString *arriveDateTime; // @synthesize arriveDateTime;
@property(copy, nonatomic) NSString *arriveStation; // @synthesize arriveStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation;
@property(nonatomic) int routeSequence; // @synthesize routeSequence;
@property(copy, nonatomic) NSString *seatTypeName; // @synthesize seatTypeName;
@property(copy, nonatomic) NSString *departureDateTime; // @synthesize departureDateTime;
@property(retain, nonatomic) PriceType *ticketPrice; // @synthesize ticketPrice;
@property(copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

