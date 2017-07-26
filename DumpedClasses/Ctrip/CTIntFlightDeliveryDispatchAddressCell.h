//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTIntFlightDeliveryDispatchAddressCellModel, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface CTIntFlightDeliveryDispatchAddressCell : UITableViewCell
{
    UIImageView *_flightArrow;
    CTIntFlightDeliveryDispatchAddressCellModel *_cellModel;
    id <CTIntFlightDeliveryDispatchAddressCellDelegate> _delegate;
    NSLayoutConstraint *_separateLineHeight;
    UILabel *_titleLabel;
    UILabel *_addressLabel;
    UILabel *_placeholderLabel;
    UILabel *_hintLabel;
    UIButton *_selectionButton;
}

+ (double)heightOfDeliveryDispatchAddressCell:(id)arg1;
@property(nonatomic) __weak UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(nonatomic) __weak UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic) __weak UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *separateLineHeight; // @synthesize separateLineHeight=_separateLineHeight;
@property(nonatomic) __weak id <CTIntFlightDeliveryDispatchAddressCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTIntFlightDeliveryDispatchAddressCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIImageView *flightArrow; // @synthesize flightArrow=_flightArrow;
- (void).cxx_destruct;
- (void)clickedAddressButton:(id)arg1;
- (void)setupDeliveryDispatchAddressCell:(id)arg1 delegate:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

