//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YLUTDSafeDictionary;

@interface YLUTDBaseModel : NSObject
{
    YLUTDSafeDictionary *_event;
}

+ (id)modelformDictionary:(id)arg1 formDic:(id)arg2;
- (void).cxx_destruct;
- (void)storeMessageWithOrigThreadDomain:(id)arg1 eventID:(id)arg2 tosubmoduleType:(long long)arg3;
- (void)storeMessageDomain:(id)arg1 eventID:(id)arg2 tosubmoduleType:(long long)arg3 insertAppcontext:(id)arg4 withService:(id)arg5;
- (void)storeMessageDomain:(id)arg1 eventID:(id)arg2 tosubmoduleType:(long long)arg3 insertAppcontext:(id)arg4;
- (void)storeMessageDomain:(id)arg1 eventID:(id)arg2 tosubmoduleType:(long long)arg3 toService:(id)arg4;
- (void)storeMessageDomain:(id)arg1 eventID:(id)arg2 tosubmoduleType:(long long)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)archiveToDictionary;
- (id)init;

@end
