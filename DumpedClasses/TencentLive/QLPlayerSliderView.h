//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSDateFormatter, NSDictionary, QLMovieBaseControlView, QLSliderPoint, QLSliderPointInfo, UIFont, UIImage, UIImageView;

@interface QLPlayerSliderView : UIView
{
    UIImage *_imgNormal;
    UIImage *_imgPlayed;
    UIImage *_imgCached;
    UIImageView *_imgKnobView;
    UIImage *_hitPointImage;
    UIFont *_timeFont;
    _Bool _bDragging;
    _Bool _enableMove;
    _Bool _stopPlayableDrawRect;
    int _sliderMode;
    int _dragDirection;
    NSDateFormatter *_formatter;
    QLMovieBaseControlView *_mainCtlView;
    NSDate *_dragDate;
    id <QLSliderActionProtocol> _sliderActionDelegte;
    id <QLSliderTouchActionDelegate> _touchActionDelegate;
    double _currentTime;
    double _duration;
    double _playableTime;
    double _lastDragTime;
    long long _leftWidth;
    long long _rightWidth;
    double _beginDragTime;
    NSDictionary *_hitPoints;
    QLSliderPointInfo *_normalPointInfo;
    QLSliderPoint *_sliderPoint;
    UIView *_bubblePoint;
    double _bubbleTimePoint;
    struct CGRect _playableDrawRect;
}

@property(nonatomic) double bubbleTimePoint; // @synthesize bubbleTimePoint=_bubbleTimePoint;
@property(retain, nonatomic) UIView *bubblePoint; // @synthesize bubblePoint=_bubblePoint;
@property(nonatomic) _Bool stopPlayableDrawRect; // @synthesize stopPlayableDrawRect=_stopPlayableDrawRect;
@property(retain, nonatomic) QLSliderPoint *sliderPoint; // @synthesize sliderPoint=_sliderPoint;
@property(retain, nonatomic) QLSliderPointInfo *normalPointInfo; // @synthesize normalPointInfo=_normalPointInfo;
@property(nonatomic) struct CGRect playableDrawRect; // @synthesize playableDrawRect=_playableDrawRect;
@property(nonatomic) _Bool enableMove; // @synthesize enableMove=_enableMove;
@property(retain) NSDictionary *hitPoints; // @synthesize hitPoints=_hitPoints;
@property double beginDragTime; // @synthesize beginDragTime=_beginDragTime;
@property long long rightWidth; // @synthesize rightWidth=_rightWidth;
@property long long leftWidth; // @synthesize leftWidth=_leftWidth;
@property(readonly) int dragDirection; // @synthesize dragDirection=_dragDirection;
@property double lastDragTime; // @synthesize lastDragTime=_lastDragTime;
@property double playableTime; // @synthesize playableTime=_playableTime;
@property double duration; // @synthesize duration=_duration;
@property double currentTime; // @synthesize currentTime=_currentTime;
@property __weak id <QLSliderTouchActionDelegate> touchActionDelegate; // @synthesize touchActionDelegate=_touchActionDelegate;
@property __weak id <QLSliderActionProtocol> sliderActionDelegte; // @synthesize sliderActionDelegte=_sliderActionDelegte;
@property(retain) NSDate *dragDate; // @synthesize dragDate=_dragDate;
@property __weak QLMovieBaseControlView *mainCtlView; // @synthesize mainCtlView=_mainCtlView;
@property _Bool bDragging; // @synthesize bDragging=_bDragging;
@property(nonatomic) int sliderMode; // @synthesize sliderMode=_sliderMode;
- (void).cxx_destruct;
- (struct CGPoint)getBubblePointPosition;
- (struct CGPoint)getBubblePointPosByTime:(double)arg1;
- (void)updateBubblePointPosition:(struct CGRect)arg1;
- (void)removeBubblePoint;
- (void)showBubblePointAtTime:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)exposureLoadingView:(id)arg1;
- (void)updateSliderPoint;
- (void)tapSlider:(id)arg1;
- (void)jumpAnimation:(double)arg1;
- (struct CGPoint)getPosByTime:(double)arg1;
- (void)checkTheSlideStatus;
- (_Bool)isShowHitPointInPlayer;
- (void)drawHitPoin:(long long)arg1 height:(long long)arg2 duration:(double)arg3;
- (void)setHitPoint:(id)arg1;
- (void)seekEnd;
- (void)touchSeekEnd;
- (void)seekToTime:(double)arg1;
- (void)seekByPercent:(double)arg1;
- (void)resetPlayableDrawRect;
- (void)dragSliderViewEnable:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
@property(readonly) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
- (struct CGPoint)knobUpCenter;
- (id)gestureString;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)currentPlayableRect;
- (void)updatePlayableTimeToZero;
- (void)flushWithCurrent:(double)arg1 duration:(double)arg2 playable:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 model:(int)arg2;

@end

