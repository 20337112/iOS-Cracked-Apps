//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface CTDiscoverPageControl : UIView
{
    long long _numberOfPages;
    long long _currentPage;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    struct CGRect _indicatorBounds;
}

@property(nonatomic) struct CGRect indicatorBounds; // @synthesize indicatorBounds=_indicatorBounds;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)initDefaultColor;
- (void)initAllPageIndicator:(long long)arg1;
- (id)initWithPageNumber:(int)arg1;
- (id)initWithPageNumber:(int)arg1 pageIndicatorColor:(id)arg2 currentPageColorColor:(id)arg3;

@end

