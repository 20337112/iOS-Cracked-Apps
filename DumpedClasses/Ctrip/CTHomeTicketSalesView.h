//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTHotSaleTicket, CTHotTicketArea, CTImageView, NSArray, NSLayoutConstraint, NSMutableArray, UIButton, UIImageView, UILabel;

@interface CTHomeTicketSalesView : UIView
{
    NSArray *_lineWidthConstraints;
    UILabel *_ticketViewTitleLabel;
    CTImageView *_productImageView;
    UIImageView *_symbolImageView;
    UILabel *_productNameLabel;
    UILabel *_locationLabel;
    UILabel *_XCPriceLabel;
    UILabel *_marketPriceLabel;
    UILabel *_priceSymbolLabel;
    UILabel *_priceStartSymbolLabel;
    UILabel *_moreLabel;
    UIButton *_labelButton;
    CTImageView *_disneyTicketImageView;
    UILabel *_disneyTicketMainTitleLabel;
    UILabel *_disneyTicketSubTitleLabel;
    NSLayoutConstraint *_disneyTicketMainTitleLeadingConstraint;
    CTImageView *_privilegeTicketImageView;
    UILabel *_privilegeTicketMainTitleLabel;
    UILabel *_privilegeTicketSubTitleLabel;
    NSLayoutConstraint *_privilegeTicketMainTitleLeadingConstraint;
    NSMutableArray *_areasDataModel;
    CTHotSaleTicket *_productdataModel;
    CTHotTicketArea *_disneyDataModel;
    CTHotTicketArea *_privilegeDataModel;
    CTHotTicketArea *_titleDataModel;
}

+ (double)TicketSalesViewHeight;
@property(retain, nonatomic) CTHotTicketArea *titleDataModel; // @synthesize titleDataModel=_titleDataModel;
@property(retain, nonatomic) CTHotTicketArea *privilegeDataModel; // @synthesize privilegeDataModel=_privilegeDataModel;
@property(retain, nonatomic) CTHotTicketArea *disneyDataModel; // @synthesize disneyDataModel=_disneyDataModel;
@property(retain, nonatomic) CTHotSaleTicket *productdataModel; // @synthesize productdataModel=_productdataModel;
@property(retain, nonatomic) NSMutableArray *areasDataModel; // @synthesize areasDataModel=_areasDataModel;
@property(retain, nonatomic) NSLayoutConstraint *privilegeTicketMainTitleLeadingConstraint; // @synthesize privilegeTicketMainTitleLeadingConstraint=_privilegeTicketMainTitleLeadingConstraint;
@property(retain, nonatomic) UILabel *privilegeTicketSubTitleLabel; // @synthesize privilegeTicketSubTitleLabel=_privilegeTicketSubTitleLabel;
@property(retain, nonatomic) UILabel *privilegeTicketMainTitleLabel; // @synthesize privilegeTicketMainTitleLabel=_privilegeTicketMainTitleLabel;
@property(retain, nonatomic) CTImageView *privilegeTicketImageView; // @synthesize privilegeTicketImageView=_privilegeTicketImageView;
@property(retain, nonatomic) NSLayoutConstraint *disneyTicketMainTitleLeadingConstraint; // @synthesize disneyTicketMainTitleLeadingConstraint=_disneyTicketMainTitleLeadingConstraint;
@property(retain, nonatomic) UILabel *disneyTicketSubTitleLabel; // @synthesize disneyTicketSubTitleLabel=_disneyTicketSubTitleLabel;
@property(retain, nonatomic) UILabel *disneyTicketMainTitleLabel; // @synthesize disneyTicketMainTitleLabel=_disneyTicketMainTitleLabel;
@property(retain, nonatomic) CTImageView *disneyTicketImageView; // @synthesize disneyTicketImageView=_disneyTicketImageView;
@property(retain, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *priceStartSymbolLabel; // @synthesize priceStartSymbolLabel=_priceStartSymbolLabel;
@property(retain, nonatomic) UILabel *priceSymbolLabel; // @synthesize priceSymbolLabel=_priceSymbolLabel;
@property(retain, nonatomic) UILabel *marketPriceLabel; // @synthesize marketPriceLabel=_marketPriceLabel;
@property(retain, nonatomic) UILabel *XCPriceLabel; // @synthesize XCPriceLabel=_XCPriceLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *productNameLabel; // @synthesize productNameLabel=_productNameLabel;
@property(retain, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
@property(retain, nonatomic) CTImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UILabel *ticketViewTitleLabel; // @synthesize ticketViewTitleLabel=_ticketViewTitleLabel;
@property(retain, nonatomic) NSArray *lineWidthConstraints; // @synthesize lineWidthConstraints=_lineWidthConstraints;
- (void).cxx_destruct;
- (void)goToNextPage:(id)arg1;
- (void)pressTQRButton:(id)arg1;
- (void)pressDisneyButton:(id)arg1;
- (void)pressTicketButton:(id)arg1;
- (void)pressMoreButton:(id)arg1;
- (void)updateProductUI;
- (void)updateBlockUI;
- (void)updateDataForTicketSalesView:(id)arg1 productDataModel:(id)arg2;
- (void)changeFontSizeForIPhone6PlusSize:(id)arg1;
- (void)changeFontSizeForIPhone6Size:(id)arg1;
- (void)updateTextToImageConstraintsForIPhone5;
- (void)updateFontSize;
- (void)UIAdjustment;
- (id)cutDownWorkCount:(id)arg1 maxWordCount:(int)arg2;
- (void)updateBlcokData:(id)arg1;
- (void)initDefaultBlockDataModel;
- (void)cleanData;
- (id)init:(id)arg1 productDataModel:(id)arg2;
- (void)awakeFromNib;

@end

