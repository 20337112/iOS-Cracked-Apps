//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTARServiceManager : NSObject
{
}

+ (void)sendGetCaptureList:(CDUnknownBlockType)arg1;
+ (void)sendCaptureObject:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)processCachedListAndNewList;
+ (void)processARData:(id)arg1;
+ (void)sendGetARData:(id)arg1 lBSActivityID:(double)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (id)shareInstance;

@end

