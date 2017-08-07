//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, UserAgent, UserConnInfo;

@interface Header : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long authUserId; // @dynamic authUserId;
@property(nonatomic) _Bool hasAuthUserId; // @dynamic hasAuthUserId;
@property(nonatomic) _Bool hasLogId; // @dynamic hasLogId;
@property(nonatomic) _Bool hasMsgId; // @dynamic hasMsgId;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUserAgent; // @dynamic hasUserAgent;
@property(nonatomic) _Bool hasUserConnInfo; // @dynamic hasUserConnInfo;
@property(copy, nonatomic) NSData *logId; // @dynamic logId;
@property(nonatomic) unsigned long long msgId; // @dynamic msgId;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) UserAgent *userAgent; // @dynamic userAgent;
@property(retain, nonatomic) UserConnInfo *userConnInfo; // @dynamic userConnInfo;

@end
