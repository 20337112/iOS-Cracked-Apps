//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSBizReplayDataInfo : NSObject
{
    NSString *_replayAddress;
    NSString *_status;
    NSString *_headImg;
    long long _liveTime;
    NSString *_liveKey;
    NSString *_userId;
    NSString *_liveMemo;
    NSString *_replyFiles;
    NSString *_nickName;
}

@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *replyFiles; // @synthesize replyFiles=_replyFiles;
@property(retain, nonatomic) NSString *liveMemo; // @synthesize liveMemo=_liveMemo;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *liveKey; // @synthesize liveKey=_liveKey;
@property(nonatomic) long long liveTime; // @synthesize liveTime=_liveTime;
@property(retain, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *replayAddress; // @synthesize replayAddress=_replayAddress;
- (void).cxx_destruct;

@end
