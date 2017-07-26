//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface CTHotelRichStylePropertyRecord : NSObject
{
    _Bool _highlighted;
    _Bool _enabled;
    UIFont *_font;
    long long _textAlignment;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIColor *_shadowColor;
    double _lineHeightMultiple;
    double _lineSpacing;
    struct CGSize _shadowOffset;
}

@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;

@end

