//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTPayDBManager, NSObject<OS_dispatch_queue>;

@interface CTPayDBQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CTPayDBManager *_db;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
- (void)initWithDatabaseVersion:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (id)dataManager;
- (void)destroyQueue;
- (id)init;

@end

