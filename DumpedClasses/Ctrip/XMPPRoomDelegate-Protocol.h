//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDXMLElement, NSArray, XMPPIQ, XMPPJID, XMPPMessage, XMPPPresence, XMPPRoom;

@protocol XMPPRoomDelegate <NSObject>

@optional
- (void)xmppRoom:(XMPPRoom *)arg1 didNotEditPrivileges:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didEditPrivileges:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didNotFetchModeratorsList:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didFetchModeratorsList:(NSArray *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didNotFetchMembersList:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didFetchMembersList:(NSArray *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didNotFetchBanList:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didFetchBanList:(NSArray *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didReceiveMessage:(XMPPMessage *)arg2 fromOccupant:(XMPPJID *)arg3;
- (void)xmppRoom:(XMPPRoom *)arg1 occupantDidUpdate:(XMPPJID *)arg2 withPresence:(XMPPPresence *)arg3;
- (void)xmppRoom:(XMPPRoom *)arg1 occupantDidLeave:(XMPPJID *)arg2 withPresence:(XMPPPresence *)arg3;
- (void)xmppRoom:(XMPPRoom *)arg1 occupantDidJoin:(XMPPJID *)arg2 withPresence:(XMPPPresence *)arg3;
- (void)xmppRoomDidDestroy:(XMPPRoom *)arg1;
- (void)xmppRoomDidLeave:(XMPPRoom *)arg1;
- (void)xmppRoomDidJoin:(XMPPRoom *)arg1;
- (void)xmppRoom:(XMPPRoom *)arg1 didNotConfigure:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didConfigure:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 willSendConfiguration:(XMPPIQ *)arg2;
- (void)xmppRoom:(XMPPRoom *)arg1 didFetchConfigurationForm:(DDXMLElement *)arg2;
- (void)xmppRoomDidCreate:(XMPPRoom *)arg1;
@end

