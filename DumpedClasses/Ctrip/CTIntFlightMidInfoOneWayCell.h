//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTDashLineView, CTFlightImageView, CTFlightRadioView, CTIntFlightMidInfoOneWayCellModel, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTIntFlightMidInfoOneWayCell : UITableViewCell
{
    CTIntFlightMidInfoOneWayCellModel *_cellModel;
    id <CTIntFlightMidInfoOneWayCellDelegate> _delegate;
    NSLayoutConstraint *_bgViewToBottom;
    CTFlightRadioView *_bgView;
    NSLayoutConstraint *_departViewHeight;
    UILabel *_departDate;
    UILabel *_departTime;
    UILabel *_departAirport;
    CTFlightImageView *_flightIcon;
    UILabel *_airInfomation;
    UIView *_actualFlightView;
    NSLayoutConstraint *_actualFlightViewHeight;
    UIImageView *_actualArrowImage;
    UILabel *_actualFlightTitleLabel;
    CTFlightImageView *_actualFlightIcon;
    UILabel *_actualFlightInformationLabel;
    UILabel *_additionalInformationLabel;
    UIImageView *_linkIcon;
    UIView *_stopView;
    NSLayoutConstraint *_stopViewHeight;
    UILabel *_stopCity;
    UILabel *_stopInfo;
    UILabel *_stopLabel;
    NSLayoutConstraint *_arriveViewHeight;
    UILabel *_arriveDate;
    UILabel *_arriveTime;
    UILabel *_arriveAirport;
    NSLayoutConstraint *_timeLineToLeft;
    CTDashLineView *_dashLine;
    UIView *_upPartView;
    NSLayoutConstraint *_upPartViewToLeft;
    NSLayoutConstraint *_bottomPartViewToLeft;
    NSLayoutConstraint *_flightIconToDepartAirportLabel;
}

+ (double)heightOfMidInfoOneWayCell:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *flightIconToDepartAirportLabel; // @synthesize flightIconToDepartAirportLabel=_flightIconToDepartAirportLabel;
@property(nonatomic) __weak NSLayoutConstraint *bottomPartViewToLeft; // @synthesize bottomPartViewToLeft=_bottomPartViewToLeft;
@property(nonatomic) __weak NSLayoutConstraint *upPartViewToLeft; // @synthesize upPartViewToLeft=_upPartViewToLeft;
@property(nonatomic) __weak UIView *upPartView; // @synthesize upPartView=_upPartView;
@property(retain, nonatomic) CTDashLineView *dashLine; // @synthesize dashLine=_dashLine;
@property(nonatomic) __weak NSLayoutConstraint *timeLineToLeft; // @synthesize timeLineToLeft=_timeLineToLeft;
@property(nonatomic) __weak UILabel *arriveAirport; // @synthesize arriveAirport=_arriveAirport;
@property(nonatomic) __weak UILabel *arriveTime; // @synthesize arriveTime=_arriveTime;
@property(nonatomic) __weak UILabel *arriveDate; // @synthesize arriveDate=_arriveDate;
@property(nonatomic) __weak NSLayoutConstraint *arriveViewHeight; // @synthesize arriveViewHeight=_arriveViewHeight;
@property(nonatomic) __weak UILabel *stopLabel; // @synthesize stopLabel=_stopLabel;
@property(nonatomic) __weak UILabel *stopInfo; // @synthesize stopInfo=_stopInfo;
@property(nonatomic) __weak UILabel *stopCity; // @synthesize stopCity=_stopCity;
@property(nonatomic) __weak NSLayoutConstraint *stopViewHeight; // @synthesize stopViewHeight=_stopViewHeight;
@property(nonatomic) __weak UIView *stopView; // @synthesize stopView=_stopView;
@property(retain, nonatomic) UIImageView *linkIcon; // @synthesize linkIcon=_linkIcon;
@property(retain, nonatomic) UILabel *additionalInformationLabel; // @synthesize additionalInformationLabel=_additionalInformationLabel;
@property(nonatomic) __weak UILabel *actualFlightInformationLabel; // @synthesize actualFlightInformationLabel=_actualFlightInformationLabel;
@property(nonatomic) __weak CTFlightImageView *actualFlightIcon; // @synthesize actualFlightIcon=_actualFlightIcon;
@property(nonatomic) __weak UILabel *actualFlightTitleLabel; // @synthesize actualFlightTitleLabel=_actualFlightTitleLabel;
@property(nonatomic) __weak UIImageView *actualArrowImage; // @synthesize actualArrowImage=_actualArrowImage;
@property(nonatomic) __weak NSLayoutConstraint *actualFlightViewHeight; // @synthesize actualFlightViewHeight=_actualFlightViewHeight;
@property(nonatomic) __weak UIView *actualFlightView; // @synthesize actualFlightView=_actualFlightView;
@property(nonatomic) __weak UILabel *airInfomation; // @synthesize airInfomation=_airInfomation;
@property(nonatomic) __weak CTFlightImageView *flightIcon; // @synthesize flightIcon=_flightIcon;
@property(nonatomic) __weak UILabel *departAirport; // @synthesize departAirport=_departAirport;
@property(nonatomic) __weak UILabel *departTime; // @synthesize departTime=_departTime;
@property(nonatomic) __weak UILabel *departDate; // @synthesize departDate=_departDate;
@property(nonatomic) __weak NSLayoutConstraint *departViewHeight; // @synthesize departViewHeight=_departViewHeight;
@property(nonatomic) __weak CTFlightRadioView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak NSLayoutConstraint *bgViewToBottom; // @synthesize bgViewToBottom=_bgViewToBottom;
@property(retain, nonatomic) id <CTIntFlightMidInfoOneWayCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTIntFlightMidInfoOneWayCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)clickedInfoButton:(id)arg1;
- (void)setupMidInfoOneWayCell:(id)arg1 delegate:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupLabels;
- (void)awakeFromNib;

@end

