//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainValidateContactResultModel : CTBusinessBean
{
    NSString *name;
    NSString *passportNo;
    _Bool isPass;
    NSString *message;
    int retCode;
}

@property(nonatomic) int retCode; // @synthesize retCode;
@property(copy, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) _Bool isPass; // @synthesize isPass;
@property(copy, nonatomic) NSString *passportNo; // @synthesize passportNo;
@property(copy, nonatomic) NSString *name; // @synthesize name;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

