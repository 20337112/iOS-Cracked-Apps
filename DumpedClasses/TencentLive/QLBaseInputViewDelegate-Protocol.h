//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QLBaseInputView, UIView;

@protocol QLBaseInputViewDelegate <NSObject>

@optional
- (id)momentInputViewControlInstance;
- (void)momentInputViewDidPressSendButton:(QLBaseInputView *)arg1;
- (void)momentInputViewDidPressKeyBoardButton:(QLBaseInputView *)arg1;
- (void)momentInputViewDidPressEmojiButton:(QLBaseInputView *)arg1;
- (void)momentInputViewDidDismiss:(QLBaseInputView *)arg1;
- (void)momentInputView:(QLBaseInputView *)arg1 willShowInView:(UIView *)arg2;
- (void)momentInputViewWillBeginPublish:(QLBaseInputView *)arg1;
@end

