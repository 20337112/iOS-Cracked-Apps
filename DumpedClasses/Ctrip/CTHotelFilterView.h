//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "CTHotelFilterItemViewDelegate.h"

@class CTHotelFilterItem, NSArray, NSMutableArray, NSString, UIView;

@interface CTHotelFilterView : UIScrollView <CTHotelFilterItemViewDelegate>
{
    unsigned long long _style;
    id <CTHotelFilterViewDelegate> _filterDelegate;
    unsigned long long _maxLineNum;
    NSArray *_items;
    NSMutableArray *_itemViews;
    UIView *_lineView;
    CTHotelFilterItem *_showItem;
    struct CGSize _size;
}

+ (double)getFilterHeight:(id)arg1 maxLineNum:(unsigned long long)arg2 style:(unsigned long long)arg3;
+ (double)getCommentHeight:(id)arg1 maxLineNum:(unsigned long long)arg2;
+ (double)getFilterHieght:(id)arg1 maxLineNum:(unsigned long long)arg2;
+ (id)initWithItems:(id)arg1 style:(unsigned long long)arg2 frame:(struct CGRect)arg3;
@property(retain, nonatomic) CTHotelFilterItem *showItem; // @synthesize showItem=_showItem;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long maxLineNum; // @synthesize maxLineNum=_maxLineNum;
@property(nonatomic) __weak id <CTHotelFilterViewDelegate> filterDelegate; // @synthesize filterDelegate=_filterDelegate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)CTHotelFilterItemViewItemId:(long long)arg1 code:(id)arg2 selected:(_Bool)arg3;
- (void)setItems:(id)arg1 withShow:(id)arg2;
- (void)initCommentView;
- (void)initView;
- (void)unselectAll;
- (void)setTitle:(id)arg1 itemId:(long long)arg2 code:(id)arg3;
- (void)setUnselected:(long long)arg1 code:(id)arg2;
- (void)setSelected:(long long)arg1 code:(id)arg2;
- (id)init:(id)arg1 style:(unsigned long long)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

