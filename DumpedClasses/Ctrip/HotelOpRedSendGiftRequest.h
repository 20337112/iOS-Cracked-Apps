//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, RequestHead;

@interface HotelOpRedSendGiftRequest : CTBusinessBean
{
    int _serviceVersion;
    int _number;
    RequestHead *_head;
    long long _sessionId;
    long long _giftId;
    NSMutableArray *_opRedIDList;
}

@property(retain, nonatomic) NSMutableArray *opRedIDList; // @synthesize opRedIDList=_opRedIDList;
@property(nonatomic) int number; // @synthesize number=_number;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

