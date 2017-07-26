//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface CTTrainPassengerENNameCell : CTCustomeGroupTableViewCell <UITextFieldDelegate>
{
    id <CTTrainPassengerENNameCellDelegate> _delegate;
    UILabel *_labelLastName;
    UILabel *_labelFirstName;
    UIButton *_buttonProblem;
    UITextField *_textFieldLastName;
    UITextField *_textFieldFirstName;
    UIButton *_buttonLanguageSwitch;
}

@property(retain, nonatomic) UIButton *buttonLanguageSwitch; // @synthesize buttonLanguageSwitch=_buttonLanguageSwitch;
@property(retain, nonatomic) UITextField *textFieldFirstName; // @synthesize textFieldFirstName=_textFieldFirstName;
@property(retain, nonatomic) UITextField *textFieldLastName; // @synthesize textFieldLastName=_textFieldLastName;
@property(retain, nonatomic) UIButton *buttonProblem; // @synthesize buttonProblem=_buttonProblem;
@property(retain, nonatomic) UILabel *labelFirstName; // @synthesize labelFirstName=_labelFirstName;
@property(retain, nonatomic) UILabel *labelLastName; // @synthesize labelLastName=_labelLastName;
@property(nonatomic) __weak id <CTTrainPassengerENNameCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onLanguageSwitch:(id)arg1;
- (void)onProblemButton:(id)arg1;
- (id)firstName;
- (id)lastName;
- (void)setupContentWithLastName:(id)arg1 firstName:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

