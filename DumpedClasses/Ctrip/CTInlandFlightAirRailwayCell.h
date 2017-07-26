//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTInlandFlightAirRailwayCell : UITableViewCell
{
    UIImageView *_imageViewBG;
    UIImageView *_imageViewIcon;
    UILabel *_labelDepartCtiy;
    UIImageView *_imageViewArrow;
    UILabel *_labelArriveCity;
    UILabel *_labelTicketPrice;
    UILabel *_labelSymbol;
    NSLayoutConstraint *_topSpaceCons;
    NSLayoutConstraint *_midSpaceCons;
    NSLayoutConstraint *_imageViewWidthCons;
    NSLayoutConstraint *_cnsViewTop;
}

+ (double)setupAirTrainListCell:(id)arg1 withModel:(id)arg2 additionInfo:(id)arg3;
@property(nonatomic) __weak NSLayoutConstraint *cnsViewTop; // @synthesize cnsViewTop=_cnsViewTop;
@property(retain, nonatomic) NSLayoutConstraint *imageViewWidthCons; // @synthesize imageViewWidthCons=_imageViewWidthCons;
@property(retain, nonatomic) NSLayoutConstraint *midSpaceCons; // @synthesize midSpaceCons=_midSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *topSpaceCons; // @synthesize topSpaceCons=_topSpaceCons;
@property(retain, nonatomic) UILabel *labelSymbol; // @synthesize labelSymbol=_labelSymbol;
@property(nonatomic) __weak UILabel *labelTicketPrice; // @synthesize labelTicketPrice=_labelTicketPrice;
@property(nonatomic) __weak UILabel *labelArriveCity; // @synthesize labelArriveCity=_labelArriveCity;
@property(nonatomic) __weak UIImageView *imageViewArrow; // @synthesize imageViewArrow=_imageViewArrow;
@property(nonatomic) __weak UILabel *labelDepartCtiy; // @synthesize labelDepartCtiy=_labelDepartCtiy;
@property(nonatomic) __weak UIImageView *imageViewIcon; // @synthesize imageViewIcon=_imageViewIcon;
@property(nonatomic) __weak UIImageView *imageViewBG; // @synthesize imageViewBG=_imageViewBG;
- (void).cxx_destruct;
- (void)setupCellSubviewWithCellViewModel:(id)arg1;
- (void)initView;
- (void)awakeFromNib;

@end

