//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSHttpOperation;

@interface ExploreFetchEntryManager : NSObject
{
    CDUnknownBlockType _finishBlock;
    SSHttpOperation *_fetchProfileRequest;
}

+ (id)sharedManager;
@property(retain, nonatomic) SSHttpOperation *fetchProfileRequest; // @synthesize fetchProfileRequest=_fetchProfileRequest;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)fetchEntryByMediaID:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
