//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface OperationInfoModel : CTBusinessBean
{
    int _operationStatusflag;
    NSString *_operationStatusName;
    NSString *_operationStatusMsg;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *operationStatusMsg; // @synthesize operationStatusMsg=_operationStatusMsg;
@property(copy, nonatomic) NSString *operationStatusName; // @synthesize operationStatusName=_operationStatusName;
@property(nonatomic) int operationStatusflag; // @synthesize operationStatusflag=_operationStatusflag;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

