//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelCommentUsefulPushInformationModel : CTBusinessBean
{
    int _pushFlagBitMap;
    NSString *_usefulUserNumber;
    NSString *_notifyDate;
    NSString *_pushExpirationTime;
}

@property(copy, nonatomic) NSString *pushExpirationTime; // @synthesize pushExpirationTime=_pushExpirationTime;
@property(copy, nonatomic) NSString *notifyDate; // @synthesize notifyDate=_notifyDate;
@property(nonatomic) int pushFlagBitMap; // @synthesize pushFlagBitMap=_pushFlagBitMap;
@property(copy, nonatomic) NSString *usefulUserNumber; // @synthesize usefulUserNumber=_usefulUserNumber;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

