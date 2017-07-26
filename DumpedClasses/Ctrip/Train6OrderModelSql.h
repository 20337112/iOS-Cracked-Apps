//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Train6OrderModelSql : NSObject
{
    NSString *_ctripOrderID;
    NSString *_type;
    NSString *_mAccoutName;
    NSString *_orderType;
    NSString *_oldTicketDate;
    NSString *_orderDate;
    NSString *_realPay;
    NSString *_orderTimeoutDate;
    NSString *_orderAction;
    NSString *_shortOrderNo12306;
    NSString *_orderStatus;
    long long _canCancel;
    long long _canPay;
    long long _canReturn;
    long long _canResignPay;
    long long _canResign;
    long long _canChange;
    long long _cacheOrder;
    NSString *_topMessage;
    NSString *_topMessageUrl;
    long long _isWaitPay;
    NSString *_payMode;
    long long _statusValue;
    NSString *_ticketsInfo;
}

@property(copy, nonatomic) NSString *ticketsInfo; // @synthesize ticketsInfo=_ticketsInfo;
@property(nonatomic) long long statusValue; // @synthesize statusValue=_statusValue;
@property(copy, nonatomic) NSString *payMode; // @synthesize payMode=_payMode;
@property(nonatomic) long long isWaitPay; // @synthesize isWaitPay=_isWaitPay;
@property(copy, nonatomic) NSString *topMessageUrl; // @synthesize topMessageUrl=_topMessageUrl;
@property(copy, nonatomic) NSString *topMessage; // @synthesize topMessage=_topMessage;
@property(nonatomic) long long cacheOrder; // @synthesize cacheOrder=_cacheOrder;
@property(nonatomic) long long canChange; // @synthesize canChange=_canChange;
@property(nonatomic) long long canResign; // @synthesize canResign=_canResign;
@property(nonatomic) long long canResignPay; // @synthesize canResignPay=_canResignPay;
@property(nonatomic) long long canReturn; // @synthesize canReturn=_canReturn;
@property(nonatomic) long long canPay; // @synthesize canPay=_canPay;
@property(nonatomic) long long canCancel; // @synthesize canCancel=_canCancel;
@property(copy, nonatomic) NSString *orderStatus; // @synthesize orderStatus=_orderStatus;
@property(copy, nonatomic) NSString *shortOrderNo12306; // @synthesize shortOrderNo12306=_shortOrderNo12306;
@property(copy, nonatomic) NSString *orderAction; // @synthesize orderAction=_orderAction;
@property(copy, nonatomic) NSString *orderTimeoutDate; // @synthesize orderTimeoutDate=_orderTimeoutDate;
@property(copy, nonatomic) NSString *realPay; // @synthesize realPay=_realPay;
@property(copy, nonatomic) NSString *orderDate; // @synthesize orderDate=_orderDate;
@property(copy, nonatomic) NSString *oldTicketDate; // @synthesize oldTicketDate=_oldTicketDate;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSString *mAccoutName; // @synthesize mAccoutName=_mAccoutName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *ctripOrderID; // @synthesize ctripOrderID=_ctripOrderID;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg1;

@end

