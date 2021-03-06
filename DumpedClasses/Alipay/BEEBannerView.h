//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, NSTimer, UILabel, UIPageControl, UIScrollView;

@interface BEEBannerView : UIView <UIScrollViewDelegate>
{
    _Bool _twins;
    _Bool _ignore;
    NSTimer *_timer;
    NSArray *_items;
    NSArray *_pages;
    unsigned long long _currentPage;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    UILabel *_titleLabel;
    id <WWBannerViewDelegate> _delegate;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <WWBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)bannerTapped:(id)arg1;
- (void)turnToNext;
- (void)startTurning;
- (void)stopTurning;
- (void)scrollToCurrentPage;
- (void)scrollToPage:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dealloc;
- (id)viewWithItem:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

