//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainAccountPassengerModel : CTBusinessBean
{
    NSString *passengerName;
    NSString *iDCardNumber;
    NSString *iDCardTypeName;
    int checkStatus;
}

@property(nonatomic) int checkStatus; // @synthesize checkStatus;
@property(copy, nonatomic) NSString *iDCardTypeName; // @synthesize iDCardTypeName;
@property(copy, nonatomic) NSString *iDCardNumber; // @synthesize iDCardNumber;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

