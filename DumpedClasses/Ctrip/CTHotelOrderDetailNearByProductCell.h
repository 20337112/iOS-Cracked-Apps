//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelOrderDetailCardCell.h"

@class ModuleDetailModel, NSString, UIView;

@interface CTHotelOrderDetailNearByProductCell : CTHotelOrderDetailCardCell
{
    UIView *containView;
    ModuleDetailModel *moduleModel;
    NSString *layoutConfig;
    id <CTHotelNewByButtonDidSelectDelegate> _delegate;
}

+ (double)getCellHeight:(id)arg1;
@property(nonatomic) __weak id <CTHotelNewByButtonDidSelectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectRoundServerItem:(id)arg1;
- (id)setBtnAttribuStr:(id)arg1;
- (void)drawBtnView:(id)arg1 rowNum:(long long)arg2;
- (void)setData:(id)arg1;
- (void)initView;

@end

