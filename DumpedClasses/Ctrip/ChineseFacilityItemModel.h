//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ChineseFacilityItemModel : CTBusinessBean
{
    int _itemType;
    NSString *_itemTitle;
}

@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

