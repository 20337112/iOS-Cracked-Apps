//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPTrackingInfo.h"

@class NSObject<OS_dispatch_source>, NSString, XMPPElement;

@interface XMPPBasicTrackingInfo : NSObject <XMPPTrackingInfo>
{
    id target;
    SEL selector;
    CDUnknownBlockType block;
    double timeout;
    NSString *elementID;
    XMPPElement *element;
    NSObject<OS_dispatch_source> *timer;
}

@property(copy, nonatomic) XMPPElement *element; // @synthesize element;
@property(copy, nonatomic) NSString *elementID; // @synthesize elementID;
@property(readonly, nonatomic) double timeout; // @synthesize timeout;
- (void).cxx_destruct;
- (void)invokeWithObject:(id)arg1;
- (void)cancelTimer;
- (void)createTimerWithDispatchQueue:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 timeout:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

