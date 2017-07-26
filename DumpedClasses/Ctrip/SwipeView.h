//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIScrollView;

@interface SwipeView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _truncateFinalPage;
    _Bool _pagingEnabled;
    _Bool _scrollEnabled;
    _Bool _wrapEnabled;
    _Bool _delaysContentTouches;
    _Bool _bounces;
    _Bool _scrolling;
    _Bool _defersItemViewLoading;
    _Bool _vertical;
    _Bool _suppressScrollEvent;
    float _decelerationRate;
    id <SwipeViewDataSource> _dataSource;
    id <SwipeViewDelegate> _delegate;
    long long _numberOfItems;
    long long _itemsPerPage;
    long long _currentItemIndex;
    unsigned long long _alignment;
    double _scrollOffset;
    double _autoscroll;
    UIScrollView *_scrollView;
    NSMutableDictionary *_itemViews;
    NSMutableSet *_itemViewPool;
    long long _previousItemIndex;
    double _scrollDuration;
    double _startTime;
    double _lastTime;
    double _startOffset;
    double _endOffset;
    double _lastUpdateOffset;
    NSTimer *_timer;
    NSTimer *_carouselTimer;
    struct CGSize _itemSize;
    struct CGPoint _previousContentOffset;
}

@property(retain, nonatomic) NSTimer *carouselTimer; // @synthesize carouselTimer=_carouselTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double lastUpdateOffset; // @synthesize lastUpdateOffset=_lastUpdateOffset;
@property(nonatomic) double endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
@property(nonatomic) _Bool suppressScrollEvent; // @synthesize suppressScrollEvent=_suppressScrollEvent;
@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) long long previousItemIndex; // @synthesize previousItemIndex=_previousItemIndex;
@property(retain, nonatomic) NSMutableSet *itemViewPool; // @synthesize itemViewPool=_itemViewPool;
@property(retain, nonatomic) NSMutableDictionary *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic) _Bool defersItemViewLoading; // @synthesize defersItemViewLoading=_defersItemViewLoading;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) double autoscroll; // @synthesize autoscroll=_autoscroll;
@property(nonatomic) float decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic) _Bool delaysContentTouches; // @synthesize delaysContentTouches=_delaysContentTouches;
@property(nonatomic, getter=isWrapEnabled) _Bool wrapEnabled; // @synthesize wrapEnabled=_wrapEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(nonatomic) _Bool truncateFinalPage; // @synthesize truncateFinalPage=_truncateFinalPage;
@property(nonatomic) long long itemsPerPage; // @synthesize itemsPerPage=_itemsPerPage;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) __weak id <SwipeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SwipeViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)viewOrSuperviewHandlesTouches:(id)arg1;
- (long long)viewOrSuperviewIndex:(id)arg1;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)reloadItemAtIndex:(long long)arg1;
- (void)loadUnloadViews;
- (void)updateItemSizeAndCount;
- (id)loadViewAtIndex:(long long)arg1;
- (void)scrollToPage:(long long)arg1 duration:(double)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 duration:(double)arg2;
- (void)scrollByNumberOfItems:(long long)arg1 duration:(double)arg2;
- (void)scrollToOffset:(double)arg1 duration:(double)arg2;
- (void)scrollByOffset:(double)arg1 duration:(double)arg2;
@property(nonatomic) long long currentPage;
- (double)minScrollDistanceFromOffset:(double)arg1 toOffset:(double)arg2;
- (long long)minScrollDistanceFromIndex:(long long)arg1 toIndex:(long long)arg2;
@property(readonly, nonatomic) long long numberOfPages;
- (void)setContentOffsetWithoutEvent:(struct CGPoint)arg1;
- (double)clampedOffset:(double)arg1;
- (long long)clampedIndex:(long long)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)step;
- (double)easeInOut:(double)arg1;
- (void)didScroll;
- (id)dequeueItemView;
- (void)queueItemView:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)layOutItemViews;
- (void)setFrameForView:(id)arg1 atIndex:(long long)arg2;
- (double)offsetForItemAtIndex:(long long)arg1;
- (void)updateScrollViewDimensions;
- (void)updateScrollOffset;
- (void)setItemView:(id)arg1 forIndex:(long long)arg2;
- (long long)indexOfItemViewOrSubview:(id)arg1;
- (long long)indexOfItemView:(id)arg1;
@property(readonly, nonatomic) UIView *currentItemView;
- (id)itemViewAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *visibleItemViews;
@property(readonly, nonatomic) NSArray *indexesForVisibleItems;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
- (void)stopTick;
- (void)doTick;
- (void)fireTick:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

