//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Train6BaseModel.h"

@class NSString;

@interface TrainOrderCreateDelivery : Train6BaseModel
{
    NSString *_Address;
    NSString *_PostCode;
    NSString *_ReceiverName;
}

@property(retain, nonatomic) NSString *ReceiverName; // @synthesize ReceiverName=_ReceiverName;
@property(retain, nonatomic) NSString *PostCode; // @synthesize PostCode=_PostCode;
@property(retain, nonatomic) NSString *Address; // @synthesize Address=_Address;
- (void).cxx_destruct;
- (id)init;

@end

