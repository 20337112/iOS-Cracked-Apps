//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainPushHoldSeatResultResponse : CTBusinessBean
{
    int result;
    NSString *resultMessage;
}

@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

