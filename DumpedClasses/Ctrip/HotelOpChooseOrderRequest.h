//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, RequestHead;

@interface HotelOpChooseOrderRequest : CTBusinessBean
{
    int _serviceVersion;
    RequestHead *_head;
    long long _sessionId;
    long long _orderId;
    NSString *_extInfo;
}

@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

