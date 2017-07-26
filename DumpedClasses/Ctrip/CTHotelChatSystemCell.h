//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelChatCell.h"

@class CTHotelChatContentViewModel, UILabel, UIView;

@interface CTHotelChatSystemCell : CTHotelChatCell
{
    id <CTHotelChatSystemActionDelegate> _delegate;
    UILabel *_lbContent;
    UIView *_containerView;
    CTHotelChatContentViewModel *_chatContentViewModel;
}

+ (double)getCellHeight:(id)arg1;
+ (struct CGSize)getTextHeight:(id)arg1;
@property(retain, nonatomic) CTHotelChatContentViewModel *chatContentViewModel; // @synthesize chatContentViewModel=_chatContentViewModel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *lbContent; // @synthesize lbContent=_lbContent;
@property(nonatomic) __weak id <CTHotelChatSystemActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textTapped:(id)arg1;
- (void)setData:(id)arg1;
- (void)initView;

@end

