//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol LDNetConnectDelegate <NSObject>
- (void)connectDidEnd:(_Bool)arg1 successCount:(int)arg2 averageTime:(int)arg3;
- (void)appendSocketLog:(NSString *)arg1;
@end

