//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTFlightListToMiddlePageAnimationManager : NSObject
{
    _Bool _enableAnimation;
    _Bool _isAnimationed;
    double _animationDuration;
    double _middleEditPageAnimationDuration;
}

+ (void)closeAnimationStatus;
+ (void)openAnimationStatus;
+ (id)shareInstance;
@property(nonatomic) double middleEditPageAnimationDuration; // @synthesize middleEditPageAnimationDuration=_middleEditPageAnimationDuration;
@property(nonatomic) _Bool isAnimationed; // @synthesize isAnimationed=_isAnimationed;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;

@end

