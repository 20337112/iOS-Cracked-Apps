//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchBar.h"

@class UIButton, UITextField;

@interface KGPlayViewSearchBar : UISearchBar
{
    UITextField *_textField;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)resignFirstResponder;
- (void)setPlaceholder:(id)arg1;
- (void)initKGSearchBar;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

