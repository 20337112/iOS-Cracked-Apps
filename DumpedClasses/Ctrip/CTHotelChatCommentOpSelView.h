//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTHotelChatCacheBean, CTRootViewController, UILabel, UIScrollView;

@interface CTHotelChatCommentOpSelView : UIView
{
    _Bool _isSwitchToComment;
    CTRootViewController *_rootVC;
    CTHotelChatCacheBean *_chatCacheBean;
    UILabel *_lbTitle;
    UIScrollView *_scrollView;
}

+ (id)showInRootVC:(id)arg1;
@property(nonatomic) _Bool isSwitchToComment; // @synthesize isSwitchToComment=_isSwitchToComment;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(nonatomic) __weak CTHotelChatCacheBean *chatCacheBean; // @synthesize chatCacheBean=_chatCacheBean;
@property(nonatomic) __weak CTRootViewController *rootVC; // @synthesize rootVC=_rootVC;
- (void).cxx_destruct;
- (void)commentClick:(id)arg1;
- (void)removeFromSuperview;
- (id)init;

@end

