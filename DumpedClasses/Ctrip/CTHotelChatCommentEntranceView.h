//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface CTHotelChatCommentEntranceView : UIView
{
    CDUnknownBlockType _callBack;
    UIButton *_commnetBtn;
}

+ (double)getHeight;
@property(retain, nonatomic) UIButton *commnetBtn; // @synthesize commnetBtn=_commnetBtn;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)setEnable:(_Bool)arg1;
- (void)commentClick;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 clickBlock:(CDUnknownBlockType)arg2;

@end

