//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSender.h"

@interface CTActivePhoneSender : CTSender
{
}

+ (id)clientInfoDescription;
+ (id)getInstance;
- (id)sendActivatePhoneMsg:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)sendGetActivateStatus:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)init;

@end

