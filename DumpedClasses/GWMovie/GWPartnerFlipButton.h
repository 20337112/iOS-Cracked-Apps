//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface GWPartnerFlipButton : UIButton
{
    _Bool _buttonInitStatus;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) _Bool buttonInitStatus; // @synthesize buttonInitStatus=_buttonInitStatus;
- (void).cxx_destruct;
- (_Bool)animationIsRunning;
- (void)startFlip:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)createRotateAnimation:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)turnbackAnimationForKey:(id)arg1 layer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
