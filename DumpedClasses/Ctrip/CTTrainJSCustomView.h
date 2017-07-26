//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSArray, NSMutableDictionary, NSString;

@interface CTTrainJSCustomView : UIView <UITextFieldDelegate>
{
    UIView *_viewContent;
    double _currentPoint;
    NSArray *_dialogDataChildren;
    NSMutableDictionary *_inputViewDictionary;
    NSString *_callId;
}

@property(copy, nonatomic) NSString *callId; // @synthesize callId=_callId;
@property(retain, nonatomic) NSMutableDictionary *inputViewDictionary; // @synthesize inputViewDictionary=_inputViewDictionary;
@property(retain, nonatomic) NSArray *dialogDataChildren; // @synthesize dialogDataChildren=_dialogDataChildren;
@property(nonatomic) double currentPoint; // @synthesize currentPoint=_currentPoint;
@property(retain, nonatomic) UIView *viewContent; // @synthesize viewContent=_viewContent;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)catchInputValueWithTextField:(id)arg1;
- (void)dismiss;
- (id)clickedButtonInAtIndex:(long long)arg1;
- (void)onButton:(id)arg1;
- (void)setupContentWithData:(id)arg1 callId:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

