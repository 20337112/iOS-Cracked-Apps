//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZUploadRespPacket.h"

@class NSArray, NSString;

@interface QZUploadHandShakeResp : QZUploadRespPacket
{
    NSArray *ipList;
    NSArray *_ipList;
    NSString *_clientIp;
    long long _serverTime;
}

@property(nonatomic) long long serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(retain, nonatomic) NSArray *ipList; // @synthesize ipList=_ipList;
- (void).cxx_destruct;
- (void)decodeBody_OC:(id)arg1;
- (id)UpInt2ip:(int)arg1;

@end

