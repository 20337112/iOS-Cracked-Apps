//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainGetPaymentResultForZLResponse : CTBusinessBean
{
    NSString *message;
    int retCode;
    int pushTimes;
    int waitSecond;
    NSString *waitMessage;
}

@property(copy, nonatomic) NSString *waitMessage; // @synthesize waitMessage;
@property(nonatomic) int waitSecond; // @synthesize waitSecond;
@property(nonatomic) int pushTimes; // @synthesize pushTimes;
@property(nonatomic) int retCode; // @synthesize retCode;
@property(copy, nonatomic) NSString *message; // @synthesize message;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

