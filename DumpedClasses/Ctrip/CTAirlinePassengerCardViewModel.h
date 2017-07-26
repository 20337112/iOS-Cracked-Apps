//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString;

@interface CTAirlinePassengerCardViewModel : CTViewModel
{
    NSString *_cardType;
    NSString *_cardName;
    NSString *_ticketAirlineName;
    NSString *_cardNamePY;
    NSString *_cardNumber;
    NSString *_ticketAirlineCode;
}

@property(copy, nonatomic) NSString *ticketAirlineCode; // @synthesize ticketAirlineCode=_ticketAirlineCode;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *cardNamePY; // @synthesize cardNamePY=_cardNamePY;
@property(copy, nonatomic) NSString *ticketAirlineName; // @synthesize ticketAirlineName=_ticketAirlineName;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)setSaveInfoDic:(id)arg1;
- (id)saveInfoDic;
- (void)initDefaultValue;
- (void)initData;
- (id)init;

@end

