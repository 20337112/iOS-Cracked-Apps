//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTStateView.h"

@class NSString;

@interface CTFooterStateView : CTStateView
{
    NSString *_loadAllHintText;
}

@property(copy, nonatomic) NSString *loadAllHintText; // @synthesize loadAllHintText=_loadAllHintText;
- (void).cxx_destruct;
- (void)updateTimeLabel;
- (void)changeState:(int)arg1;
- (void)initBaseView;
- (void)initBaseData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

