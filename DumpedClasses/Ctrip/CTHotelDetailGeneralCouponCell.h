//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class UIImageView, UILabel;

@interface CTHotelDetailGeneralCouponCell : CTHotelBaseCell
{
    UILabel *_titleLabel;
    UILabel *_receiveableLabel;
    UIImageView *_styleImageView;
}

@property(nonatomic) __weak UIImageView *styleImageView; // @synthesize styleImageView=_styleImageView;
@property(nonatomic) __weak UILabel *receiveableLabel; // @synthesize receiveableLabel=_receiveableLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)initReceiveableLabel;
- (void)initTitleLabel;
- (void)initTag;
- (void)updateCellWithTitle:(id)arg1 andReceiveableCount:(int)arg2;
- (void)initView;

@end

