//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class MVCycleScrollView, UIPageControl;

@interface MVNowPlayingSectionHeaderView : UITableViewHeaderFooterView
{
    MVCycleScrollView *_scrollView;
    UIPageControl *_pageControl;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) MVCycleScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)pageControlValueChanged:(id)arg1;

@end

