//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDKernel.h"

@class NSString, PSDSessionParam;

@interface PSDSession : PSDKernel
{
    NSString *_sessionUUID;
    PSDSessionParam *_sessionParam;
}

+ (id)sessionWithSessionParam:(id)arg1 expando:(id)arg2 parentObject:(id)arg3;
+ (id)sessionWithSessionParam:(id)arg1 parentObject:(id)arg2;
@property(retain, nonatomic) PSDSessionParam *sessionParam; // @synthesize sessionParam=_sessionParam;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void).cxx_destruct;
- (void)registerPlugin:(id)arg1;
- (id)currentScene;
- (id)createParam;
- (id)initWithSessionParam:(id)arg1 expando:(id)arg2 parentObject:(id)arg3;
- (void)dealloc;
- (id)session;

@end

