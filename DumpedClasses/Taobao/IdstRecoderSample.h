//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString;

@interface IdstRecoderSample : NSObject
{
    struct OpaqueAudioQueue *mQueue;
    _Bool _inBackground;
    unsigned long long _retried;
    int _state;
    id <IdstRecoderSampleDelegate> _delegate;
    unsigned long long _currentVoiceVolume;
    unsigned long long _retryTimes;
    double _retryInterval;
    NSMutableData *_bufferedVoiceData;
    NSString *_originCategory;
}

@property(copy, nonatomic) NSString *originCategory; // @synthesize originCategory=_originCategory;
@property(retain, nonatomic) NSMutableData *bufferedVoiceData; // @synthesize bufferedVoiceData=_bufferedVoiceData;
@property int state; // @synthesize state=_state;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) unsigned long long currentVoiceVolume; // @synthesize currentVoiceVolume=_currentVoiceVolume;
@property(nonatomic) __weak id <IdstRecoderSampleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleVoiceFrame:(id)arg1;
- (id)_bufferPCMFrame:(struct AudioQueueBuffer *)arg1;
- (void)_stopAudioQueue;
- (_Bool)_startAudioQueue;
- (void)_disposeAudioQueue;
- (_Bool)_createAudioQueue;
- (void)_updateCurrentVoiceVolume;
- (_Bool)isStarted;
- (void)stop:(_Bool)arg1;
- (void)_startCore;
- (void)_startCallback:(_Bool)arg1;
- (void)_start;
- (void)start;
- (void)dealloc;

@end
