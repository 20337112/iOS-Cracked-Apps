//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTVideoURLRequestInfo : NSObject
{
    NSString *_videoID;
    unsigned long long _sp;
    unsigned long long _playType;
    NSString *_itemID;
    NSString *_categoryID;
    NSString *_adID;
}

@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) unsigned long long playType; // @synthesize playType=_playType;
@property(nonatomic) unsigned long long sp; // @synthesize sp=_sp;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;

@end
