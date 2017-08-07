//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ONEHistoryDetialModel, ONEOrderMultiBizTypeView, UIColor, UIImageView, UILabel, UIView;

@interface ONEOrderTabelViewCell : UITableViewCell
{
    ONEHistoryDetialModel *_model;
    UIColor *_statusLabelColor;
    UIView *_customBgView;
    UIImageView *_dateImageView;
    UILabel *_dateLabel;
    UIImageView *_fromAddressImageView;
    UILabel *_fromAddressLabel;
    UIImageView *_toAddressImageView;
    UILabel *_toAddressLabel;
    UILabel *_statusLabel;
    UIImageView *_arrowImageView;
    UILabel *_bizNameLabel;
    ONEOrderMultiBizTypeView *_multiBizTypeView;
    double _realHeight;
    UIView *_bottomView;
    UIView *_selectView;
}

@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) double realHeight; // @synthesize realHeight=_realHeight;
@property(retain, nonatomic) ONEOrderMultiBizTypeView *multiBizTypeView; // @synthesize multiBizTypeView=_multiBizTypeView;
@property(retain, nonatomic) UILabel *bizNameLabel; // @synthesize bizNameLabel=_bizNameLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *toAddressLabel; // @synthesize toAddressLabel=_toAddressLabel;
@property(retain, nonatomic) UIImageView *toAddressImageView; // @synthesize toAddressImageView=_toAddressImageView;
@property(retain, nonatomic) UILabel *fromAddressLabel; // @synthesize fromAddressLabel=_fromAddressLabel;
@property(retain, nonatomic) UIImageView *fromAddressImageView; // @synthesize fromAddressImageView=_fromAddressImageView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIImageView *dateImageView; // @synthesize dateImageView=_dateImageView;
@property(retain, nonatomic) UIView *customBgView; // @synthesize customBgView=_customBgView;
@property(retain, nonatomic) UIColor *statusLabelColor; // @synthesize statusLabelColor=_statusLabelColor;
@property(retain, nonatomic) ONEHistoryDetialModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)configFrame;
- (void)configSubViews;
- (void)configBg;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
