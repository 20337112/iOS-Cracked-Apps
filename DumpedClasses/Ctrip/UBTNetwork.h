//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UBTNetwork : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;
- (void)setReachabilityStatusChangeBlock:(CDUnknownBlockType)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)connectionCode;
- (id)connectionString;
- (long long)connectionStatus;
- (id)init;
- (id)shared;

@end

