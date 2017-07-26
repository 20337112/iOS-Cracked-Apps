//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTLineView, UIButton, UIView;

@interface CTHotelDetailModifyDateSheetBeforeCell : CTCustomeGroupTableViewCell
{
    UIButton *_beforBtn;
    UIButton *_backBtn;
    UIView *_lineView;
    CTLineView *_separatorLine;
    id <CTHotelDetailModifyDateSheetBeforeCellDelegate> _delegate;
}

@property(nonatomic) __weak id <CTHotelDetailModifyDateSheetBeforeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTLineView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIButton *beforBtn; // @synthesize beforBtn=_beforBtn;
- (void).cxx_destruct;
- (void)backAction:(id)arg1;
- (void)beforeAction:(id)arg1;
- (void)fillCellWithTodayBeforeDawn:(_Bool)arg1 delegate:(id)arg2;

@end

