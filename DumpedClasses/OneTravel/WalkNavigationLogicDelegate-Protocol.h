//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSDictionary, NSString, WalkNavigationLogic;

@protocol WalkNavigationLogicDelegate <NSObject>
- (void)walkNavigationSearchFailed;
- (void)walkNavigationReSearchDidFinshed;
- (void)walkNavigationReSearchStart;
- (void)walkNavigationLogicNeedShake:(WalkNavigationLogic *)arg1;
- (void)walkNavigationLogicDidArrive:(WalkNavigationLogic *)arg1;
- (_Bool)walkNavigationLogic:(WalkNavigationLogic *)arg1 didFindHint:(NSString *)arg2;
- (void)walkNavigationLogicDidDeviate:(WalkNavigationLogic *)arg1;
- (void)walkNavigation:(WalkNavigationLogic *)arg1 didUpdateFixedLocation:(CLLocation *)arg2 originLocation:(CLLocation *)arg3 info:(NSDictionary *)arg4;

@optional
- (void)walkNavigationReSearchNoResult;
- (void)walkNavigationReSearchCanceled;
@end
