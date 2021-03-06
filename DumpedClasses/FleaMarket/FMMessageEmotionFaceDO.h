//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface FMMessageEmotionFaceDO : NSObject
{
    UIImage *_emotionImage;
    NSString *_iconId;
    NSString *_iconUrl;
    NSString *_iconShowUrl;
    NSString *_iconName;
    NSString *_iconAlias;
    NSString *_position;
    NSString *_iconWidth;
    NSString *_iconHeight;
    NSString *_iconImageName;
    NSString *_iconShowImageName;
}

@property(copy, nonatomic) NSString *iconShowImageName; // @synthesize iconShowImageName=_iconShowImageName;
@property(copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(copy, nonatomic) NSString *iconHeight; // @synthesize iconHeight=_iconHeight;
@property(copy, nonatomic) NSString *iconWidth; // @synthesize iconWidth=_iconWidth;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *iconAlias; // @synthesize iconAlias=_iconAlias;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *iconShowUrl; // @synthesize iconShowUrl=_iconShowUrl;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
- (void).cxx_destruct;
- (id)fetchEmotionImage;
@property(readonly, nonatomic) NSString *mediaUrl;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

