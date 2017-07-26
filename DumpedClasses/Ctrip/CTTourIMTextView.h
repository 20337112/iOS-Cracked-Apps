//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSMutableArray, NSString, UIColor;

@interface CTTourIMTextView : UITextView
{
    NSString *_placeHolder;
    UIColor *_placeHolderColor;
    NSMutableArray *_usersArray;
    id <CTTourIMTextViewDelegate> _pasteDelegate;
    UITextView *_placeHolderText;
}

@property(retain, nonatomic) UITextView *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
@property(nonatomic) __weak id <CTTourIMTextViewDelegate> pasteDelegate; // @synthesize pasteDelegate=_pasteDelegate;
@property(retain, nonatomic) NSMutableArray *usersArray; // @synthesize usersArray=_usersArray;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)paste:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)clearUsersInfoArray;
- (void)saveUsersInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

