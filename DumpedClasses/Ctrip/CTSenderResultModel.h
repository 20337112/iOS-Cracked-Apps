//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTSenderResultModel : NSObject
{
    _Bool _isUnSync;
    _Bool _checkResult;
    int _taskType;
    int _errorCode;
    NSString *_token;
    NSString *_checkErrorInfo;
}

@property(copy, nonatomic) NSString *checkErrorInfo; // @synthesize checkErrorInfo=_checkErrorInfo;
@property(nonatomic) _Bool checkResult; // @synthesize checkResult=_checkResult;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool isUnSync; // @synthesize isUnSync=_isUnSync;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
- (void).cxx_destruct;
- (id)init;

@end

