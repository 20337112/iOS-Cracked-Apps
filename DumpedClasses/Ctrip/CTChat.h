//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTHTTPClient;

@interface CTChat : NSObject
{
    CTHTTPClient *_destinationHttpClient;
    CTHTTPClient *_xmppHttpClient;
}

+ (id)CTLocationURL;
+ (id)CTIMTestCUsername;
+ (id)CTIMTestBUsername;
+ (id)CTIMTestAUsername;
+ (id)encryptUid:(id)arg1;
+ (id)sortArrayForGroupUsersWhenToSomeBody:(id)arg1;
+ (_Bool)clearCacheWithUid:(id)arg1;
+ (id)sizeOfFolder:(id)arg1;
+ (id)getFolderSizeWithUid:(id)arg1;
+ (void)createDirectory:(id)arg1 atFilePath:(id)arg2;
+ (id)savedImageDirectoryWithUid:(id)arg1;
+ (void)CTChatURLDispatcher:(id)arg1 FromVC:(id)arg2;
+ (id)CTImageWSBaseURL;
+ (id)CTXMPPMUCDomain;
+ (id)CTXMPPHost;
+ (id)CTXMPPDomain;
+ (id)CTUserSelfInfoURL;
+ (id)CTOtherMemberInfoURL;
+ (id)CTXMPPBaseURL;
+ (id)CTDestinationBatchURL;
+ (id)CTIMToolBoxURL;
+ (id)CTIMDestinationBaseURL;
+ (id)CTIMServicerEnterURL;
+ (Class)getMessageRecordORMClassWithType:(int)arg1;
+ (id)chat;
- (void).cxx_destruct;
- (id)init;

@end
