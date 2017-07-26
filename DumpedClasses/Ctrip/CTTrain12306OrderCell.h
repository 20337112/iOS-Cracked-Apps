//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTableViewCell.h"

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface CTTrain12306OrderCell : CTTableViewCell
{
    UILabel *_payStateLabel;
    UILabel *_departAndArriveCityLabel;
    UILabel *_departDateAndTrainNumLabel;
    UILabel *_ticketWindowLabel;
    UILabel *_priceLabel;
    UIButton *_cancelBtn;
    UILabel *_lineLabel;
    UILabel *_seatNumberLabel;
    NSLayoutConstraint *_sepLineLabelContraints;
    UIView *_backContentView;
    UILabel *_moneySymbolLabel;
    id <CTTrain12306OrderCellDelegate> _delegate;
}

@property(nonatomic) __weak id <CTTrain12306OrderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *moneySymbolLabel; // @synthesize moneySymbolLabel=_moneySymbolLabel;
@property(nonatomic) __weak UIView *backContentView; // @synthesize backContentView=_backContentView;
@property(nonatomic) __weak NSLayoutConstraint *sepLineLabelContraints; // @synthesize sepLineLabelContraints=_sepLineLabelContraints;
@property(nonatomic) __weak UILabel *seatNumberLabel; // @synthesize seatNumberLabel=_seatNumberLabel;
@property(nonatomic) __weak UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(nonatomic) __weak UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *ticketWindowLabel; // @synthesize ticketWindowLabel=_ticketWindowLabel;
@property(nonatomic) __weak UILabel *departDateAndTrainNumLabel; // @synthesize departDateAndTrainNumLabel=_departDateAndTrainNumLabel;
@property(nonatomic) __weak UILabel *departAndArriveCityLabel; // @synthesize departAndArriveCityLabel=_departAndArriveCityLabel;
@property(nonatomic) __weak UILabel *payStateLabel; // @synthesize payStateLabel=_payStateLabel;
- (void).cxx_destruct;
- (double)heightWithConfigOrderModel:(id)arg1;
- (void)configCellWithOrderModel:(id)arg1;
- (id)allSeatNumber:(id)arg1;
- (id)labPrice;
- (void)cancelAction:(id)arg1;
- (void)awakeFromNib;

@end

