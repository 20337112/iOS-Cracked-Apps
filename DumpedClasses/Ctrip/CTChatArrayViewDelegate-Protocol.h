//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTChatArrayView, UIView;

@protocol CTChatArrayViewDelegate <NSObject>
- (UIView *)viewForItemInArrayView:(CTChatArrayView *)arg1 atIndex:(long long)arg2;
- (long long)numberOfItemsInArrayView:(CTChatArrayView *)arg1;
@end

