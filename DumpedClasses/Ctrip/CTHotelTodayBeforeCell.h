//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class UIButton, UILabel, UIView;

@interface CTHotelTodayBeforeCell : CTHotelBaseCell
{
    CDUnknownBlockType _block;
    UILabel *_txtLabel;
    UIView *_lineView;
    UIButton *_todayBeforeBtn;
    UIButton *_todayAfterBtn;
}

+ (double)getCellHeight;
@property(retain, nonatomic) UIButton *todayAfterBtn; // @synthesize todayAfterBtn=_todayAfterBtn;
@property(retain, nonatomic) UIButton *todayBeforeBtn; // @synthesize todayBeforeBtn=_todayBeforeBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *txtLabel; // @synthesize txtLabel=_txtLabel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)resetBeforedawnButton:(_Bool)arg1;
- (void)afterAction;
- (void)beforeAction;
- (void)initView;

@end

