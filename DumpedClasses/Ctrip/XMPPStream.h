//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncSocketDelegate.h"

@class DDXMLElement, GCDAsyncSocket, GCDMulticastDelegate<XMPPStreamDelegate>, NSArray, NSCountedSet, NSData, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, XMPPIDTracker, XMPPJID, XMPPParser, XMPPPresence, XMPPSRVResolver;

@interface XMPPStream : NSObject <GCDAsyncSocketDelegate>
{
    NSObject<OS_dispatch_queue> *xmppQueue;
    void *xmppQueueTag;
    NSObject<OS_dispatch_queue> *willSendIqQueue;
    NSObject<OS_dispatch_queue> *willSendMessageQueue;
    NSObject<OS_dispatch_queue> *willSendPresenceQueue;
    NSObject<OS_dispatch_queue> *willReceiveStanzaQueue;
    NSObject<OS_dispatch_queue> *didReceiveIqQueue;
    NSObject<OS_dispatch_source> *connectTimer;
    GCDMulticastDelegate<XMPPStreamDelegate> *multicastDelegate;
    long long state;
    GCDAsyncSocket *asyncSocket;
    unsigned long long numberOfBytesSent;
    unsigned long long numberOfBytesReceived;
    XMPPParser *parser;
    NSError *parserError;
    NSError *otherError;
    unsigned char flags;
    unsigned char config;
    NSString *hostName;
    unsigned short hostPort;
    unsigned long long startTLSPolicy;
    _Bool skipStartSession;
    _Bool validatesResponses;
    id <XMPPSASLAuthentication> auth;
    id <XMPPCustomBinding> customBinding;
    NSDate *authenticationDate;
    XMPPJID *myJID_setByClient;
    XMPPJID *myJID_setByServer;
    XMPPJID *remoteJID;
    XMPPPresence *myPresence;
    DDXMLElement *rootElement;
    double keepAliveInterval;
    NSObject<OS_dispatch_source> *keepAliveTimer;
    double lastSendReceiveTime;
    NSData *keepAliveData;
    NSMutableArray *registeredModules;
    NSMutableDictionary *autoDelegateDict;
    XMPPSRVResolver *srvResolver;
    NSArray *srvResults;
    unsigned long long srvResultsIndex;
    XMPPIDTracker *idTracker;
    NSMutableArray *receipts;
    NSCountedSet *customElementNames;
    id userTag;
}

+ (id)generateUUID;
@property(readonly, nonatomic) void *xmppQueueTag; // @synthesize xmppQueueTag;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xmppQueue; // @synthesize xmppQueue;
@property(retain) id tag; // @synthesize tag=userTag;
- (void).cxx_destruct;
- (id)generateUUID;
- (void)enumerateModulesOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateModulesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAutoDelegate:(id)arg1 delegateQueue:(id)arg2 fromModulesOfClass:(Class)arg3;
- (void)autoAddDelegate:(id)arg1 delegateQueue:(id)arg2 toModulesOfClass:(Class)arg3;
- (void)unregisterModule:(id)arg1;
- (void)registerModule:(id)arg1;
- (_Bool)isValidResponseElement:(id)arg1 forRequestElement:(id)arg2;
- (_Bool)isValidResponseElementFrom:(id)arg1 forRequestElementTo:(id)arg2;
- (void)keepAlive;
- (void)setupKeepAliveTimer;
- (void)xmppParser:(id)arg1 didFail:(id)arg2;
- (void)xmppParserDidEnd:(id)arg1;
- (void)xmppParserDidParseData:(id)arg1;
- (void)xmppParser:(id)arg1 didReadElement:(id)arg2;
- (void)xmppParser:(id)arg1 didReadRoot:(id)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidSecure:(id)arg1;
- (void)socket:(id)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)xmppSRVResolver:(id)arg1 didNotResolveDueToError:(id)arg2;
- (void)xmppSRVResolver:(id)arg1 didResolveRecords:(id)arg2;
- (void)tryNextSrvResult;
- (void)handleStartSessionResponse:(id)arg1;
- (void)continuePostBinding:(_Bool)arg1;
- (void)continueHandleStandardBinding:(id)arg1;
- (void)handleStandardBinding:(id)arg1;
- (void)startStandardBinding;
- (void)handleCustomBinding:(id)arg1;
- (void)startCustomBinding:(id)arg1;
- (void)startBinding;
- (void)handleAuth:(id)arg1;
- (void)handleRegistration:(id)arg1;
- (void)handleStartTLSResponse:(id)arg1;
- (void)handleStreamFeatures;
- (void)continueStartTLS:(id)arg1;
- (void)startTLS;
- (void)sendOpeningNegotiation;
- (void)startNegotiation;
- (void)unregisterCustomElementNames:(id)arg1;
- (void)registerCustomElementNames:(id)arg1;
- (void)injectElement:(id)arg1;
- (void)continueReceivePresence:(id)arg1;
- (void)continueReceiveMessage:(id)arg1;
- (void)continueReceiveIQ:(id)arg1;
- (void)receivePresence:(id)arg1;
- (void)receiveMessage:(id)arg1;
- (void)receiveIQ:(id)arg1;
- (void)sendBindElement:(id)arg1;
- (void)sendAuthElement:(id)arg1;
- (void)resendMyPresence;
- (void)failToSendPresence:(id)arg1;
- (void)failToSendMessage:(id)arg1;
- (void)failToSendIQ:(id)arg1;
- (void)failToSendElement:(id)arg1;
- (void)sendElement:(id)arg1 andGetReceipt:(id *)arg2;
- (void)sendElement:(id)arg1;
- (void)sendElement:(id)arg1 withTag:(long long)arg2;
- (void)continueSendElement:(id)arg1 withTag:(long long)arg2;
- (void)continueSendPresence:(id)arg1 withTag:(long long)arg2;
- (void)continueSendMessage:(id)arg1 withTag:(long long)arg2;
- (void)continueSendIQ:(id)arg1 withTag:(long long)arg2;
- (void)sendPresence:(id)arg1 withTag:(long long)arg2;
- (void)sendMessage:(id)arg1 withTag:(long long)arg2;
- (void)sendIQ:(id)arg1 withTag:(long long)arg2;
- (float)serverXmppStreamVersionNumber;
- (id)rootElement;
- (_Bool)supportsCompressionMethod:(id)arg1;
- (id)supportedCompressionMethods;
- (id)authenticationDate;
- (void)setIsAuthenticated:(_Bool)arg1;
- (_Bool)isAuthenticated;
- (_Bool)isAuthenticating;
- (_Bool)authenticateWithPassword:(id)arg1 error:(id *)arg2;
- (_Bool)authenticate:(id)arg1 error:(id *)arg2;
- (_Bool)supportsAuthenticationMechanism:(id)arg1;
- (id)supportedAuthenticationMechanisms;
- (_Bool)registerWithPassword:(id)arg1 error:(id *)arg2;
- (_Bool)registerWithElements:(id)arg1 error:(id *)arg2;
- (_Bool)supportsInBandRegistration;
- (_Bool)secureConnection:(id *)arg1;
- (void)sendStartTLSRequest;
- (_Bool)supportsStartTLS;
- (void)setIsSecure:(_Bool)arg1;
- (_Bool)isSecure;
- (void)disconnectAfterSending;
- (void)disconnect;
- (_Bool)connectP2PWithSocket:(id)arg1 error:(id *)arg2;
- (_Bool)connectTo:(id)arg1 withAddress:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)oldSchoolSecureConnectWithTimeout:(double)arg1 error:(id *)arg2;
- (_Bool)connectWithTimeout:(double)arg1 error:(id *)arg2;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (void)doConnectTimeout;
- (void)endConnectTimeout;
- (void)startConnectTimeout:(double)arg1;
- (_Bool)isConnected;
- (_Bool)isConnecting;
- (_Bool)isDisconnected;
- (void)setDidStartNegotiation:(_Bool)arg1;
- (_Bool)didStartNegotiation;
- (_Bool)isP2PRecipient;
- (_Bool)isP2PInitiator;
- (_Bool)isP2P;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
@property _Bool enableBackgroundingOnSocket;
@property _Bool validatesResponses;
@property _Bool skipStartSession;
@property _Bool resetByteCountPerConnection;
- (void)getNumberOfBytesSent:(unsigned long long *)arg1 numberOfBytesReceived:(unsigned long long *)arg2;
@property(readonly) unsigned long long numberOfBytesReceived;
@property(readonly) unsigned long long numberOfBytesSent;
@property BOOL keepAliveWhitespaceCharacter;
@property double keepAliveInterval;
@property(readonly) XMPPPresence *myPresence;
@property(readonly) XMPPJID *remoteJID;
@property(copy) XMPPJID *myJID;
- (void)setMyJID_setByServer:(id)arg1;
- (void)setMyJID_setByClient:(id)arg1;
@property unsigned long long startTLSPolicy;
@property unsigned short hostPort;
@property(copy) NSString *hostName;
@property(readonly) long long state;
- (void)dealloc;
- (id)initP2PFrom:(id)arg1;
- (id)init;
- (void)commonInit;
- (id)rebindSessionID;
- (_Bool)supportsRebind;
- (_Bool)supportsPush;
- (id)xmppAutoTime_dateForTargetJID:(id)arg1;
- (double)xmppAutoTime_timeDifferenceForTargetJID:(id)arg1;
- (_Bool)supportsPlainAuthentication;
- (_Bool)supportsDigestMD5Authentication;
- (_Bool)supportsStreamManagement;

@end

