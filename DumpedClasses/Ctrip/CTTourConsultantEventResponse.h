//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSNumber, NSString;

@interface CTTourConsultantEventResponse : CTJSONModel
{
    NSNumber *_isSuccess;
    NSString *_eventID;
    NSString *_waitsCount;
    NSString *_waitsTime;
}

@property(copy, nonatomic) NSString *waitsTime; // @synthesize waitsTime=_waitsTime;
@property(copy, nonatomic) NSString *waitsCount; // @synthesize waitsCount=_waitsCount;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(retain, nonatomic) NSNumber *isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;

@end

