//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CTDatabaseManager : NSObject
{
    NSArray *_buDatabaseBusNameList;
}

+ (id)sharedCTDatabaseManager;
@property(retain, nonatomic) NSArray *buDatabaseBusNameList; // @synthesize buDatabaseBusNameList=_buDatabaseBusNameList;
- (void).cxx_destruct;
- (void)doDatabaseCacheClean;
- (void)doDatabaseUpgrade;
- (void)initBUDatabaseBusNameIfNeed;

@end

