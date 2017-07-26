//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIPageControl, UIScrollView;

@interface CTAdBannerBrowser : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIScrollView *_infiniteScroll;
    long long _numberOfBanners;
    id <CTAdBannerBrowserDelegate> _delegate;
    id <CTAdBannerBrowserDatasource> _dataSource;
    NSTimer *_scrollTimer;
    struct {
        unsigned int slidingDirection:1;
    } _bannerFlags;
    struct CGPoint _startOffset;
    struct CGPoint _tailOffset;
    long long _currentBannerIndex;
    _Bool _scrollingAnimation;
    _Bool _autoScroll;
    _Bool _hiddenPageControl;
    double _interval;
    UIPageControl *_pageControlcrollView;
    NSMutableArray *_bannerViews;
    UIPageControl *_pageControl;
}

@property(nonatomic) _Bool hiddenPageControl; // @synthesize hiddenPageControl=_hiddenPageControl;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSMutableArray *bannerViews; // @synthesize bannerViews=_bannerViews;
@property(retain, nonatomic) UIScrollView *infiniteScroll; // @synthesize infiniteScroll=_infiniteScroll;
@property(retain, nonatomic) UIPageControl *pageControlcrollView; // @synthesize pageControlcrollView=_pageControlcrollView;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
@property(nonatomic) _Bool scrollingAnimation; // @synthesize scrollingAnimation=_scrollingAnimation;
@property(nonatomic) long long numberOfBanners; // @synthesize numberOfBanners=_numberOfBanners;
@property(nonatomic) __weak id <CTAdBannerBrowserDatasource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CTAdBannerBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollTapGesture;
- (id)initWithFrame:(struct CGRect)arg1 andBannerOrientation:(long long)arg2 hiddenPageControl:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andBannerOrientation:(long long)arg2;
- (void)initBannerViewsWithNumberOfBanner:(long long)arg1;
- (void)autoScrollingAnimation;
- (void)stopTimer;
- (void)scheduleTimer;
- (void)scrollViewDidStop:(id)arg1;
- (void)setupSelfView;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

