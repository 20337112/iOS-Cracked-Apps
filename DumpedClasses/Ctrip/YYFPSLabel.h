//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class CADisplayLink, UIFont;

@interface YYFPSLabel : UILabel
{
    CADisplayLink *_link;
    unsigned long long _count;
    double _lastTime;
    UIFont *_font;
    UIFont *_subFont;
    double _llll;
}

- (void).cxx_destruct;
- (void)tick:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

