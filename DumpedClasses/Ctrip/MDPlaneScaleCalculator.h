//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDSizeContext;

@interface MDPlaneScaleCalculator : NSObject
{
    long long project;
    float mViewportRatio;
    float mViewportWidth;
    float mViewportHeight;
    float mTextureWidth;
    float mTextureHeight;
    MDSizeContext *_sizeContext;
}

@property(nonatomic) __weak MDSizeContext *sizeContext; // @synthesize sizeContext=_sizeContext;
- (void).cxx_destruct;
- (void)calculate;
- (float)getTextureHeight;
- (float)getTextureWidth;
- (float)getViewportHeight;
- (float)getViewportWidth;
- (void)setViewportRatio:(float)arg1;
- (float)getTextureRatio;
- (id)initWithScale:(long long)arg1 sizeContext:(id)arg2;

@end

