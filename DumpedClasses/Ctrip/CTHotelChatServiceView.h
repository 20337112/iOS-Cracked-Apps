//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTHotelChatCacheBean;

@interface CTHotelChatServiceView : UIView
{
    id <CTHotelChatServiceDelegate> _delegate;
    CTHotelChatCacheBean *_mCacheBean;
}

@property(nonatomic) __weak CTHotelChatCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
@property(nonatomic) __weak id <CTHotelChatServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serviceBtnAction:(id)arg1;
- (void)creatNumView:(id)arg1;
- (void)creatServiceViewWith:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

