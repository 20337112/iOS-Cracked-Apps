//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class O2OStarView;

@protocol O2OStarViewDelegate <NSObject>

@optional
- (void)tapGestureEnded:(O2OStarView *)arg1;
- (void)panGestureEnded:(O2OStarView *)arg1;
- (void)starView:(O2OStarView *)arg1 scoreDidChange:(double)arg2;
@end

