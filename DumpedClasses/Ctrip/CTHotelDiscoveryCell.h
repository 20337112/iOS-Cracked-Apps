//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSMutableArray, UILabel;

@interface CTHotelDiscoveryCell : CTCustomeGroupTableViewCell
{
    NSMutableArray *_discoveryBtnArray;
    UILabel *_arrowKeyImageView;
    CDUnknownBlockType _selblock;
}

@property(copy, nonatomic) CDUnknownBlockType selblock; // @synthesize selblock=_selblock;
@property(nonatomic) __weak UILabel *arrowKeyImageView; // @synthesize arrowKeyImageView=_arrowKeyImageView;
- (void).cxx_destruct;
- (void)discoveryBtnSelected:(id)arg1;
- (void)fillCellWithDiscoveryHotel:(id)arg1 cityModel:(id)arg2 andSelectionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSMutableArray *discoveryBtnArray; // @synthesize discoveryBtnArray=_discoveryBtnArray;

@end

