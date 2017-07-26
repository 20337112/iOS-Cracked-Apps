//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDatabaseHandler.h"

@class NSMutableArray, NSMutableDictionary;

@interface CTFlightDatabaseHandler : CTDatabaseHandler
{
    NSMutableArray *traceArray;
    NSMutableDictionary *trancDic;
}

+ (void)flightDBReCopy;
+ (id)getFlightSourceDbPath;
+ (id)getFlightDBPath;
+ (id)getFlightDBHomePathWithDBName:(id)arg1;
- (void).cxx_destruct;
- (id)getFlightOldDB;
- (void)addFlightDBlog:(id)arg1;
- (void)insertPassengerAirlineCardDataToFlightDbWtihDic:(id)arg1;
- (void)insertUserInfoDataToFlightDbWithDic:(id)arg1;
- (void)insertAllUserInfoDataToFlightDBWithDic:(id)arg1;
- (void)getFlightPassengerAirlineCardDBHistoryDataWithDB:(id)arg1 dataDic:(id)arg2;
- (void)getFlightUserinfoDBHistoryDataWithDb:(id)arg1 dataDic:(id)arg2;
- (id)getFlightDBLastUserInfoDataWithSourceType:(int)arg1;
- (_Bool)copyFlightDBDataWithFromDBPath:(id)arg1 toDBPath:(id)arg2 fileManager:(id)arg3;
- (_Bool)isNewDbNeedUpdate;
- (_Bool)isNeedCopyUserInfoDbData:(id)arg1;
- (void)saveFlightDBVersion;
- (_Bool)isFlightDBSameVersion;
- (_Bool)flightDBUpDataWithFlightDBAndCopyOriginPath:(id)arg1 toFlightDbPath:(id)arg2 fileManager:(id)arg3;
- (_Bool)flightDBUpdataWithOutFlightDBAndCopyOriginPath:(id)arg1 toFlightDbPath:(id)arg2 fileManager:(id)arg3;
- (_Bool)upgradeFlightDB;
- (_Bool)cleanDatabaseCache;
- (_Bool)upgradeDatabase;

@end

