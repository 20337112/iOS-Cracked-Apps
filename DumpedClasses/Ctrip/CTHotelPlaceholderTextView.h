//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class UILabel;

@interface CTHotelPlaceholderTextView : UITextView
{
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void).cxx_destruct;
- (void)textDidEndChange:(id)arg1;
- (void)textDidBeginChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

