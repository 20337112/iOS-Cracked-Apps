//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QYCardBottomBunner : NSObject
{
    NSString *_effective;
    NSArray *_itemList;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(copy, nonatomic) NSString *effective; // @synthesize effective=_effective;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)parseBisonAlbumClickForArray:(id)arg1;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

