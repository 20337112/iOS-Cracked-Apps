//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UITextFieldDelegate.h"

@class KGLoginLabelTextField, KGThemeButton, NSString;

@interface KGEnterNewPasswordViewController : KGViewController <UITextFieldDelegate>
{
    KGLoginLabelTextField *_newPwdTexfField;
    KGThemeButton *_submitBtn;
    NSString *_phoneNumber;
    NSString *_smsCode;
}

@property(copy, nonatomic) NSString *smsCode; // @synthesize smsCode=_smsCode;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)submitAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hiddenPasswordAction:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)initVC;
- (void)onTextChanged:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

