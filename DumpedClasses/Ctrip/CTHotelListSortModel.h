//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotelListSortModel : NSObject
{
    int _sortType;
    NSString *_name;
    NSString *_fontName;
    NSString *_highlightedFontName;
    NSString *_logCode;
}

+ (id)modelWithSortType:(int)arg1 name:(id)arg2 fontName:(id)arg3 highlightedFontName:(id)arg4 logCode:(id)arg5;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) NSString *logCode; // @synthesize logCode=_logCode;
@property(copy, nonatomic) NSString *highlightedFontName; // @synthesize highlightedFontName=_highlightedFontName;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

