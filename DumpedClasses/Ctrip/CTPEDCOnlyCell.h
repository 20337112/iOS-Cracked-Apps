//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface CTPEDCOnlyCell : UITableViewCell
{
    UILabel *_edcPayMsgLabel;
    UILabel *_totalPayLabel;
}

@property(retain, nonatomic) UILabel *totalPayLabel; // @synthesize totalPayLabel=_totalPayLabel;
@property(retain, nonatomic) UILabel *edcPayMsgLabel; // @synthesize edcPayMsgLabel=_edcPayMsgLabel;
- (void).cxx_destruct;
- (void)setEdcTotalPay:(id)arg1;
- (void)setEdcPayMsg:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

