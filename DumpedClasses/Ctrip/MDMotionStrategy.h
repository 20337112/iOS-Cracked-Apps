//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AbsInteractiveStrategy.h"

@class CMMotionManager;

@interface MDMotionStrategy : AbsInteractiveStrategy
{
    CMMotionManager *_motionManager;
}

@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)stopDeviceMotion;
- (void)startDeviceMotion;
- (void)off;
- (void)on;

@end

