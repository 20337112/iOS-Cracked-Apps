//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface ESPPageControl : UIView
{
    _Bool _hidesForSinglePage;
    long long _numberOfPages;
    long long _currentPage;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
}

+ (void)_drawIndicatorWithColor:(id)arg1 frame:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateHiddenAfterNumberOfPagesChange;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

