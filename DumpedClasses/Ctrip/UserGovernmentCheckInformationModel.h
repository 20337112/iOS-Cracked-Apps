//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface UserGovernmentCheckInformationModel : CTBusinessBean
{
    int _cardEType;
    int _result;
    int _count;
    NSString *_passengerName;
    NSString *_cardNumber;
}

@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(nonatomic) int cardEType; // @synthesize cardEType=_cardEType;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName=_passengerName;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

