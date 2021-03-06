//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface DWAnchorNaviView : UIView
{
    NSMutableArray *_anchorPointArray;
    double _videoDuration;
    NSArray *_anchorModels;
}

@property(retain, nonatomic) NSArray *anchorModels; // @synthesize anchorModels=_anchorModels;
- (void).cxx_destruct;
- (void)hideBubbleTipViews:(_Bool)arg1;
- (void)setupAnchorPointView:(id)arg1;
- (void)updateWithDuration:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

