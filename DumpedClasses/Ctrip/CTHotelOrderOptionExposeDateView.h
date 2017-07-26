//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class UIButton, UILabel, UIView;

@interface CTHotelOrderOptionExposeDateView : CTRootView
{
    _Bool _hasLeftMargin;
    _Bool _hasBottonLine;
    _Bool _canSelectDate;
    id <CTHotelOrderOptionExposeSelectDateDelegate> _delegate;
    UIView *_bgView;
    UILabel *_lbLine;
    UILabel *_lbTitle;
    UILabel *_lbDate;
    UILabel *_lbPrice;
    UILabel *_lbArrow;
    UIButton *_btnDate;
    UILabel *_labDesc;
}

+ (double)getViewHeight:(id)arg1;
@property(nonatomic) _Bool canSelectDate; // @synthesize canSelectDate=_canSelectDate;
@property(retain, nonatomic) UILabel *labDesc; // @synthesize labDesc=_labDesc;
@property(retain, nonatomic) UIButton *btnDate; // @synthesize btnDate=_btnDate;
@property(retain, nonatomic) UILabel *lbArrow; // @synthesize lbArrow=_lbArrow;
@property(retain, nonatomic) UILabel *lbPrice; // @synthesize lbPrice=_lbPrice;
@property(retain, nonatomic) UILabel *lbDate; // @synthesize lbDate=_lbDate;
@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(retain, nonatomic) UILabel *lbLine; // @synthesize lbLine=_lbLine;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool hasBottonLine; // @synthesize hasBottonLine=_hasBottonLine;
@property(nonatomic) _Bool hasLeftMargin; // @synthesize hasLeftMargin=_hasLeftMargin;
@property(nonatomic) __weak id <CTHotelOrderOptionExposeSelectDateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectDate;
- (void)setTopMaskCorner;
- (void)resetFrame:(id)arg1;
- (void)showWarning:(_Bool)arg1;
- (void)setData:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 hasMargin:(_Bool)arg2;

@end

