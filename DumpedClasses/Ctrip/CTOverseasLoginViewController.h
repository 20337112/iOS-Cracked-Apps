//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UILabel, UITextField;

@interface CTOverseasLoginViewController : CTRootViewController <UIGestureRecognizerDelegate>
{
    UILabel *_countryCodeLabel;
    UITextField *_phoneTF;
    UITextField *_passwordTF;
    int _errorTime;
}

- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didSelectedCountryPhoneCode:(id)arg1;
- (void)login;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doFindPassword;
- (void)getHelp;
- (void)showBtnClicked:(id)arg1;
- (void)selectCountryPhoneCode;
- (void)cancelBtnClicked;
- (int)applyNavigationBarStyle;
- (void)initView;
- (void)initData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

