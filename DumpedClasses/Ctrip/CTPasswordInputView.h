//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTPasswordInputProtocol.h"
#import "UITextFieldDelegate.h"

@class CAShapeLayer, CATextLayer, NSArray, NSString, UIColor, UITextField;

@interface CTPasswordInputView : UIView <UITextFieldDelegate, CTPasswordInputProtocol>
{
    CDUnknownBlockType _onCodeStatusChangeBlock;
    UIColor *_outLineColor;
    UIColor *_inLineColor;
    double _inputWidth;
    double _inputHeight;
    double _inputCornerRadius;
    NSString *_placeHolder;
    double _rapidInputWidth;
    id <CTPasswordInputViewDelegate> _delegate;
    UIView *_gridView;
    CAShapeLayer *_shapeLayerFrame;
    CAShapeLayer *_shapeLayer;
    UITextField *_shadowInput;
    NSArray *_passwordViewsArray;
    NSString *_password;
    CATextLayer *_textlayer;
}

@property(retain, nonatomic) CATextLayer *textlayer; // @synthesize textlayer=_textlayer;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSArray *passwordViewsArray; // @synthesize passwordViewsArray=_passwordViewsArray;
@property(retain, nonatomic) UITextField *shadowInput; // @synthesize shadowInput=_shadowInput;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayerFrame; // @synthesize shapeLayerFrame=_shapeLayerFrame;
@property(retain, nonatomic) UIView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak id <CTPasswordInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double rapidInputWidth; // @synthesize rapidInputWidth=_rapidInputWidth;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) double inputCornerRadius; // @synthesize inputCornerRadius=_inputCornerRadius;
@property(nonatomic) double inputHeight; // @synthesize inputHeight=_inputHeight;
@property(nonatomic) double inputWidth; // @synthesize inputWidth=_inputWidth;
@property(retain, nonatomic) UIColor *inLineColor; // @synthesize inLineColor=_inLineColor;
@property(retain, nonatomic) UIColor *outLineColor; // @synthesize outLineColor=_outLineColor;
@property(copy, nonatomic) CDUnknownBlockType onCodeStatusChangeBlock; // @synthesize onCodeStatusChangeBlock=_onCodeStatusChangeBlock;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isFocus;
- (void)resignFocus;
- (void)getFocus;
- (void)resetCode;
- (id)getCode;
- (void)textFieldDidChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)reDrawViewWithWidth:(double)arg1 inputHeight:(double)arg2;
- (void)initBaseView;
- (void)showPasswordCellsWithNumber:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

