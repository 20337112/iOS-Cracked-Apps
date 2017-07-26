//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class NSMutableDictionary, NSString;

@interface XMPPPrivacy : XMPPModule
{
    _Bool autoRetrievePrivacyListNames;
    _Bool autoRetrievePrivacyListItems;
    _Bool autoClearPrivacyListInfo;
    NSMutableDictionary *privacyDict;
    NSString *activeListName;
    NSString *defaultListName;
    NSMutableDictionary *pendingQueries;
}

+ (void)blockPresenceOut:(id)arg1;
+ (void)blockPresenceIn:(id)arg1;
+ (void)blockMessages:(id)arg1;
+ (void)blockIQs:(id)arg1;
+ (id)privacyItemWithType:(id)arg1 value:(id)arg2 action:(id)arg3 order:(unsigned long long)arg4;
+ (id)privacyItemWithAction:(id)arg1 order:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)processQueryResponse:(id)arg1 withInfo:(id)arg2;
- (void)queryTimeout:(id)arg1;
- (void)processQuery:(id)arg1 withFailureCode:(int)arg2;
- (void)removeQueryInfo:(id)arg1 withKey:(id)arg2;
- (void)addQueryInfo:(id)arg1 withKey:(id)arg2;
- (void)setListWithName:(id)arg1 items:(id)arg2;
- (void)setDefaultListName:(id)arg1;
- (id)defaultList;
- (id)defaultListName;
- (void)setActiveListName:(id)arg1;
- (id)activeList;
- (id)activeListName;
- (id)listWithName:(id)arg1;
- (id)listNames;
- (void)clearPrivacyListInfo;
- (void)retrieveListWithName:(id)arg1;
- (void)retrieveListNames;
@property _Bool autoClearPrivacyListInfo;
@property _Bool autoRetrievePrivacyListItems;
@property _Bool autoRetrievePrivacyListNames;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

