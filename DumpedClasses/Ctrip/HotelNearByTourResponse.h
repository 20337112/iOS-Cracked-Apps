//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, ResponseHead;

@interface HotelNearByTourResponse : CTBusinessBean
{
    int _result;
    ResponseHead *_head;
    NSString *_resultMessage;
    NSMutableArray *_hotelNearByTourInfoList;
}

@property(retain, nonatomic) NSMutableArray *hotelNearByTourInfoList; // @synthesize hotelNearByTourInfoList=_hotelNearByTourInfoList;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
@property(retain, nonatomic) ResponseHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

