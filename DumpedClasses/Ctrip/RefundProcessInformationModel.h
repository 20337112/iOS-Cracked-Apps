//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface RefundProcessInformationModel : CTBusinessBean
{
    NSString *processName;
    NSString *processOpTime;
    NSString *processDesc;
    int processStatus;
}

@property(nonatomic) int processStatus; // @synthesize processStatus;
@property(copy, nonatomic) NSString *processDesc; // @synthesize processDesc;
@property(copy, nonatomic) NSString *processOpTime; // @synthesize processOpTime;
@property(copy, nonatomic) NSString *processName; // @synthesize processName;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

