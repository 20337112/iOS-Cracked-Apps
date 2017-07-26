//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainJLTaskInfoModel : CTBusinessBean
{
    NSString *departStation;
    NSString *arriveStation;
    NSString *departDate;
    NSString *trainNum;
    NSString *seatName;
    int jLTimes;
    int jLRate;
    NSString *jLExpiredTime;
    NSString *statusName;
    long long orderId;
    _Bool isCanRemove;
    NSString *noRemoveMessage;
    NSString *tips;
    NSString *jLAlternativeDate;
    NSString *jLBeginDateTime;
}

@property(copy, nonatomic) NSString *jLBeginDateTime; // @synthesize jLBeginDateTime;
@property(copy, nonatomic) NSString *jLAlternativeDate; // @synthesize jLAlternativeDate;
@property(copy, nonatomic) NSString *tips; // @synthesize tips;
@property(copy, nonatomic) NSString *noRemoveMessage; // @synthesize noRemoveMessage;
@property(nonatomic) _Bool isCanRemove; // @synthesize isCanRemove;
@property(nonatomic) long long orderId; // @synthesize orderId;
@property(copy, nonatomic) NSString *statusName; // @synthesize statusName;
@property(copy, nonatomic) NSString *jLExpiredTime; // @synthesize jLExpiredTime;
@property(nonatomic) int jLRate; // @synthesize jLRate;
@property(nonatomic) int jLTimes; // @synthesize jLTimes;
@property(copy, nonatomic) NSString *seatName; // @synthesize seatName;
@property(copy, nonatomic) NSString *trainNum; // @synthesize trainNum;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
@property(copy, nonatomic) NSString *arriveStation; // @synthesize arriveStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

