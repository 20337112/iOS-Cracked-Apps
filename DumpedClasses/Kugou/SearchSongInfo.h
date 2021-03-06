//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SongInfo.h"

@class NSArray, NSString;

@interface SearchSongInfo : SongInfo
{
    _Bool _isMultiVersionSubType;
    long long _multiVersionDisplayState;
    NSString *_searchSingerName;
    NSString *_songname;
    NSString *_othername;
    NSString *_searchMusicNameString;
    NSString *_searchSingerNameString;
    NSArray *_musicNameHighlightRangeArray;
    NSArray *_singerNameHighlightRangeArray;
}

@property(readonly, nonatomic) NSArray *singerNameHighlightRangeArray; // @synthesize singerNameHighlightRangeArray=_singerNameHighlightRangeArray;
@property(readonly, nonatomic) NSArray *musicNameHighlightRangeArray; // @synthesize musicNameHighlightRangeArray=_musicNameHighlightRangeArray;
@property(readonly, nonatomic) NSString *searchSingerNameString; // @synthesize searchSingerNameString=_searchSingerNameString;
@property(readonly, nonatomic) NSString *searchMusicNameString; // @synthesize searchMusicNameString=_searchMusicNameString;
@property(copy, nonatomic) NSString *othername; // @synthesize othername=_othername;
@property(copy, nonatomic) NSString *songname; // @synthesize songname=_songname;
@property(copy, nonatomic) NSString *searchSingerName; // @synthesize searchSingerName=_searchSingerName;
@property(nonatomic) long long multiVersionDisplayState; // @synthesize multiVersionDisplayState=_multiVersionDisplayState;
@property(nonatomic) _Bool isMultiVersionSubType; // @synthesize isMultiVersionSubType=_isMultiVersionSubType;
- (void).cxx_destruct;
- (id)filteSingerNameFromTagMusicNameString:(id)arg1;
- (id)filteSongNameFromTagMusicNameString:(id)arg1;
- (id)createAttributedStringWithField:(unsigned long long)arg1 value:(id)arg2 offset:(long long *)arg3;
- (id)refreshHighLightedString:(id)arg1 field:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;

@end

