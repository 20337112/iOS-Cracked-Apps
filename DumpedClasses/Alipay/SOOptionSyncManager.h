//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SOOptionSyncManager : NSObject
{
    NSMutableArray *_syncKeys;
}

+ (_Bool)isSyncResponseSuccess:(id)arg1;
@property(retain, nonatomic) NSMutableArray *syncKeys; // @synthesize syncKeys=_syncKeys;
- (void).cxx_destruct;
- (void)responseSOSyncResponseNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
