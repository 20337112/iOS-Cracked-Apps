//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelNotifyV2Model : CTBusinessBean
{
    int _notifyType;
    int _hotelID;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int hotelID; // @synthesize hotelID=_hotelID;
@property(nonatomic) int notifyType; // @synthesize notifyType=_notifyType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

