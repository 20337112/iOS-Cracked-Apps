//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Bugly : NSObject
{
}

+ (void)reportError:(id)arg1;
+ (void)reportException:(id)arg1;
+ (id)buglyDeviceId;
+ (id)sdkVersion;
+ (void)reportExceptionWithCategory:(unsigned long long)arg1 name:(id)arg2 reason:(id)arg3 callStack:(id)arg4 extraInfo:(id)arg5 terminateApp:(_Bool)arg6;
+ (unsigned long long)currentTag;
+ (id)allUserValues;
+ (void)setUserValue:(id)arg1 forKey:(id)arg2;
+ (void)setTag:(unsigned long long)arg1;
+ (void)updateAppVersion:(id)arg1;
+ (void)setUserIdentifier:(id)arg1;
+ (void)startWithConfig:(id)arg1;
+ (void)startWithAppId:(id)arg1 config:(id)arg2;
+ (void)startWithAppId:(id)arg1 developmentDevice:(_Bool)arg2 config:(id)arg3;
+ (unsigned long long)convert:(unsigned long long)arg1;
+ (void)startWithAppId:(id)arg1;

@end

