//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface StageInfoQueryServiceResponse : CTBusinessBean
{
    int result;
    NSString *subCode;
    NSString *resultMessage;
    NSString *debugMessage;
    NSString *payCurrency;
    PriceType *payBalance;
    int currentStatus;
    NSMutableArray *stageInfoList;
}

@property(retain, nonatomic) NSMutableArray *stageInfoList; // @synthesize stageInfoList;
@property(nonatomic) int currentStatus; // @synthesize currentStatus;
@property(retain, nonatomic) PriceType *payBalance; // @synthesize payBalance;
@property(copy, nonatomic) NSString *payCurrency; // @synthesize payCurrency;
@property(copy, nonatomic) NSString *debugMessage; // @synthesize debugMessage;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

