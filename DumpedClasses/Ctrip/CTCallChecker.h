//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncSocketDelegate.h"
#import "GCDAsyncUdpSocketDelegate.h"

@class CTCallCheckerConfiguration, CTCallCodecDataPackageGenerator, GCDAsyncSocket, GCDAsyncUdpSocket, NSData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CTCallChecker : NSObject <GCDAsyncSocketDelegate, GCDAsyncUdpSocketDelegate>
{
    _Bool _isFinished;
    _Bool _isUDPFinished;
    _Bool _isCanceled;
    CTCallCheckerConfiguration *_configuration;
    CTCallCodecDataPackageGenerator *_codec;
    long long _udpJitterCount;
    GCDAsyncSocket *_tcpSocket;
    GCDAsyncUdpSocket *_udpSocket;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    long long _sendUdpIndex;
    NSMutableDictionary *_sendUdpTimes;
    NSMutableDictionary *_receiveUdpTimes;
    NSMutableDictionary *_singleUdpDelay;
    long long _udpDelayTime;
    long long _udpDroppedCount;
    long long _udpFaultCount;
    NSData *_sampleSoundData;
    NSString *_udpHost;
    long long _udpPort;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long udpPort; // @synthesize udpPort=_udpPort;
@property(copy, nonatomic) NSString *udpHost; // @synthesize udpHost=_udpHost;
@property(copy, nonatomic) NSData *sampleSoundData; // @synthesize sampleSoundData=_sampleSoundData;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool isUDPFinished; // @synthesize isUDPFinished=_isUDPFinished;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) long long udpFaultCount; // @synthesize udpFaultCount=_udpFaultCount;
@property(nonatomic) long long udpDroppedCount; // @synthesize udpDroppedCount=_udpDroppedCount;
@property(nonatomic) long long udpDelayTime; // @synthesize udpDelayTime=_udpDelayTime;
@property(retain, nonatomic) NSMutableDictionary *singleUdpDelay; // @synthesize singleUdpDelay=_singleUdpDelay;
@property(retain, nonatomic) NSMutableDictionary *receiveUdpTimes; // @synthesize receiveUdpTimes=_receiveUdpTimes;
@property(retain, nonatomic) NSMutableDictionary *sendUdpTimes; // @synthesize sendUdpTimes=_sendUdpTimes;
@property(nonatomic) long long sendUdpIndex; // @synthesize sendUdpIndex=_sendUdpIndex;
@property(nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) GCDAsyncUdpSocket *udpSocket; // @synthesize udpSocket=_udpSocket;
@property(retain, nonatomic) GCDAsyncSocket *tcpSocket; // @synthesize tcpSocket=_tcpSocket;
@property(nonatomic) long long udpJitterCount; // @synthesize udpJitterCount=_udpJitterCount;
@property(retain, nonatomic) CTCallCodecDataPackageGenerator *codec; // @synthesize codec=_codec;
@property(retain, nonatomic) CTCallCheckerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)cancelNetworkQuality;
- (void)statistcsNetworkQualityWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (id)statistics;
- (long long)caculateJitterWithMeanDelay:(long long)arg1;
- (long long)updateUdpResult;
- (id)udpDataAtIndex:(long long)arg1;
- (void)sendUdpDatagramWithDelay:(_Bool)arg1;
- (void)startSendingUDP;
- (void)sendUdpConfiguration;
- (void)finishChecking;
- (void)notifyFailedWithError:(id)arg1;
- (void)notifySucceedWithStatistics:(id)arg1;
- (id)init;
- (void)dealloc;

@end

