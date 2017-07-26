//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightRadioView, CTFlightTransferOrderDetailView, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CTFlightTransferOrderDetailCell : UITableViewCell
{
    _Bool _isShowInFloatView;
    _Bool _hasTips;
    _Bool _hasFootView;
    CTFlightTransferOrderDetailView *_firstDetailView;
    CTFlightTransferOrderDetailView *_secondDetailView;
    UILabel *_segmentInfoLabel;
    UIView *_viewStopInfo;
    UILabel *_labelStopCity;
    UILabel *_labelStopTime;
    UIImageView *_flightTransferIcon;
    CTFlightRadioView *_flightBgView;
    NSLayoutConstraint *_segmentInfoViewTopCons;
    NSLayoutConstraint *_transferFlagLeftSpaceCons;
    NSLayoutConstraint *_firstDetailViewHeightCons;
    NSLayoutConstraint *_secondDetailViewHeightCons;
    NSString *_noticeURL;
    UIButton *_transNoticeButton;
}

+ (double)setupOrderDetailCell:(id)arg1 withModel:(id)arg2;
@property(nonatomic) __weak UIButton *transNoticeButton; // @synthesize transNoticeButton=_transNoticeButton;
@property(copy, nonatomic) NSString *noticeURL; // @synthesize noticeURL=_noticeURL;
@property(retain, nonatomic) NSLayoutConstraint *secondDetailViewHeightCons; // @synthesize secondDetailViewHeightCons=_secondDetailViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *firstDetailViewHeightCons; // @synthesize firstDetailViewHeightCons=_firstDetailViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *transferFlagLeftSpaceCons; // @synthesize transferFlagLeftSpaceCons=_transferFlagLeftSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *segmentInfoViewTopCons; // @synthesize segmentInfoViewTopCons=_segmentInfoViewTopCons;
@property(retain, nonatomic) CTFlightRadioView *flightBgView; // @synthesize flightBgView=_flightBgView;
@property(retain, nonatomic) UIImageView *flightTransferIcon; // @synthesize flightTransferIcon=_flightTransferIcon;
@property(retain, nonatomic) UILabel *labelStopTime; // @synthesize labelStopTime=_labelStopTime;
@property(retain, nonatomic) UILabel *labelStopCity; // @synthesize labelStopCity=_labelStopCity;
@property(retain, nonatomic) UIView *viewStopInfo; // @synthesize viewStopInfo=_viewStopInfo;
@property(retain, nonatomic) UILabel *segmentInfoLabel; // @synthesize segmentInfoLabel=_segmentInfoLabel;
@property(retain, nonatomic) CTFlightTransferOrderDetailView *secondDetailView; // @synthesize secondDetailView=_secondDetailView;
@property(retain, nonatomic) CTFlightTransferOrderDetailView *firstDetailView; // @synthesize firstDetailView=_firstDetailView;
@property(nonatomic) _Bool hasFootView; // @synthesize hasFootView=_hasFootView;
@property(nonatomic) _Bool hasTips; // @synthesize hasTips=_hasTips;
@property(nonatomic) _Bool isShowInFloatView; // @synthesize isShowInFloatView=_isShowInFloatView;
- (void).cxx_destruct;
- (void)onTapTransferInfo:(id)arg1;
- (void)setUpSegmentViewWith:(id)arg1 withModel:(id)arg2;
- (id)getTransferinfoStringWith:(id)arg1 secondSegment:(id)arg2;
- (id)getTransferCityName:(id)arg1;
- (void)initView;
- (void)awakeFromNib;

@end

