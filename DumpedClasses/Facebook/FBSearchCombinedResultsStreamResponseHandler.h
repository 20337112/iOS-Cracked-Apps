//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBStreamResponseHandler.h>

@class FBGraphQLConnectionInsertionLocation, FBGraphQLConnectionStore, NSString;

@interface FBSearchCombinedResultsStreamResponseHandler : FBStreamResponseHandler
{
    unsigned long long _limitForHeadLoad;
    FBGraphQLConnectionStore *_connectionStore;
    FBGraphQLConnectionInsertionLocation *_insertionLocation;
    NSString *_feedTargetID;
}

@property(copy, nonatomic) NSString *feedTargetID; // @synthesize feedTargetID=_feedTargetID;
- (void).cxx_destruct;
- (id)_loadResultWithResponse:(id)arg1 forQuery:(id)arg2 downloadRequest:(id)arg3 status:(id)arg4 error:(id *)arg5;
- (void)processFailedRequest:(id)arg1 error:(id)arg2 status:(id)arg3;
- (void)processCancelledRequest:(id)arg1 status:(id)arg2;
- (void)processResponse:(id)arg1 forRequest:(id)arg2 inDownloadRequest:(id)arg3 isLastResponse:(_Bool)arg4 responseUUID:(id)arg5 status:(id)arg6;
- (id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 limitForHeadLoad:(unsigned long long)arg3 parser:(id)arg4 analytics:(id)arg5 feedTargetID:(id)arg6 connectionStore:(id)arg7 insertionLocation:(id)arg8;
- (id)initWithTargetID:(id)arg1 loadType:(unsigned long long)arg2 store:(id)arg3 parser:(id)arg4 analytics:(id)arg5;

@end

