//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTTrainHoldSeatProcessView : UIView
{
    id <CTTrainHoldSeatProcessViewDelegate> _delegate;
    UIView *_viewContent;
    UILabel *_labelDepartTime;
    UILabel *_labelArriveTime;
    UILabel *_labelDays;
    UILabel *_labelDepartStation;
    UILabel *_labelArriveStation;
    UILabel *_labelDepartDate;
    UILabel *_labelDepartWeek;
    UILabel *_labelTrainNumber;
    UILabel *_labelPassengerTitle;
    UILabel *_labelPassengers;
    NSLayoutConstraint *_labelDepartWeekWidth;
    UIImageView *_imageArrow;
    UIView *_viewProcess;
    NSLayoutConstraint *_viewProcessWidth;
    UILabel *_labelProcessDetail;
    UILabel *_labelProcessNumber;
    long long _currentProcessNumber;
}

@property(nonatomic) long long currentProcessNumber; // @synthesize currentProcessNumber=_currentProcessNumber;
@property(retain, nonatomic) UILabel *labelProcessNumber; // @synthesize labelProcessNumber=_labelProcessNumber;
@property(retain, nonatomic) UILabel *labelProcessDetail; // @synthesize labelProcessDetail=_labelProcessDetail;
@property(retain, nonatomic) NSLayoutConstraint *viewProcessWidth; // @synthesize viewProcessWidth=_viewProcessWidth;
@property(retain, nonatomic) UIView *viewProcess; // @synthesize viewProcess=_viewProcess;
@property(retain, nonatomic) UIImageView *imageArrow; // @synthesize imageArrow=_imageArrow;
@property(retain, nonatomic) NSLayoutConstraint *labelDepartWeekWidth; // @synthesize labelDepartWeekWidth=_labelDepartWeekWidth;
@property(retain, nonatomic) UILabel *labelPassengers; // @synthesize labelPassengers=_labelPassengers;
@property(retain, nonatomic) UILabel *labelPassengerTitle; // @synthesize labelPassengerTitle=_labelPassengerTitle;
@property(retain, nonatomic) UILabel *labelTrainNumber; // @synthesize labelTrainNumber=_labelTrainNumber;
@property(retain, nonatomic) UILabel *labelDepartWeek; // @synthesize labelDepartWeek=_labelDepartWeek;
@property(retain, nonatomic) UILabel *labelDepartDate; // @synthesize labelDepartDate=_labelDepartDate;
@property(retain, nonatomic) UILabel *labelArriveStation; // @synthesize labelArriveStation=_labelArriveStation;
@property(retain, nonatomic) UILabel *labelDepartStation; // @synthesize labelDepartStation=_labelDepartStation;
@property(retain, nonatomic) UILabel *labelDays; // @synthesize labelDays=_labelDays;
@property(retain, nonatomic) UILabel *labelArriveTime; // @synthesize labelArriveTime=_labelArriveTime;
@property(retain, nonatomic) UILabel *labelDepartTime; // @synthesize labelDepartTime=_labelDepartTime;
@property(retain, nonatomic) UIView *viewContent; // @synthesize viewContent=_viewContent;
@property(nonatomic) __weak id <CTTrainHoldSeatProcessViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationWithProcessNumber;
- (void)resetProcess;
- (void)showProcessWithTitle:(id)arg1 number:(long long)arg2;
- (void)setupContentWithDepartTime:(id)arg1 departDate:(id)arg2 departStation:(id)arg3 trainNumber:(id)arg4 arriveTime:(id)arg5 arriveStation:(id)arg6 days:(long long)arg7 passengers:(id)arg8;
- (void)onCancelButton:(id)arg1;
- (void)awakeFromNib;

@end

