//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTImageView.h"

@class NSTimer, UIView;

@interface CTChatProgressImageView : CTImageView
{
    double _scale;
    id <CTChatProgressImageViewDelegate> _progressDelegate;
    UIView *_maskView;
    NSTimer *_maskTimer;
}

@property(retain, nonatomic) NSTimer *maskTimer; // @synthesize maskTimer=_maskTimer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak id <CTChatProgressImageViewDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (void)setMaskViewFrame:(struct CGRect)arg1;
- (void)maskScaleIncreased;
- (void)stopMaksAnimating;
- (void)startMaskAnimatingWithScale:(double)arg1;
- (void)startMaskAnimating;
- (void)setUpMaskView;
- (id)initWithPlaceHoldImage:(id)arg1;

@end
