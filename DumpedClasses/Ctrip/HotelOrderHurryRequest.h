//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOrderHurryRequest : CTBusinessBean
{
    int _hurryType;
    long long _orderId;
    NSString *_roomNo;
}

@property(nonatomic) int hurryType; // @synthesize hurryType=_hurryType;
@property(copy, nonatomic) NSString *roomNo; // @synthesize roomNo=_roomNo;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

