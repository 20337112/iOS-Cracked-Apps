//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (KeyboardAnimation)
- (void)an_keyboardWillShowHide:(id)arg1 isShowing:(_Bool)arg2;
- (void)an_handleWillHideKeyboardNotification:(id)arg1;
- (void)an_handleWillShowKeyboardNotification:(id)arg1;
- (void)an_unsubscribeKeyboard;
- (void)an_subscribeKeyboardWithBeforeAnimations:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)an_subscribeKeyboardWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@end

