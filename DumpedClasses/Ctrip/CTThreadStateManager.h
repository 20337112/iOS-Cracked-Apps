//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CTThreadStateManager : NSObject
{
    NSMutableDictionary *_threadStatusMap;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *threadStatusMap; // @synthesize threadStatusMap=_threadStatusMap;
- (void).cxx_destruct;
- (void)removeThreadStateByToken:(id)arg1;
- (_Bool)isThreadCancel:(id)arg1;
- (void)setThreadState:(int)arg1 token:(id)arg2;
- (id)getThreadStateByToken:(id)arg1;
- (id)init;

@end

