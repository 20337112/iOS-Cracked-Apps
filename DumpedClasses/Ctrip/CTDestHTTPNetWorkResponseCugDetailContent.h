//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTDestHTTPNetWorkResponseCugDetailMedialInfo, NSString;

@interface CTDestHTTPNetWorkResponseCugDetailContent : NSObject
{
    int _contentId;
    int _sortIndex;
    NSString *_text;
    CTDestHTTPNetWorkResponseCugDetailMedialInfo *_mediaInfo;
}

@property(nonatomic) int sortIndex; // @synthesize sortIndex=_sortIndex;
@property(retain, nonatomic) CTDestHTTPNetWorkResponseCugDetailMedialInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;

@end

