//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GDMHomeMoreMessageHandlerDelegate.h"

@class NSString, UIButton, UILabel;

@interface GDMHomeNavigationBar : UIView <GDMHomeMoreMessageHandlerDelegate>
{
    double lastAlpa;
    UIButton *_backButton;
    UIButton *_moreButton;
    UIView *_centerItem;
    UIView *_divisionLine;
    UIButton *_messageButton;
    UIButton *_discoverButton;
    UIButton *_messageView;
    UILabel *_messageLabel;
}

@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIButton *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UIButton *discoverButton; // @synthesize discoverButton=_discoverButton;
@property(retain, nonatomic) UIButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) UIView *divisionLine; // @synthesize divisionLine=_divisionLine;
@property(retain, nonatomic) UIView *centerItem; // @synthesize centerItem=_centerItem;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)hideMessageView;
- (void)showMessageView:(long long)arg1 isAnimation:(_Bool)arg2;
- (void)setButtonStyle:(id)arg1;
- (id)createLabel:(struct CGSize)arg1 title:(id)arg2 fontSize:(double)arg3;
- (id)createButton:(id)arg1 fontSize:(double)arg2;
- (id)createButton2:(id)arg1 fontSize:(double)arg2;
- (void)setButtonBGAlpa:(double)arg1;
- (void)updateBadgeCount:(long long)arg1 messagetype:(long long)arg2 animation:(_Bool)arg3;
- (void)setCenterItem:(id)arg1 isDetailHome:(_Bool)arg2;
- (void)setCenterItemTitle:(id)arg1 isDetailHome:(_Bool)arg2;
- (void)setAlphaRatio:(double)arg1 isDetailHome:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
