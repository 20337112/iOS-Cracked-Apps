//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface CTTourDestinationMenuPop : NSObject <NSCoding, NSCopying>
{
    _Bool _hasPic;
    NSString *_category;
    NSArray *_destAreaLst;
    NSString *_key;
    NSArray *_pictureTextListData;
    NSArray *_foldTags;
}

+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) _Bool hasPic; // @synthesize hasPic=_hasPic;
@property(copy, nonatomic) NSArray *foldTags; // @synthesize foldTags=_foldTags;
@property(copy, nonatomic) NSArray *pictureTextListData; // @synthesize pictureTextListData=_pictureTextListData;
@property(retain) NSString *key; // @synthesize key=_key;
@property(retain) NSArray *destAreaLst; // @synthesize destAreaLst=_destAreaLst;
@property(retain) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

