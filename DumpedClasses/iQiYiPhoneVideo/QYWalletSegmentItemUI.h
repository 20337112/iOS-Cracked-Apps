//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIFont, UIImage;

@interface QYWalletSegmentItemUI : NSObject
{
    int _imgPosition;
    NSString *_itemName;
    long long _itemId;
    UIImage *_iconImage;
    UIFont *_titleFont;
}

@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) int imgPosition; // @synthesize imgPosition=_imgPosition;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

