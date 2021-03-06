//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPSpaceInfo, CDPSpaceView, NSString;

@protocol PromotionCenterDelegate <NSObject>

@optional
- (void)promotionDataDidFinishLoading:(CDPSpaceInfo *)arg1;
- (void)promotionViewDidFinishLoading:(CDPSpaceView *)arg1;
- (_Bool)promotionTopViewExecutingByBusiness;
- (_Bool)subViewNeedExecutingTopView;
- (void)promotionDataDidFinishLoading:(CDPSpaceInfo *)arg1 spaceCode:(NSString *)arg2;
- (void)promotionViewDidFinishLoading:(CDPSpaceView *)arg1 spaceCode:(NSString *)arg2;
- (_Bool)promotionViewShouldBeIgnored:(CDPSpaceInfo *)arg1;
@end

