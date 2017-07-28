//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSTimer, WXAnimationLayoutInfo, WXComponent, WXSDKInstance;

@interface WXAnimationLayout : NSObject
{
    NSTimer *_updateStyleTimer;
    WXComponent *_targetComponent;
    NSDate *_animationStartDate;
    WXAnimationLayoutInfo *_widthInfo;
    WXAnimationLayoutInfo *_heightInfo;
    double _animationDuration;
    double _animationDelay;
    NSDictionary *_needUpdateStyles;
    WXSDKInstance *_weexInstance;
}

@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
@property(retain, nonatomic) NSDictionary *needUpdateStyles; // @synthesize needUpdateStyles=_needUpdateStyles;
@property(nonatomic) double animationDelay; // @synthesize animationDelay=_animationDelay;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) WXAnimationLayoutInfo *heightInfo; // @synthesize heightInfo=_heightInfo;
@property(retain, nonatomic) WXAnimationLayoutInfo *widthInfo; // @synthesize widthInfo=_widthInfo;
@property(retain, nonatomic) NSDate *animationStartDate; // @synthesize animationStartDate=_animationStartDate;
@property(retain, nonatomic) WXComponent *targetComponent; // @synthesize targetComponent=_targetComponent;
@property(retain, nonatomic) NSTimer *updateStyleTimer; // @synthesize updateStyleTimer=_updateStyleTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateStyle:(id)arg1;
- (void)updateStyleOnTimer;
- (void)stopUpdateStyleTimer;
- (void)startUpdateStyleTimer;
- (void)layoutForAnimation;
- (id)init;

@end
