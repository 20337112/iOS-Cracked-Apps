//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface CTHistoryTipView : UIView
{
    UILabel *_tipLabel;
    _Bool _touchUp;
}

@property(readonly, nonatomic, getter=isTouchUp) _Bool touchUp; // @synthesize touchUp=_touchUp;
- (void).cxx_destruct;
- (void)changeTip:(_Bool)arg1;
- (void)initView;
- (id)init;

@end

