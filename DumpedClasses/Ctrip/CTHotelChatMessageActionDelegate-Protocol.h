//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTHotelChatContentViewModel, CTHotelChatVoiceView, NSString;

@protocol CTHotelChatMessageActionDelegate <NSObject>
- (void)clickPlayAudio:(CTHotelChatContentViewModel *)arg1 voiceView:(CTHotelChatVoiceView *)arg2 isClick:(_Bool)arg3;
- (void)clickChooseOrder;
- (void)clickIconAction:(CTHotelChatContentViewModel *)arg1;
- (void)resendAction:(CTHotelChatContentViewModel *)arg1;
- (void)clickCommentCell:(long long)arg1 userId:(NSString *)arg2 msgId:(NSString *)arg3 sessionId:(long long)arg4;
- (void)clickLinkText:(NSString *)arg1;
- (void)clickPhoneNumber:(NSString *)arg1;
@end

