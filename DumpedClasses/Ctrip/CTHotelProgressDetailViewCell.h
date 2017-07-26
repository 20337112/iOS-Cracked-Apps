//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class NSMutableArray, UIButton, UIView;

@interface CTHotelProgressDetailViewCell : CTHotelBaseCell
{
    int _type;
    id <CTHotelProgressDetailDelegate> _delegate;
    NSMutableArray *_progressList;
    UIButton *_cashBackAccountBtn;
    UIView *_refundView;
    NSMutableArray *_progressViewList;
}

+ (double)getCellHeight:(id)arg1 withType:(int)arg2;
@property(retain, nonatomic) NSMutableArray *progressViewList; // @synthesize progressViewList=_progressViewList;
@property(retain, nonatomic) UIView *refundView; // @synthesize refundView=_refundView;
@property(retain, nonatomic) UIButton *cashBackAccountBtn; // @synthesize cashBackAccountBtn=_cashBackAccountBtn;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *progressList; // @synthesize progressList=_progressList;
@property(nonatomic) __weak id <CTHotelProgressDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gotoOrderCashBackAccount:(id)arg1;
- (void)setAccountFrame;
- (_Bool)isEqualPreviousCount:(id)arg1 withType:(int)arg2;
- (void)setProgressData:(id)arg1 withType:(int)arg2;
- (void)setData:(id)arg1 withType:(int)arg2;
- (void)updateProgressWithType:(int)arg1;
- (double)createProgressView:(int)arg1 atIndex:(long long)arg2 withOffset:(double)arg3;
- (void)initView;

@end

