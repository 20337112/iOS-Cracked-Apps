//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APResourcePreDownloaderHit : NSObject
{
}

+ (void)uploadHitRateLogWithStatus:(_Bool)arg1 resourceId:(id)arg2;
+ (_Bool)checkMonitorLogReportedWithKey:(id)arg1;
+ (id)getMonitorResourceId;
+ (void)checkResourcePreDownloaderHit:(id)arg1 business:(id)arg2 existInCache:(_Bool)arg3;

@end

