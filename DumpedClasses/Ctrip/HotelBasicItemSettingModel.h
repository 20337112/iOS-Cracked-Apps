//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelBasicItemSettingModel : CTBusinessBean
{
    int _itemType;
    NSString *_itemKey;
    NSString *_itemValue;
    NSString *_itemName;
    NSString *_itemCode;
}

@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *itemCode; // @synthesize itemCode=_itemCode;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSString *itemValue; // @synthesize itemValue=_itemValue;
@property(copy, nonatomic) NSString *itemKey; // @synthesize itemKey=_itemKey;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

