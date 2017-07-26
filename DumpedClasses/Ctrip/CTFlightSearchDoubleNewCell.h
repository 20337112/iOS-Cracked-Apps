//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CTFlightButtonDelegate.h"
#import "CTFlightCalendarVCDelegate.h"
#import "CTFlightCityWidgetDelegate.h"

@class CTFlightButton, CTFlightSearchDateButton, CTRootViewController, FlightCityModelForCityList, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;

@interface CTFlightSearchDoubleNewCell : UITableViewCell <CTFlightButtonDelegate, CTFlightCalendarVCDelegate, CTFlightCityWidgetDelegate>
{
    double dateButtonWidth;
    double dateButtonMargin;
    double dateButtonMiddleMargin;
    double contentViewMargin;
    _Bool _includingTax;
    _Bool _isInternational;
    _Bool _isChooseDepartCity;
    int _tripType;
    id <CTFlightSearchDoubleCellDelegate> _delegate;
    long long _adultsCount;
    long long _childrenCount;
    long long _babyCount;
    UIButton *_swapButton;
    UIImageView *_swapBg;
    CTFlightButton *_departButton;
    UILabel *_departCityLabel;
    UIImageView *_departCityBottomLine;
    CTFlightButton *_arriveCityButton;
    UILabel *_arriveCityLabel;
    UIImageView *_arriveCityBottomLine;
    CTFlightSearchDateButton *_departDateButton;
    UIImageView *_departDateBottomLine;
    CTFlightSearchDateButton *_arriveDateButton;
    UIImageView *_arriveDateBottomLine;
    UILabel *_arriveOptionLabel;
    UIButton *_arriveOptionButton;
    FlightCityModelForCityList *_departCityModel;
    FlightCityModelForCityList *_arriveCityModel;
    NSString *_departDate;
    NSString *_arriveDate;
    CTRootViewController *_widgetShowController;
    NSLayoutConstraint *_departDateButtonWidth;
    NSLayoutConstraint *_arriveDateButtonWidth;
    NSLayoutConstraint *_arriveDateButtonTrailConstraint;
    NSLayoutConstraint *_departLabelLeftMargin;
    NSLayoutConstraint *_departLabelWidth;
    NSLayoutConstraint *_arriveLabelLeftMargin;
    NSLayoutConstraint *_arriveLabelWidth;
    NSLayoutConstraint *_departCityLineHeight;
    NSLayoutConstraint *_arriveCityLineHeight;
    NSLayoutConstraint *_departDateLineHeight;
    NSLayoutConstraint *_arriveDateLineHeight;
    NSString *_departNearbyCityCode;
    NSString *_arriveNearbyCityCode;
}

@property(nonatomic) _Bool isChooseDepartCity; // @synthesize isChooseDepartCity=_isChooseDepartCity;
@property(copy, nonatomic) NSString *arriveNearbyCityCode; // @synthesize arriveNearbyCityCode=_arriveNearbyCityCode;
@property(copy, nonatomic) NSString *departNearbyCityCode; // @synthesize departNearbyCityCode=_departNearbyCityCode;
@property(nonatomic) __weak NSLayoutConstraint *arriveDateLineHeight; // @synthesize arriveDateLineHeight=_arriveDateLineHeight;
@property(nonatomic) __weak NSLayoutConstraint *departDateLineHeight; // @synthesize departDateLineHeight=_departDateLineHeight;
@property(nonatomic) __weak NSLayoutConstraint *arriveCityLineHeight; // @synthesize arriveCityLineHeight=_arriveCityLineHeight;
@property(nonatomic) __weak NSLayoutConstraint *departCityLineHeight; // @synthesize departCityLineHeight=_departCityLineHeight;
@property(nonatomic) __weak NSLayoutConstraint *arriveLabelWidth; // @synthesize arriveLabelWidth=_arriveLabelWidth;
@property(nonatomic) __weak NSLayoutConstraint *arriveLabelLeftMargin; // @synthesize arriveLabelLeftMargin=_arriveLabelLeftMargin;
@property(nonatomic) __weak NSLayoutConstraint *departLabelWidth; // @synthesize departLabelWidth=_departLabelWidth;
@property(nonatomic) __weak NSLayoutConstraint *departLabelLeftMargin; // @synthesize departLabelLeftMargin=_departLabelLeftMargin;
@property(nonatomic) __weak NSLayoutConstraint *arriveDateButtonTrailConstraint; // @synthesize arriveDateButtonTrailConstraint=_arriveDateButtonTrailConstraint;
@property(nonatomic) __weak NSLayoutConstraint *arriveDateButtonWidth; // @synthesize arriveDateButtonWidth=_arriveDateButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *departDateButtonWidth; // @synthesize departDateButtonWidth=_departDateButtonWidth;
@property(nonatomic) __weak CTRootViewController *widgetShowController; // @synthesize widgetShowController=_widgetShowController;
@property(retain, nonatomic) NSString *arriveDate; // @synthesize arriveDate=_arriveDate;
@property(retain, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(retain, nonatomic) FlightCityModelForCityList *arriveCityModel; // @synthesize arriveCityModel=_arriveCityModel;
@property(retain, nonatomic) FlightCityModelForCityList *departCityModel; // @synthesize departCityModel=_departCityModel;
@property(nonatomic) __weak UIButton *arriveOptionButton; // @synthesize arriveOptionButton=_arriveOptionButton;
@property(nonatomic) __weak UILabel *arriveOptionLabel; // @synthesize arriveOptionLabel=_arriveOptionLabel;
@property(nonatomic) __weak UIImageView *arriveDateBottomLine; // @synthesize arriveDateBottomLine=_arriveDateBottomLine;
@property(nonatomic) __weak CTFlightSearchDateButton *arriveDateButton; // @synthesize arriveDateButton=_arriveDateButton;
@property(nonatomic) __weak UIImageView *departDateBottomLine; // @synthesize departDateBottomLine=_departDateBottomLine;
@property(nonatomic) __weak CTFlightSearchDateButton *departDateButton; // @synthesize departDateButton=_departDateButton;
@property(nonatomic) __weak UIImageView *arriveCityBottomLine; // @synthesize arriveCityBottomLine=_arriveCityBottomLine;
@property(nonatomic) __weak UILabel *arriveCityLabel; // @synthesize arriveCityLabel=_arriveCityLabel;
@property(nonatomic) __weak CTFlightButton *arriveCityButton; // @synthesize arriveCityButton=_arriveCityButton;
@property(nonatomic) __weak UIImageView *departCityBottomLine; // @synthesize departCityBottomLine=_departCityBottomLine;
@property(nonatomic) __weak UILabel *departCityLabel; // @synthesize departCityLabel=_departCityLabel;
@property(nonatomic) __weak CTFlightButton *departButton; // @synthesize departButton=_departButton;
@property(nonatomic) __weak UIImageView *swapBg; // @synthesize swapBg=_swapBg;
@property(nonatomic) __weak UIButton *swapButton; // @synthesize swapButton=_swapButton;
@property(nonatomic) _Bool isInternational; // @synthesize isInternational=_isInternational;
@property(nonatomic) _Bool includingTax; // @synthesize includingTax=_includingTax;
@property(nonatomic) long long babyCount; // @synthesize babyCount=_babyCount;
@property(nonatomic) long long childrenCount; // @synthesize childrenCount=_childrenCount;
@property(nonatomic) long long adultsCount; // @synthesize adultsCount=_adultsCount;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
@property(nonatomic) __weak id <CTFlightSearchDoubleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getflightCalendarLastDay;
- (void)setupArriveDateWithDepartDate;
- (void)calendarDidSelectedInquireDate:(id)arg1 returnDate:(id)arg2;
- (void)calendarDidSelectedDate:(id)arg1 type:(long long)arg2;
- (void)flightCityWidget:(id)arg1 didSelect:(id)arg2 andSelect:(id)arg3;
- (void)swapButtonAnimation;
- (void)resetCityLabelFrame;
- (_Bool)isDomesticAirline;
- (void)flightButtonHighlighted:(id)arg1 isHighlighted:(_Bool)arg2;
- (void)chooseArriveDate:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)chooseDepartDate:(id)arg1;
- (void)chooseArriveCity:(id)arg1;
- (void)chooseDepartCity:(id)arg1;
- (void)swapCity:(id)arg1;
- (void)refreshView;
- (void)setupWithDepartCity:(id)arg1 arriveCity:(id)arg2 departDate:(id)arg3 arriveDate:(id)arg4 widgetController:(id)arg5 tripType:(int)arg6;
- (void)showArriveDateButton:(_Bool)arg1 showArriveDateOption:(_Bool)arg2 animated:(_Bool)arg3;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

