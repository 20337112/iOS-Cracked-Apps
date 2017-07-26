//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray, NSString, UIColor, UIFont;

@interface CTTrainLabel : UIView
{
    long long currentSelectedButtonComponentIndex;
    CDStruct_627e0f85 visibleRange;
    struct CGSize _optimumSize;
    int _textAlignment;
    int _lineBreakMode;
    UIColor *_textColor;
    UIFont *_font;
    NSDictionary *_linkAttributes;
    NSDictionary *_selectedLinkAttributes;
    NSString *_paragraphReplacement;
    NSString *_text;
    double _lineSpacing;
    NSString *_plainText;
    NSMutableArray *_textComponents;
    id <CTTrainLabelDelegate> delegate;
    double lineHeightMultiple;
    double minLineHeight;
    double maxLineHeight;
}

@property(nonatomic) double maxLineHeight; // @synthesize maxLineHeight;
@property(nonatomic) double minLineHeight; // @synthesize minLineHeight;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple;
@property(nonatomic) id <CTTrainLabelDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSMutableArray *textComponents; // @synthesize textComponents=_textComponents;
@property(retain, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) int lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *paragraphReplacement; // @synthesize paragraphReplacement=_paragraphReplacement;
@property(retain, nonatomic) NSDictionary *selectedLinkAttributes; // @synthesize selectedLinkAttributes=_selectedLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (double)adjustHeight;
- (void)adjustVCenterWithRect:(struct CGRect)arg1;
- (id)visibleText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)colorForHex:(id)arg1;
- (void)parse:(id)arg1 valid_tags:(id)arg2;
- (void)extractTextStyle:(id)arg1;
- (id)components;
- (double)frameHeight:(struct __CTFrame *)arg1;
- (struct CGSize)optimumSize;
- (void)onButtonPressed:(id)arg1;
- (void)onButtonTouchUpOutside:(id)arg1;
- (void)onButtonTouchDown:(id)arg1;
- (void)applyUnderlineColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyColor:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyBoldItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyBoldStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyFontAttributes:(id)arg1 toText:(struct __CFAttributedString *)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)applyItalicStyleToText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyDoubleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applySingleUnderlineText:(struct __CFAttributedString *)arg1 atPosition:(long long)arg2 withLength:(long long)arg3;
- (void)applyParagraphStyleToText:(struct __CFAttributedString *)arg1 attributes:(id)arg2 atPosition:(long long)arg3 withLength:(long long)arg4;
- (void)render;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

