//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView;

@interface FMSearchCategoryLeafCell : UITableViewCell <UIScrollViewDelegate, FMComponentCellProtocol>
{
    int _selectedIndex;
    UIScrollView *_categoryLeafView;
    NSMutableArray *_leafList;
    double _categoryLeafCurrentButtonX;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(nonatomic) double categoryLeafCurrentButtonX; // @synthesize categoryLeafCurrentButtonX=_categoryLeafCurrentButtonX;
@property(retain, nonatomic) NSMutableArray *leafList; // @synthesize leafList=_leafList;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)trackLeafAppearEvent:(id)arg1;
- (void)setLeafEnabled:(_Bool)arg1;
- (void)categoryLeafClick:(id)arg1;
- (int)tagWithIndex:(int)arg1;
- (void)setLeafBtn:(id)arg1 selected:(_Bool)arg2;
- (void)selectLeaf:(int)arg1;
- (void)createLeafButtonToView:(id)arg1 leaf:(id)arg2 tagIndex:(int)arg3;
- (void)setCategoryLeafContent:(id)arg1;
- (void)bindComponent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

