//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTVectorButton, NSLayoutConstraint, UIButton;

@interface CTLoginButtomView : UIView
{
    UIButton *_memberLoginButton;
    UIButton *_findPasswordButton;
    UIButton *_internationPhoneButton;
    UIView *_headView;
    UIButton *_noMemberLoginButton;
    CTVectorButton *_weinxinLoginButton;
    CTVectorButton *_qqLoginButton;
    NSLayoutConstraint *_renrenLoginButtonWidth;
    CTVectorButton *_weiboLoginButton;
    CTVectorButton *_uniformWoLoginButton;
    CTVectorButton *_renrenLoginButton;
    UIView *_wxinView;
    NSLayoutConstraint *_thirdPartyHeightConstraint;
    NSLayoutConstraint *_spacingThirdParty1;
    NSLayoutConstraint *_spacingThirdParty2;
    NSLayoutConstraint *_spacingThirdParty3;
    NSLayoutConstraint *_spacingThirdParty4;
    NSLayoutConstraint *_leadingThirdParty;
    NSLayoutConstraint *_trailingThirdParty;
    NSLayoutConstraint *_weixinBtnWidth;
    NSLayoutConstraint *_qqBtnWidth;
}

@property(nonatomic) __weak NSLayoutConstraint *qqBtnWidth; // @synthesize qqBtnWidth=_qqBtnWidth;
@property(nonatomic) __weak NSLayoutConstraint *weixinBtnWidth; // @synthesize weixinBtnWidth=_weixinBtnWidth;
@property(nonatomic) __weak NSLayoutConstraint *trailingThirdParty; // @synthesize trailingThirdParty=_trailingThirdParty;
@property(nonatomic) __weak NSLayoutConstraint *leadingThirdParty; // @synthesize leadingThirdParty=_leadingThirdParty;
@property(nonatomic) __weak NSLayoutConstraint *spacingThirdParty4; // @synthesize spacingThirdParty4=_spacingThirdParty4;
@property(nonatomic) __weak NSLayoutConstraint *spacingThirdParty3; // @synthesize spacingThirdParty3=_spacingThirdParty3;
@property(nonatomic) __weak NSLayoutConstraint *spacingThirdParty2; // @synthesize spacingThirdParty2=_spacingThirdParty2;
@property(nonatomic) __weak NSLayoutConstraint *spacingThirdParty1; // @synthesize spacingThirdParty1=_spacingThirdParty1;
@property(retain, nonatomic) NSLayoutConstraint *thirdPartyHeightConstraint; // @synthesize thirdPartyHeightConstraint=_thirdPartyHeightConstraint;
@property(retain, nonatomic) UIView *wxinView; // @synthesize wxinView=_wxinView;
@property(retain, nonatomic) CTVectorButton *renrenLoginButton; // @synthesize renrenLoginButton=_renrenLoginButton;
@property(nonatomic) __weak CTVectorButton *uniformWoLoginButton; // @synthesize uniformWoLoginButton=_uniformWoLoginButton;
@property(retain, nonatomic) CTVectorButton *weiboLoginButton; // @synthesize weiboLoginButton=_weiboLoginButton;
@property(retain, nonatomic) NSLayoutConstraint *renrenLoginButtonWidth; // @synthesize renrenLoginButtonWidth=_renrenLoginButtonWidth;
@property(retain, nonatomic) CTVectorButton *qqLoginButton; // @synthesize qqLoginButton=_qqLoginButton;
@property(retain, nonatomic) CTVectorButton *weinxinLoginButton; // @synthesize weinxinLoginButton=_weinxinLoginButton;
@property(retain, nonatomic) UIButton *noMemberLoginButton; // @synthesize noMemberLoginButton=_noMemberLoginButton;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIButton *internationPhoneButton; // @synthesize internationPhoneButton=_internationPhoneButton;
@property(retain, nonatomic) UIButton *findPasswordButton; // @synthesize findPasswordButton=_findPasswordButton;
@property(retain, nonatomic) UIButton *memberLoginButton; // @synthesize memberLoginButton=_memberLoginButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

