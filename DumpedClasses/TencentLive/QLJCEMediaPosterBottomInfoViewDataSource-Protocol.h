//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QLJCEMediaPosterBottomInfoView, UIView;

@protocol QLJCEMediaPosterBottomInfoViewDataSource <NSObject>
- (UIView *)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 itemViewAtIndexPath:(NSIndexPath *)arg2;
- (long long)posterBottomView:(QLJCEMediaPosterBottomInfoView *)arg1 numberOfActionMenu:(id)arg2;
@end
