//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSuggestionSearcher.h"

#import "BMKGeneralDelegate.h"
#import "BMKSuggestionSearchDelegate.h"

@class MMSuggestionSearchTupleManager, NSString;

@interface MMBaiduSuggestionSearcher : MMSuggestionSearcher <BMKSuggestionSearchDelegate, BMKGeneralDelegate>
{
    MMSuggestionSearchTupleManager *_processingRequests;
}

@property(retain, nonatomic) MMSuggestionSearchTupleManager *processingRequests; // @synthesize processingRequests=_processingRequests;
- (void).cxx_destruct;
- (void)notifySuggestionSearchWithSearcher:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)onGetSuggestionResult:(id)arg1 result:(id)arg2 errorCode:(int)arg3;
- (void)suggestionSearchWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

