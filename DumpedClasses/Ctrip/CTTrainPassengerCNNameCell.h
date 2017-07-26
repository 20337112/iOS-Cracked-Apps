//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface CTTrainPassengerCNNameCell : CTCustomeGroupTableViewCell <UITextFieldDelegate>
{
    _Bool _showLanguageSwitch;
    id <CTTrainPassengerCNNameCellDelegate> _delegate;
    UILabel *_labelTitle;
    UIButton *_buttonProblem;
    UITextField *_textFieldValue;
    UIButton *_buttonLanguageSwitch;
}

@property(retain, nonatomic) UIButton *buttonLanguageSwitch; // @synthesize buttonLanguageSwitch=_buttonLanguageSwitch;
@property(retain, nonatomic) UITextField *textFieldValue; // @synthesize textFieldValue=_textFieldValue;
@property(retain, nonatomic) UIButton *buttonProblem; // @synthesize buttonProblem=_buttonProblem;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(nonatomic) _Bool showLanguageSwitch; // @synthesize showLanguageSwitch=_showLanguageSwitch;
@property(nonatomic) __weak id <CTTrainPassengerCNNameCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onLanguageSwitch:(id)arg1;
- (void)onProblemButton:(id)arg1;
- (void)cellBecomeFirstResponder;
- (id)inputValue;
- (void)setupContentWithValue:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

