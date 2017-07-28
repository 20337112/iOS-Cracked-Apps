//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDetailNatantViewBase.h"

@class NSMutableArray, TTDetailNatantRelateArticleGroupViewModel;

@interface TTDetailNatantRelateArticleGroupView : TTDetailNatantViewBase
{
    NSMutableArray *_items;
    TTDetailNatantRelateArticleGroupViewModel *_viewModel;
}

@property(retain, nonatomic) TTDetailNatantRelateArticleGroupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)reloadData:(id)arg1;
- (void)refreshTTDetailNatantRelatePlainView;
- (void)newBuildRelatedArticleViewsWithData:(id)arg1;
- (void)resetAllRelatedItemsWhenNatantDisappear;
- (id)itemInWrapperAtIndex:(long long)arg1;
- (double)relatedItemDistantFromTopToNantantTopAtIndex:(long long)arg1;
- (void)checkVisableRelatedArticlesAtContentOffset:(double)arg1 referViewHeight:(double)arg2;
- (double)heightOfItemInWrapper;
- (void)sendShowTrackIfNeededForGroup:(id)arg1 withLabel:(id)arg2;
- (void)trackEventIfNeeded;
- (id)eventLabel;
- (void)setRelatedItems:(id)arg1;
- (void)fontChanged;
- (void)themeChanged:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithWidth:(double)arg1;

@end
