//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainTimetableListSearchV2Request : CTBusinessBean
{
    int serviceVersion;
    NSString *trainNumber;
    NSString *departStation;
    NSString *arrStation;
    NSString *departDate;
}

@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
@property(copy, nonatomic) NSString *arrStation; // @synthesize arrStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation;
@property(copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

