//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface APLogSerialExecutor : NSObject
{
    _Bool _didSetup;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

+ (void)scheduleTask:(CDUnknownBlockType)arg1 withTimeInterval:(double)arg2 delay:(double)arg3 repeat:(_Bool)arg4;
+ (void)executeTaskAsync:(CDUnknownBlockType)arg1;
+ (void)executeTaskSync:(CDUnknownBlockType)arg1;
+ (id)sharedExecutor;
@property _Bool didSetup; // @synthesize didSetup=_didSetup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (void)scheduleTask:(CDUnknownBlockType)arg1 withTimeInterval:(double)arg2 delay:(double)arg3 repeat:(_Bool)arg4;
- (void)executeTaskSync:(CDUnknownBlockType)arg1;
- (void)executeTaskAsync:(CDUnknownBlockType)arg1;
- (void)setSingleThreadEnable:(_Bool)arg1;
- (void)setupQueue;
- (id)init;

@end
