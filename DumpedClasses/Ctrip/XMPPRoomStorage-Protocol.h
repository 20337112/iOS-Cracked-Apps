//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, XMPPMessage, XMPPPresence, XMPPRoom;

@protocol XMPPRoomStorage <NSObject>
- (void)handleDidLeaveRoom:(XMPPRoom *)arg1;
- (void)handleOutgoingMessage:(XMPPMessage *)arg1 room:(XMPPRoom *)arg2;
- (void)handleIncomingMessage:(XMPPMessage *)arg1 room:(XMPPRoom *)arg2;
- (void)handlePresence:(XMPPPresence *)arg1 room:(XMPPRoom *)arg2;
- (_Bool)configureWithParent:(XMPPRoom *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;

@optional
- (void)handleDidJoinRoom:(XMPPRoom *)arg1 withNickname:(NSString *)arg2;
@end

