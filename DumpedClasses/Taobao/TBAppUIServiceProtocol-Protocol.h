//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIViewController;

@protocol TBAppUIServiceProtocol <NSObject>
- (_Bool)isGuideImageShowing;
- (_Bool)isTabbarUrl:(NSURL *)arg1;
- (NSString *)tabbarUrlForIndex:(unsigned long long)arg1;
- (UIViewController *)topPresentedViewController;
- (UIViewController *)mainTabbarViewController;
- (UIViewController *)currentSelectedViewController;
@end

