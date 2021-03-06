//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUBaseBlock.h"

@class PPLUMarkImageControl, PPUTextSimple, QYUImageControl;

@interface PPTopicBlock : QYUBaseBlock
{
    PPLUMarkImageControl *_imageBrick;
    QYUImageControl *_rightTopImageBrick;
    PPUTextSimple *_titleBrick;
    PPUTextSimple *_subtitleBrick;
    PPUTextSimple *_readBrick;
    PPUTextSimple *_discussBrick;
}

+ (double)getHeightByData:(id)arg1 rowWidth:(double)arg2;
+ (void)load;
@property(retain, nonatomic) PPUTextSimple *discussBrick; // @synthesize discussBrick=_discussBrick;
@property(retain, nonatomic) PPUTextSimple *readBrick; // @synthesize readBrick=_readBrick;
@property(retain, nonatomic) PPUTextSimple *subtitleBrick; // @synthesize subtitleBrick=_subtitleBrick;
@property(retain, nonatomic) PPUTextSimple *titleBrick; // @synthesize titleBrick=_titleBrick;
@property(retain, nonatomic) QYUImageControl *rightTopImageBrick; // @synthesize rightTopImageBrick=_rightTopImageBrick;
@property(retain, nonatomic) PPLUMarkImageControl *imageBrick; // @synthesize imageBrick=_imageBrick;
- (void).cxx_destruct;
- (void)applyData;
- (void)updateConstraints;
- (void)p_setupLayouts;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;

@end

