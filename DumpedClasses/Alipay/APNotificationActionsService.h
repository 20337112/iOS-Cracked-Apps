//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTService.h"

@class NSString;

@interface APNotificationActionsService : NSObject <DTService>
{
}

+ (void)registerNotificationCategories;
- (void)replyToUser:(id)arg1 userType:(id)arg2 message:(id)arg3;
- (void)actionHandler:(id)arg1;
- (void)dealloc;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
