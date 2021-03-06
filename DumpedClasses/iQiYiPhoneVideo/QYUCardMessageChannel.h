//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPointerArray;
@protocol QYUCardMessageChannelReceiverProtocol;

@interface QYUCardMessageChannel : NSObject
{
    NSPointerArray *proxies;
    id <QYUCardMessageChannelReceiverProtocol> _messageReceiver;
}

@property(nonatomic) __weak id <QYUCardMessageChannelReceiverProtocol> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
- (void).cxx_destruct;
- (void)removeProxy:(id)arg1;
- (void)appendProxy:(id)arg1;
- (void)sendMessage:(id)arg1 fromSender:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)sendMessage:(id)arg1 fromSender:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3 andCompletionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

