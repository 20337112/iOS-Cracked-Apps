//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class UIButton;

@interface CTHotelMainMyCell : CTHotelBaseCell
{
    CDUnknownBlockType _block;
    UIButton *_myOrderBtn;
    UIButton *_myHotelBtn;
    UIButton *_totalLabel;
}

+ (double)getCellHeight;
@property(retain, nonatomic) UIButton *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UIButton *myHotelBtn; // @synthesize myHotelBtn=_myHotelBtn;
@property(retain, nonatomic) UIButton *myOrderBtn; // @synthesize myOrderBtn=_myOrderBtn;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)gotoMyHotel;
- (void)gotoMyOrder;
- (id)getAttr:(id)arg1 subtitle:(id)arg2;
- (void)setbadge:(long long)arg1;
- (void)initView;

@end

