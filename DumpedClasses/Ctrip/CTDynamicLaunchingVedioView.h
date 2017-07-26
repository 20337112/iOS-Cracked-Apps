//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTAdURLModel, MPMoviePlayerController, NSDictionary, NSTimer, UIButton, UILabel;

@interface CTDynamicLaunchingVedioView : UIView
{
    UIView *theNewSuperView_;
    NSDictionary *contentDic;
    NSTimer *loadMediaTimer;
    NSTimer *timer;
    int secendsCountDown;
    float displayTime;
    UIButton *linkButton;
    UIButton *customLinkButton;
    UIButton *skipButton;
    UILabel *countDownLabel;
    CTAdURLModel *adModel;
    _Bool isCustomButton;
    NSDictionary *customButtonInfo;
    _Bool _mediaDidPlay;
    MPMoviePlayerController *_mediaPlayer;
}

+ (void)showDynamicLaunchingVedioView;
@property(nonatomic) _Bool mediaDidPlay; // @synthesize mediaDidPlay=_mediaDidPlay;
@property(retain, nonatomic) MPMoviePlayerController *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
- (void).cxx_destruct;
- (id)cachedFileNameForKey:(id)arg1;
- (void)removeFromSuperview;
- (id)ADTraceParams;
- (void)skipPlayVideo;
- (void)didFinishPlay;
- (void)clearUp;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)countDown;
- (void)clickSkipBtn;
- (void)goToLinkUrl;
- (void)releaseLoadMediaTimer;
- (void)releaseTimer;
- (void)beginTimer;
- (void)addCustomLinkButton:(id)arg1;
- (void)addLinkButton;
- (void)addSkipButton;
- (void)setupWithContent;
- (void)readyDisplay;
- (id)initWithContentDic:(id)arg1;
- (void)dealloc;

@end

