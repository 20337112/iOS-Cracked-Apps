//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UIPopoverListView;

@protocol UIPopoverListViewDelegate <NSObject>

@optional
- (double)popoverListView:(UIPopoverListView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)popoverListView:(UIPopoverListView *)arg1 didSelectIndexPath:(NSIndexPath *)arg2;
@end

