//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOrderCancelRequest : CTBusinessBean
{
    int _serviceVersion;
    int _refundItemID;
    long long _orderId;
    NSString *_reason;
}

@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) int refundItemID; // @synthesize refundItemID=_refundItemID;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

