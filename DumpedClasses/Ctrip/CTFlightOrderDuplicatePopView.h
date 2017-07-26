//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightCommonUpPushSubView.h"

#import "CTFlightButtonDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTFlightButton, CTFlightRepeatOrderViewModel, NSLayoutConstraint, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface CTFlightOrderDuplicatePopView : CTFlightCommonUpPushSubView <CTFlightButtonDelegate, UITableViewDataSource, UITableViewDelegate>
{
    int _buttonFlag;
    id <CTFlightOrderDuplicatePopViewDelegate> _delegate;
    UIView *_bgView;
    UITableView *_dTablleView;
    UIView *_bottomView;
    CTFlightButton *_bottomView_clickBtn;
    UILabel *_bottomView_bookLabel;
    UILabel *_bottomView_subLabel;
    NSLayoutConstraint *_tableViewCons_Bottom;
    UIView *_bottomChangeView;
    UILabel *_bottomChangeLabel;
    CTFlightButton *_bottomChangeButton;
    NSString *_personMsg;
    NSMutableArray *_dataSource;
    long long _payStatus;
    CTFlightRepeatOrderViewModel *_repeatOrderViewModel;
    double _contentViewHeight;
}

@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) CTFlightRepeatOrderViewModel *repeatOrderViewModel; // @synthesize repeatOrderViewModel=_repeatOrderViewModel;
@property(nonatomic) long long payStatus; // @synthesize payStatus=_payStatus;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *personMsg; // @synthesize personMsg=_personMsg;
@property(retain, nonatomic) CTFlightButton *bottomChangeButton; // @synthesize bottomChangeButton=_bottomChangeButton;
@property(retain, nonatomic) UILabel *bottomChangeLabel; // @synthesize bottomChangeLabel=_bottomChangeLabel;
@property(retain, nonatomic) UIView *bottomChangeView; // @synthesize bottomChangeView=_bottomChangeView;
@property(retain, nonatomic) NSLayoutConstraint *tableViewCons_Bottom; // @synthesize tableViewCons_Bottom=_tableViewCons_Bottom;
@property(retain, nonatomic) UILabel *bottomView_subLabel; // @synthesize bottomView_subLabel=_bottomView_subLabel;
@property(retain, nonatomic) UILabel *bottomView_bookLabel; // @synthesize bottomView_bookLabel=_bottomView_bookLabel;
@property(retain, nonatomic) CTFlightButton *bottomView_clickBtn; // @synthesize bottomView_clickBtn=_bottomView_clickBtn;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UITableView *dTablleView; // @synthesize dTablleView=_dTablleView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) int buttonFlag; // @synthesize buttonFlag=_buttonFlag;
@property(nonatomic) __weak id <CTFlightOrderDuplicatePopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)flightButtonHighlighted:(id)arg1 isHighlighted:(_Bool)arg2;
- (void)returnAndChangeAction:(id)arg1;
- (void)bookButtonClickAction:(id)arg1;
- (void)setupButtonWithText:(id)arg1;
- (void)setupDataWithRepeatViewModel:(id)arg1;
- (void)reloadData;
- (double)contentHeight;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

