//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSString;

@interface CTActivatePhoneAppCacheBean : CTCacheBean
{
    int _result;
    int _clientState;
    int _activeTime;
    NSString *_resultMessage;
}

+ (id)getInstance;
@property(nonatomic) int activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) int clientState; // @synthesize clientState=_clientState;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)init;

@end

