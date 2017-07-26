//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface UBTSocket : NSObject
{
    int _size;
    long long _timeout;
    int _sockfd;
    NSError *_lastError;
    NSString *_host;
    NSString *_port;
    NSString *_hostname;
}

@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, nonatomic) NSString *port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) int sockfd; // @synthesize sockfd=_sockfd;
- (void).cxx_destruct;
- (_Bool)setTimeout:(long long)arg1;
- (long long)timeout;
- (long long)receiveBytes:(void *)arg1 limit:(long long)arg2;
- (_Bool)isIPv6Only;
- (long long)sendBytes:(const void *)arg1 length:(long long)arg2;
- (_Bool)close;
- (_Bool)isConnected;
- (_Bool)connect:(long long)arg1;
- (_Bool)connect;
@property(readonly, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
- (id)description;
- (void)dealloc;
- (id)initWithHost:(id)arg1 andPort:(id)arg2;

@end

