//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseDetailModel.h"

#import "ITBOActions.h"

@class NSArray<TBOAction>, NSString, TBOCommentListViewModel, TBOFeed;

@interface TBOFeedDetailViewModel : TBOBaseDetailModel <ITBOActions>
{
    NSString *_feedId;
    NSString *_topicId;
    TBOCommentListViewModel *_commentListViewModel;
    NSArray<TBOAction> *_actions;
}

+ (id)initWithFeedId:(id)arg1 topicId:(id)arg2;
@property(retain, nonatomic) NSArray<TBOAction> *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) TBOCommentListViewModel *commentListViewModel; // @synthesize commentListViewModel=_commentListViewModel;
@property(readonly, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(readonly, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (void)sendCommentSuccess:(id)arg1 toFeed:(id)arg2;
- (void)onloaderCompleted:(id)arg1 succeeded:(_Bool)arg2;
@property(readonly, nonatomic) TBOFeed *feed;
- (id)initWithFeedId:(id)arg1 topicId:(id)arg2;
- (id)initWithModelLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

