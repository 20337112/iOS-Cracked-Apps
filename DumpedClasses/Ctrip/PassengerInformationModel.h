//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface PassengerInformationModel : CTBusinessBean
{
    NSString *_passengerName;
    NSString *_seatNo;
}

@property(copy, nonatomic) NSString *seatNo; // @synthesize seatNo=_seatNo;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName=_passengerName;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

