//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class APTextField, NSString, UIImageView;

@interface GifSearchInputView : UIView <UITextFieldDelegate>
{
    APTextField *_searchTextField;
    id _hiddenValue;
    UIImageView *_searchTextFieldBackgroundView;
    UIImageView *_searchIconView;
    double _cancelButtonWidth;
    NSString *_oldText;
}

@property(retain, nonatomic) NSString *oldText; // @synthesize oldText=_oldText;
@property(nonatomic) double cancelButtonWidth; // @synthesize cancelButtonWidth=_cancelButtonWidth;
@property(retain, nonatomic) UIImageView *searchIconView; // @synthesize searchIconView=_searchIconView;
@property(retain, nonatomic) UIImageView *searchTextFieldBackgroundView; // @synthesize searchTextFieldBackgroundView=_searchTextFieldBackgroundView;
@property(retain, nonatomic) id hiddenValue; // @synthesize hiddenValue=_hiddenValue;
@property(retain, nonatomic) APTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
- (void).cxx_destruct;
- (void)autoSetSubViewFrames;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

