//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;
@protocol UIViewControllerContextTransitioning;

@interface GWCircleAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    CDUnknownBlockType _transitionAnimationFinisedBlock;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_maskView;
}

@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(copy, nonatomic) CDUnknownBlockType transitionAnimationFinisedBlock; // @synthesize transitionAnimationFinisedBlock=_transitionAnimationFinisedBlock;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateToView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animation:(id)arg1 animationView:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
