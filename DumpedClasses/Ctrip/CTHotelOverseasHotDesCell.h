//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class NSMutableArray, UIScrollView;

@interface CTHotelOverseasHotDesCell : CTHotelBaseCell
{
    NSMutableArray *_overseasHotDesInfoList;
    UIScrollView *_mScrollView;
}

+ (double)getCellHeight;
@property(retain, nonatomic) UIScrollView *mScrollView; // @synthesize mScrollView=_mScrollView;
@property(retain, nonatomic) NSMutableArray *overseasHotDesInfoList; // @synthesize overseasHotDesInfoList=_overseasHotDesInfoList;
- (void).cxx_destruct;
- (void)drawScrollView:(long long)arg1 itemList:(id)arg2;
- (void)resetHotDesView;
- (void)initView;

@end

