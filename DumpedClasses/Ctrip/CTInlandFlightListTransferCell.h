//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightImageView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTInlandFlightListTransferCell : UITableViewCell
{
    UIView *_viewContainer;
    UIImageView *_imageViewBG;
    UIImageView *_transferHuixuanImageView;
    UILabel *_labelDepTime;
    UILabel *_labelArrTime;
    UILabel *_labelDepAirportTerminal;
    UILabel *_labelArrAirportTerminal;
    UILabel *_labelInterval;
    UIImageView *_imageViewArrow;
    UILabel *_labelStop;
    UILabel *_labelStopCityName;
    UILabel *_labelPrice;
    UILabel *_labelSymbol;
    UILabel *_labelTicketNumber;
    UILabel *_labelRecommendSubClass;
    UILabel *_labelDelayHint;
    UILabel *_labelCashBack;
    UILabel *_labelAmount;
    UIView *_viewWirelessExclusive;
    CTFlightImageView *_airCompanyIcon;
    CTFlightImageView *_aircompanyIcon2;
    UILabel *_labelOtherInfo;
    UILabel *_labelOtherInfo2;
    NSLayoutConstraint *_containerViewLeftCons;
    NSLayoutConstraint *_tConstForLabelDepTime;
    NSLayoutConstraint *_wConstForLabelDepTime;
    NSLayoutConstraint *_tConstForlabelInterval;
    NSLayoutConstraint *_wConstForlabelArrTime;
    NSLayoutConstraint *_tConstForLabelDepAirport;
    NSLayoutConstraint *_wConstForTicketNumber;
    NSLayoutConstraint *_hConstForTicketNumber;
    NSLayoutConstraint *_tConstForImageArrow;
    NSLayoutConstraint *_viewStopWidthCons;
    NSLayoutConstraint *_viewActiveWidthCons;
    NSLayoutConstraint *_labelAmountSapcePriceCons;
    NSLayoutConstraint *_arrowImageViewLeftCons;
    NSLayoutConstraint *_arrowImageViewRightCons;
    UILabel *_roundTripLabel;
    UIView *_leftTagView;
    NSLayoutConstraint *_leftTagViewWidthCons;
    NSLayoutConstraint *_leftTagViewHeightCons;
    UIView *_bottomTagView;
    NSLayoutConstraint *_bottomTagViewWidthCons;
    NSLayoutConstraint *_bottomTagViewHeightCons;
    NSLayoutConstraint *_bottomTagViewRightCons;
    NSLayoutConstraint *_labelRecommendSubClassBottomCons;
    NSLayoutConstraint *_cnsViewTop;
    UIView *_rightTagView;
    NSLayoutConstraint *_rightTagViewWidthCons;
    NSLayoutConstraint *_rightTagViewHeightCons;
    NSLayoutConstraint *_cnsTag3Leading;
}

+ (double)setupTransferListCell:(id)arg1 withFlightListModel:(id)arg2 additionInfo:(id)arg3;
@property(nonatomic) __weak NSLayoutConstraint *cnsTag3Leading; // @synthesize cnsTag3Leading=_cnsTag3Leading;
@property(nonatomic) __weak NSLayoutConstraint *rightTagViewHeightCons; // @synthesize rightTagViewHeightCons=_rightTagViewHeightCons;
@property(nonatomic) __weak NSLayoutConstraint *rightTagViewWidthCons; // @synthesize rightTagViewWidthCons=_rightTagViewWidthCons;
@property(nonatomic) __weak UIView *rightTagView; // @synthesize rightTagView=_rightTagView;
@property(retain, nonatomic) NSLayoutConstraint *cnsViewTop; // @synthesize cnsViewTop=_cnsViewTop;
@property(retain, nonatomic) NSLayoutConstraint *labelRecommendSubClassBottomCons; // @synthesize labelRecommendSubClassBottomCons=_labelRecommendSubClassBottomCons;
@property(retain, nonatomic) NSLayoutConstraint *bottomTagViewRightCons; // @synthesize bottomTagViewRightCons=_bottomTagViewRightCons;
@property(retain, nonatomic) NSLayoutConstraint *bottomTagViewHeightCons; // @synthesize bottomTagViewHeightCons=_bottomTagViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *bottomTagViewWidthCons; // @synthesize bottomTagViewWidthCons=_bottomTagViewWidthCons;
@property(retain, nonatomic) UIView *bottomTagView; // @synthesize bottomTagView=_bottomTagView;
@property(retain, nonatomic) NSLayoutConstraint *leftTagViewHeightCons; // @synthesize leftTagViewHeightCons=_leftTagViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *leftTagViewWidthCons; // @synthesize leftTagViewWidthCons=_leftTagViewWidthCons;
@property(retain, nonatomic) UIView *leftTagView; // @synthesize leftTagView=_leftTagView;
@property(retain, nonatomic) UILabel *roundTripLabel; // @synthesize roundTripLabel=_roundTripLabel;
@property(nonatomic) __weak NSLayoutConstraint *arrowImageViewRightCons; // @synthesize arrowImageViewRightCons=_arrowImageViewRightCons;
@property(nonatomic) __weak NSLayoutConstraint *arrowImageViewLeftCons; // @synthesize arrowImageViewLeftCons=_arrowImageViewLeftCons;
@property(retain, nonatomic) NSLayoutConstraint *labelAmountSapcePriceCons; // @synthesize labelAmountSapcePriceCons=_labelAmountSapcePriceCons;
@property(retain, nonatomic) NSLayoutConstraint *viewActiveWidthCons; // @synthesize viewActiveWidthCons=_viewActiveWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *viewStopWidthCons; // @synthesize viewStopWidthCons=_viewStopWidthCons;
@property(nonatomic) __weak NSLayoutConstraint *tConstForImageArrow; // @synthesize tConstForImageArrow=_tConstForImageArrow;
@property(nonatomic) __weak NSLayoutConstraint *hConstForTicketNumber; // @synthesize hConstForTicketNumber=_hConstForTicketNumber;
@property(nonatomic) __weak NSLayoutConstraint *wConstForTicketNumber; // @synthesize wConstForTicketNumber=_wConstForTicketNumber;
@property(nonatomic) __weak NSLayoutConstraint *tConstForLabelDepAirport; // @synthesize tConstForLabelDepAirport=_tConstForLabelDepAirport;
@property(nonatomic) __weak NSLayoutConstraint *wConstForlabelArrTime; // @synthesize wConstForlabelArrTime=_wConstForlabelArrTime;
@property(nonatomic) __weak NSLayoutConstraint *tConstForlabelInterval; // @synthesize tConstForlabelInterval=_tConstForlabelInterval;
@property(nonatomic) __weak NSLayoutConstraint *wConstForLabelDepTime; // @synthesize wConstForLabelDepTime=_wConstForLabelDepTime;
@property(nonatomic) __weak NSLayoutConstraint *tConstForLabelDepTime; // @synthesize tConstForLabelDepTime=_tConstForLabelDepTime;
@property(nonatomic) __weak NSLayoutConstraint *containerViewLeftCons; // @synthesize containerViewLeftCons=_containerViewLeftCons;
@property(nonatomic) __weak UILabel *labelOtherInfo2; // @synthesize labelOtherInfo2=_labelOtherInfo2;
@property(nonatomic) __weak UILabel *labelOtherInfo; // @synthesize labelOtherInfo=_labelOtherInfo;
@property(nonatomic) __weak CTFlightImageView *aircompanyIcon2; // @synthesize aircompanyIcon2=_aircompanyIcon2;
@property(nonatomic) __weak CTFlightImageView *airCompanyIcon; // @synthesize airCompanyIcon=_airCompanyIcon;
@property(retain, nonatomic) UIView *viewWirelessExclusive; // @synthesize viewWirelessExclusive=_viewWirelessExclusive;
@property(retain, nonatomic) UILabel *labelAmount; // @synthesize labelAmount=_labelAmount;
@property(retain, nonatomic) UILabel *labelCashBack; // @synthesize labelCashBack=_labelCashBack;
@property(nonatomic) __weak UILabel *labelDelayHint; // @synthesize labelDelayHint=_labelDelayHint;
@property(nonatomic) __weak UILabel *labelRecommendSubClass; // @synthesize labelRecommendSubClass=_labelRecommendSubClass;
@property(nonatomic) __weak UILabel *labelTicketNumber; // @synthesize labelTicketNumber=_labelTicketNumber;
@property(nonatomic) __weak UILabel *labelSymbol; // @synthesize labelSymbol=_labelSymbol;
@property(nonatomic) __weak UILabel *labelPrice; // @synthesize labelPrice=_labelPrice;
@property(nonatomic) __weak UILabel *labelStopCityName; // @synthesize labelStopCityName=_labelStopCityName;
@property(nonatomic) __weak UILabel *labelStop; // @synthesize labelStop=_labelStop;
@property(nonatomic) __weak UIImageView *imageViewArrow; // @synthesize imageViewArrow=_imageViewArrow;
@property(nonatomic) __weak UILabel *labelInterval; // @synthesize labelInterval=_labelInterval;
@property(nonatomic) __weak UILabel *labelArrAirportTerminal; // @synthesize labelArrAirportTerminal=_labelArrAirportTerminal;
@property(nonatomic) __weak UILabel *labelDepAirportTerminal; // @synthesize labelDepAirportTerminal=_labelDepAirportTerminal;
@property(nonatomic) __weak UILabel *labelArrTime; // @synthesize labelArrTime=_labelArrTime;
@property(nonatomic) __weak UILabel *labelDepTime; // @synthesize labelDepTime=_labelDepTime;
@property(nonatomic) __weak UIImageView *transferHuixuanImageView; // @synthesize transferHuixuanImageView=_transferHuixuanImageView;
@property(nonatomic) __weak UIImageView *imageViewBG; // @synthesize imageViewBG=_imageViewBG;
@property(nonatomic) __weak UIView *viewContainer; // @synthesize viewContainer=_viewContainer;
- (void).cxx_destruct;
- (void)setupListCellWithModel:(id)arg1;
- (void)setSubViewBGColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initView;
- (void)awakeFromNib;

@end

