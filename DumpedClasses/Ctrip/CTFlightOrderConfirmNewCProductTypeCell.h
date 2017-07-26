//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTFlightImageView, CTFlightRadioView, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CTFlightOrderConfirmNewCProductTypeCell : CTCustomeGroupTableViewCell
{
    CTFlightRadioView *_backView;
    CTFlightImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView *_priceView;
    UILabel *_priceSymbol;
    UILabel *_priceLabel;
    UILabel *_priceMakeLabel;
    UIButton *_saleBtn;
    UILabel *_airPortLabel;
    UILabel *_directPricePrevLabel;
    UILabel *_arrvieAddrLabel;
    UILabel *_lbUselessPrice;
    UIButton *_btnTips;
    UIImageView *_imageTips;
    NSString *_tipURL;
    UIImageView *_arrowImageView;
    UIView *_bottomLineView;
    NSLayoutConstraint *_bottonViewHeightCons;
    NSLayoutConstraint *_priceViewHeightCons;
    CDUnknownBlockType _callback;
}

+ (double)getFlightViewHegihtWithModel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSLayoutConstraint *priceViewHeightCons; // @synthesize priceViewHeightCons=_priceViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *bottonViewHeightCons; // @synthesize bottonViewHeightCons=_bottonViewHeightCons;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(copy, nonatomic) NSString *tipURL; // @synthesize tipURL=_tipURL;
@property(nonatomic) __weak UIImageView *imageTips; // @synthesize imageTips=_imageTips;
@property(nonatomic) __weak UIButton *btnTips; // @synthesize btnTips=_btnTips;
@property(nonatomic) __weak UILabel *lbUselessPrice; // @synthesize lbUselessPrice=_lbUselessPrice;
@property(retain, nonatomic) UILabel *arrvieAddrLabel; // @synthesize arrvieAddrLabel=_arrvieAddrLabel;
@property(retain, nonatomic) UILabel *directPricePrevLabel; // @synthesize directPricePrevLabel=_directPricePrevLabel;
@property(retain, nonatomic) UILabel *airPortLabel; // @synthesize airPortLabel=_airPortLabel;
@property(retain, nonatomic) UIButton *saleBtn; // @synthesize saleBtn=_saleBtn;
@property(retain, nonatomic) UILabel *priceMakeLabel; // @synthesize priceMakeLabel=_priceMakeLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *priceSymbol; // @synthesize priceSymbol=_priceSymbol;
@property(retain, nonatomic) UIView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CTFlightImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CTFlightRadioView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)didTapTips:(id)arg1;
- (void)createViewWithModel:(id)arg1 circleType:(int)arg2 airPortStr:(id)arg3 desctionAddr:(id)arg4 isXProductSoldOut:(_Bool)arg5 couponLabel:(id)arg6;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end

