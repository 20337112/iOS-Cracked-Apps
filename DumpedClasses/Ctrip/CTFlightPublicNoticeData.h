//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface CTFlightPublicNoticeData : NSObject
{
    _Bool _canClose;
    long long _notifPage;
    long long _notifLevel;
    NSAttributedString *_title;
    NSAttributedString *_content;
    NSString *_textBtn;
    long long _titleFontSizeLevel;
}

+ (id)stringWithString:(id)arg1 size:(long long)arg2 fontScale:(double)arg3 isBold:(_Bool)arg4 color:(id)arg5;
@property(nonatomic) long long titleFontSizeLevel; // @synthesize titleFontSizeLevel=_titleFontSizeLevel;
@property(retain, nonatomic) NSString *textBtn; // @synthesize textBtn=_textBtn;
@property(retain, nonatomic) NSAttributedString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(nonatomic) _Bool canClose; // @synthesize canClose=_canClose;
@property(nonatomic) long long notifLevel; // @synthesize notifLevel=_notifLevel;
@property(nonatomic) long long notifPage; // @synthesize notifPage=_notifPage;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end
