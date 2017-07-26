//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class UIButton;

@interface CTTrainOrderDetailNavigationRightView : CTRootView
{
    _Bool _isRolling;
    UIButton *_refreshButton;
    UIButton *_couponButton;
    CDUnknownBlockType _CouponActionBlock;
    CDUnknownBlockType _RefreshActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType RefreshActionBlock; // @synthesize RefreshActionBlock=_RefreshActionBlock;
@property(copy, nonatomic) CDUnknownBlockType CouponActionBlock; // @synthesize CouponActionBlock=_CouponActionBlock;
@property(nonatomic) _Bool isRolling; // @synthesize isRolling=_isRolling;
@property(nonatomic) __weak UIButton *couponButton; // @synthesize couponButton=_couponButton;
@property(nonatomic) __weak UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
- (void).cxx_destruct;
- (void)stopCircleAnimation;
- (void)startCircleAnimation;
- (void)refreshAction:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)awakeFromNib;

@end

