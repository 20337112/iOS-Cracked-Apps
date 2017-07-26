//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface CTCallTimer : NSObject
{
    NSObject<OS_dispatch_source> *timer;
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initScheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (id)initScheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

