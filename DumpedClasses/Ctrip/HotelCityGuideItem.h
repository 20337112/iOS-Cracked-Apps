//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelCityGuideItem : CTBusinessBean
{
    int _itemId;
    int _itemPosition;
    NSString *_itemTitle;
    NSString *_itemIcon;
    NSString *_itemUrl;
}

@property(nonatomic) int itemPosition; // @synthesize itemPosition=_itemPosition;
@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *itemIcon; // @synthesize itemIcon=_itemIcon;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(nonatomic) int itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

