//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class PriceType;

@interface FlightIntlQTEPriceCheckInformationModel : CTBusinessBean
{
    int segmentNO;
    int passengerType;
    int changeType;
    PriceType *changedPrice;
}

@property(retain, nonatomic) PriceType *changedPrice; // @synthesize changedPrice;
@property(nonatomic) int changeType; // @synthesize changeType;
@property(nonatomic) int passengerType; // @synthesize passengerType;
@property(nonatomic) int segmentNO; // @synthesize segmentNO;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

