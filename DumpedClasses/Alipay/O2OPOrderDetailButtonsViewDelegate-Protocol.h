//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, O2OPOrderDetailButtonsView;

@protocol O2OPOrderDetailButtonsViewDelegate <NSObject>

@optional
- (void)buttonsView:(O2OPOrderDetailButtonsView *)arg1 cancelWithOrderNo:(NSString *)arg2;
- (void)buttonsView:(O2OPOrderDetailButtonsView *)arg1 payWithTradeNo:(NSString *)arg2 payPhaseId:(NSString *)arg3;
@end

