//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "RemoteControl.h"

@class CD, FM_ProgramBean, KGLiveManager, MPMoviePlayerController, NSDate, NSMutableDictionary, NSString, NSTimer, PollRequestHandler, SongPollRequestHandler, UIImageView;

@interface M3u8Player : NSObject <RemoteControl, NSCoding>
{
    MPMoviePlayerController *player;
    KGLiveManager *livePlayer;
    _Bool isBackup;
    _Bool isStopBtn;
    int dnsIndex;
    int retryTimes;
    int interrupState;
    NSTimer *durationTimer;
    NSTimer *bufferTimer;
    int firstBufferStart;
    int bufferStart;
    _Bool firstStart;
    _Bool retrying;
    NSDate *startDate;
    double palyStopInterval;
    NSDate *bufferDate;
    double bufferInterval;
    _Bool firstBuffer;
    _Bool hasSendStopNoti;
    _Bool _isPlaying;
    _Bool _isBuffering;
    _Bool _buttonStop;
    _Bool _isPost;
    _Bool _hasHeadset;
    _Bool _headSetPauseState;
    int _rateType;
    int _times;
    int _playState;
    int _beginInterupState;
    KGLiveManager *_livePlayer;
    CD *_cd;
    long long _duration;
    NSTimer *_staticsTimer;
    FM_ProgramBean *_currentProgramBean;
    SongPollRequestHandler *_songRequest;
    NSMutableDictionary *_dnsServer;
    long long _networkStatus;
    PollRequestHandler *_pollRequest;
    double _beginTime;
    UIImageView *_posterImageView;
    NSString *_telecomUrlStr;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *telecomUrlStr; // @synthesize telecomUrlStr=_telecomUrlStr;
@property(retain, nonatomic) UIImageView *posterImageView; // @synthesize posterImageView=_posterImageView;
@property _Bool headSetPauseState; // @synthesize headSetPauseState=_headSetPauseState;
@property _Bool hasHeadset; // @synthesize hasHeadset=_hasHeadset;
@property double beginTime; // @synthesize beginTime=_beginTime;
@property int beginInterupState; // @synthesize beginInterupState=_beginInterupState;
@property int playState; // @synthesize playState=_playState;
@property(retain, nonatomic) PollRequestHandler *pollRequest; // @synthesize pollRequest=_pollRequest;
@property long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) NSMutableDictionary *dnsServer; // @synthesize dnsServer=_dnsServer;
@property(retain, nonatomic) SongPollRequestHandler *songRequest; // @synthesize songRequest=_songRequest;
@property(retain, nonatomic) FM_ProgramBean *currentProgramBean; // @synthesize currentProgramBean=_currentProgramBean;
@property(retain, nonatomic) NSTimer *staticsTimer; // @synthesize staticsTimer=_staticsTimer;
@property _Bool isPost; // @synthesize isPost=_isPost;
@property _Bool buttonStop; // @synthesize buttonStop=_buttonStop;
@property int times; // @synthesize times=_times;
@property int rateType; // @synthesize rateType=_rateType;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) CD *cd; // @synthesize cd=_cd;
@property(readonly, nonatomic) KGLiveManager *livePlayer; // @synthesize livePlayer=_livePlayer;
- (void).cxx_destruct;
- (void)endAPMWithIsSuccess:(_Bool)arg1 AndErrorCode:(long long)arg2;
- (void)startAPM;
- (void)configPlayingImage;
- (_Bool)playTips;
- (void)playPreviousProgram;
- (void)playNextProgram;
- (void)handleRemoteControl:(id)arg1;
- (_Bool)kgRemoteControlReceivedWithEvent:(id)arg1;
- (void)playerPlay:(id)arg1;
- (void)playerStop:(id)arg1;
- (void)newPlayerStop:(id)arg1;
- (void)bufferRetry;
- (void)change2Wifi:(id)arg1;
- (void)routeChangedNotifyCallback:(id)arg1;
- (void)interruptionNotifyCallback:(id)arg1;
- (void)recordNotifyCallback:(id)arg1;
- (void)staticsSend;
- (void)setPlayState;
- (void)setStopState;
- (void)setBufferStateWithStart:(_Bool)arg1;
- (void)loadStateChange:(id)arg1;
- (void)playbackFinish:(id)arg1;
- (void)playbackChange:(id)arg1;
- (void)playerStateError;
- (void)checkPlayerStatus;
- (void)playerStateBufferring;
- (void)dealloc;
- (void)cancelObserver;
- (void)setupObserver;
- (void)retryPlayBackup;
- (void)errorRetryPlay;
- (void)retryPlay;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPreProgramBean;
- (id)getNextProgramBean;
- (id)converToM3u8String:(id)arg1;
- (void)countDuration;
- (void)stopCurrentProgram;
- (void)stopButton;
- (void)stop;
- (void)setCD:(id)arg1 programBean:(id)arg2;
- (void)playProgramBeanPrivate:(_Bool)arg1;
- (void)playProgramBean;
- (void)playCheck;
- (void)playProgramBeanByCheckWifi;
- (void)streamChange:(id)arg1;
- (void)enter2Background:(id)arg1;
- (void)changeNetwork:(id)arg1;
- (void)setTelecomProxy:(id)arg1;
- (void)reSetTelecomProxy;
- (void)telecomStateChanged;
- (void)unicomVipState;
- (void)unicomSubProduct;
- (void)setUTProxy;
- (void)onlyWifiSwitch:(id)arg1;
- (void)onlyWifiCancelBtnClick:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

