//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTAddressNode, CTRegionViewController_train;

@protocol CTRegionViewController_trainDelegate <NSObject>

@optional
- (void)regionControllerCanceled:(CTRegionViewController_train *)arg1;
- (void)regionController:(CTRegionViewController_train *)arg1 didSelectRegion:(CTAddressNode *)arg2;
@end

