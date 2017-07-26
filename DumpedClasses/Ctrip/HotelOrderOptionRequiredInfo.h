//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelOrderOpsReqInfoHolder, NSMutableArray, NSString;

@interface HotelOrderOptionRequiredInfo : CTBusinessBean
{
    int _itemId;
    int _itemType;
    int _minValue;
    int _maxValue;
    NSString *_itemName;
    NSString *_placeHolder;
    NSString *_itemValue;
    NSMutableArray *_useDateList;
    HotelOrderOpsReqInfoHolder *_holder;
}

@property(retain, nonatomic) HotelOrderOpsReqInfoHolder *holder; // @synthesize holder=_holder;
@property(retain, nonatomic) NSMutableArray *useDateList; // @synthesize useDateList=_useDateList;
@property(nonatomic) int maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) int minValue; // @synthesize minValue=_minValue;
@property(copy, nonatomic) NSString *itemValue; // @synthesize itemValue=_itemValue;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(nonatomic) int itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

