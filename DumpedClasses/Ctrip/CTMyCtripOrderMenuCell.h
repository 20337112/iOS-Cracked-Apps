//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTMyCtripOrderMenuItemButton;

@interface CTMyCtripOrderMenuCell : UITableViewCell
{
    CTMyCtripOrderMenuItemButton *_allOrderButton;
    CTMyCtripOrderMenuItemButton *_unPayOrderButton;
    CTMyCtripOrderMenuItemButton *_unGoOrderButton;
    CTMyCtripOrderMenuItemButton *_unCommentOrderButton;
}

@property(readonly, nonatomic) CTMyCtripOrderMenuItemButton *unCommentOrderButton; // @synthesize unCommentOrderButton=_unCommentOrderButton;
@property(readonly, nonatomic) CTMyCtripOrderMenuItemButton *unGoOrderButton; // @synthesize unGoOrderButton=_unGoOrderButton;
@property(readonly, nonatomic) CTMyCtripOrderMenuItemButton *unPayOrderButton; // @synthesize unPayOrderButton=_unPayOrderButton;
@property(readonly, nonatomic) CTMyCtripOrderMenuItemButton *allOrderButton; // @synthesize allOrderButton=_allOrderButton;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

