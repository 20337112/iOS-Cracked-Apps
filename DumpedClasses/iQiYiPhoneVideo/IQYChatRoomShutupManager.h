//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYChatRoomShutupManager : DataLoadManager
{
    NSString *_banUid;
    NSString *_roomId;
    NSString *_duration;
    NSString *_authcookie;
    NSString *_uid;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *authcookie; // @synthesize authcookie=_authcookie;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *banUid; // @synthesize banUid=_banUid;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

