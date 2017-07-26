//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTTrainLabel, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface CTTrainQiangPiaoSmartRecommandView : UIView
{
    id <CTTrainQiangPiaoSmartRecommandViewDelegate> _delegate;
    UIView *_viewContent;
    UILabel *_labelSuccessRateTitle;
    UILabel *_labelSuccessRate;
    UILabel *_labelCheciInfo;
    UIView *_viewDetail;
    UIButton *_buttonCancel;
    UIButton *_buttonConfirm;
    UIImageView *_imageViewLine1;
    UIImageView *_imageViewLine2;
    CTTrainLabel *_labelDetail;
    NSLayoutConstraint *_viewContentHeight;
    NSLayoutConstraint *_viewDetailHeight;
}

@property(retain, nonatomic) NSLayoutConstraint *viewDetailHeight; // @synthesize viewDetailHeight=_viewDetailHeight;
@property(retain, nonatomic) NSLayoutConstraint *viewContentHeight; // @synthesize viewContentHeight=_viewContentHeight;
@property(retain, nonatomic) CTTrainLabel *labelDetail; // @synthesize labelDetail=_labelDetail;
@property(retain, nonatomic) UIImageView *imageViewLine2; // @synthesize imageViewLine2=_imageViewLine2;
@property(retain, nonatomic) UIImageView *imageViewLine1; // @synthesize imageViewLine1=_imageViewLine1;
@property(retain, nonatomic) UIButton *buttonConfirm; // @synthesize buttonConfirm=_buttonConfirm;
@property(retain, nonatomic) UIButton *buttonCancel; // @synthesize buttonCancel=_buttonCancel;
@property(retain, nonatomic) UIView *viewDetail; // @synthesize viewDetail=_viewDetail;
@property(retain, nonatomic) UILabel *labelCheciInfo; // @synthesize labelCheciInfo=_labelCheciInfo;
@property(retain, nonatomic) UILabel *labelSuccessRate; // @synthesize labelSuccessRate=_labelSuccessRate;
@property(retain, nonatomic) UILabel *labelSuccessRateTitle; // @synthesize labelSuccessRateTitle=_labelSuccessRateTitle;
@property(retain, nonatomic) UIView *viewContent; // @synthesize viewContent=_viewContent;
@property(nonatomic) __weak id <CTTrainQiangPiaoSmartRecommandViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCancelButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (void)setupContentWithSuccessRate:(id)arg1 trainInfo:(id)arg2 detail:(id)arg3;
- (void)awakeFromNib;

@end

