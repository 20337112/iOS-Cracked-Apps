//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIControl;

@interface CTPassengerSelfConfirmView : UIView
{
    NSString *_name;
    NSString *_idNum;
    NSString *_idType;
    CDUnknownBlockType _block;
    UIControl *_backgroundBtn;
    UIView *_alertView;
}

- (void).cxx_destruct;
- (void)dismissView;
- (void)clickBottomButLeft:(id)arg1;
- (void)clickBottomButRight:(id)arg1;
- (void)initView;
- (void)showWithName:(id)arg1 idType:(id)arg2 idNum:(id)arg3 confirmBlock:(CDUnknownBlockType)arg4;

@end

