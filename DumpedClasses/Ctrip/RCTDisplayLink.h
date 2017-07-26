//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableSet, NSRunLoop;

@interface RCTDisplayLink : NSObject
{
    CADisplayLink *_jsDisplayLink;
    NSMutableSet *_frameUpdateObservers;
    NSRunLoop *_runLoop;
}

- (void).cxx_destruct;
- (void)updateJSDisplayLinkState;
- (void)_jsThreadUpdate:(id)arg1;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)assertOnRunLoop;
- (void)invalidate;
- (void)addToRunLoop:(id)arg1;
- (void)registerModuleForFrameUpdates:(id)arg1 withModuleData:(id)arg2;
- (id)init;

@end

