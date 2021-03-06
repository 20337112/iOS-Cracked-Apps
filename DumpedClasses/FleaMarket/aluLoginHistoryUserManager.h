//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>;

@interface aluLoginHistoryUserManager : NSObject
{
    int _lastLoginUserIndex;
    NSArray *_users;
    id <IDynamicDataStoreComponent> _securityStorage;
    id <IDataStore> _documentStorage;
    NSObject<OS_dispatch_queue> *_historyUserQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *historyUserQueue; // @synthesize historyUserQueue=_historyUserQueue;
@property(retain, nonatomic) id <IDataStore> documentStorage; // @synthesize documentStorage=_documentStorage;
@property(retain, nonatomic) id <IDynamicDataStoreComponent> securityStorage; // @synthesize securityStorage=_securityStorage;
@property(nonatomic) int lastLoginUserIndex; // @synthesize lastLoginUserIndex=_lastLoginUserIndex;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)alu_p_obj2Json:(id)arg1;
- (void)alu_p_saveAllUsers;
- (id)alu_p_loadFromSlaveStore;
- (id)alu_p_loadFromMasterStore;
- (void)alu_p_convertJson2Object:(id)arg1 jsonValueFromMaster:(_Bool)arg2;
- (void)alu_p_loadUsers;
- (int)alu_p_findUserInArray:(id)arg1 target:(id)arg2;
- (id)alu_p_allUsers;
- (id)alu_p_getLastLoginUser;
- (void)alu_p_addUser:(id)arg1 tokenValue:(id)arg2;
- (id)allUsers;
- (void)saveCompatiableUser:(id)arg1;
- (void)updateUser:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)addUser:(id)arg1 tokenValue:(id)arg2;
- (id)getLastLoginUser;
- (id)init;

@end

