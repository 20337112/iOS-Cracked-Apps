//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class RequestHead;

@interface HotelConditionSearchRequest : CTBusinessBean
{
    int _serviceVersion;
    int _cityID;
    int _distinctID;
    int _dataFor;
    RequestHead *_head;
}

@property(nonatomic) int dataFor; // @synthesize dataFor=_dataFor;
@property(nonatomic) int distinctID; // @synthesize distinctID=_distinctID;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

