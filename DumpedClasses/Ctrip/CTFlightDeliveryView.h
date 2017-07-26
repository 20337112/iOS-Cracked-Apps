//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

#import "CTFlightCommonUpPushViewDelegate.h"
#import "CTFlightContactEditWidgetDelegate.h"
#import "CTFlightDeliveryCoverViewDelegate.h"
#import "CTFlightDeliveryMultiInvoiceChooseCellDelegate.h"
#import "CTFlightDeliveryViewInvoiceTitleCellDelegate.h"
#import "CTFlightFullScreenMaskViewDelegate.h"
#import "CTFlightInvoiceTitleWidgetDelegate.h"
#import "CTFlightOverKeyboardViewDelegate.h"
#import "CTFlightPlaceholderTextViewDelegate.h"
#import "CTFlightRegionPickerDataSourceDelegate.h"
#import "CTLocationDelegate.h"
#import "CTRegionPickerViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTAddressNode, CTFlightCommonUpPushView, CTFlightDeliveryCoverView, CTFlightDeliveryUpPushInvoiceAddressView, CTFlightDeliveryUpPushInvoiceTitleView, CTFlightDetailBaseCacheBean, CTFlightFullScreenMaskView, CTFlightLocalCalendar, CTFlightPassengerInvoiceTitleViewModel, CTFlightPlaceholderTextView, CTInvoiceTitleManagerCacheBean, CTLocationClient, CTRegionPickerView, CTTableView, DispatchImportContentModel, DispatchModel, NSArray, NSMutableArray, NSString, UIPickerView, UIToolbar;

@interface CTFlightDeliveryView : CTRootView <CTFlightContactEditWidgetDelegate, CTFlightPlaceholderTextViewDelegate, CTFlightDeliveryViewInvoiceTitleCellDelegate, CTFlightDeliveryMultiInvoiceChooseCellDelegate, CTFlightOverKeyboardViewDelegate, CTFlightInvoiceTitleWidgetDelegate, CTFlightDeliveryCoverViewDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, UIAlertViewDelegate, CTRegionPickerViewDelegate, CTFlightRegionPickerDataSourceDelegate, CTFlightFullScreenMaskViewDelegate, CTLocationDelegate, CTFlightCommonUpPushViewDelegate>
{
    _Bool showAlert;
    _Bool receiverDeleting;
    _Bool addressDeleting;
    _Bool cellDeleting;
    int selectedActivityIndex;
    int lastDispatchType;
    _Bool isSupportInvoiceTmp;
    long long selectedInvoiceTypeTmp;
    _Bool _isBuyInsurance;
    _Bool _showCellWarning;
    _Bool _isPhoneFirstError;
    _Bool _hasClickedAnything;
    _Bool _hasCommonAddress;
    _Bool _lockToCheckAddress;
    _Bool _firstTimeCheckingAddress;
    _Bool _needShowXProductInvoice;
    CTTableView *_pTableView;
    id <CTFlightDeliveryDelegate> _deliveryDelegate;
    CTFlightDetailBaseCacheBean *_domesticOrderCacheBean;
    NSString *_departTime;
    NSString *_firstArriveTIme;
    NSString *_lastArriveTime;
    NSString *_departCityCode;
    CTRegionPickerView *_regionPickerView;
    UIToolbar *_dateToolBar;
    UIToolbar *_timeToolBar;
    DispatchImportContentModel *_myImportContentModel;
    DispatchModel *_myDispatchModel;
    CTAddressNode *_myAddressNode;
    CTFlightDeliveryCoverView *_coverView;
    CTFlightFullScreenMaskView *_coverMaskView;
    CTFlightPlaceholderTextView *_placeholderTextView;
    NSString *_additionalInvoiceName;
    UIPickerView *_datePickerView;
    CTFlightLocalCalendar *_localDateCalendar;
    UIPickerView *_timePickerView;
    CTFlightLocalCalendar *_localTimeCalendar;
    unsigned long long _myInvoiceTitleIndex;
    CTLocationClient *_locationClient;
    CTInvoiceTitleManagerCacheBean *_invoiceTitleCacheBean;
    CTFlightPassengerInvoiceTitleViewModel *_editTitleModel;
    CTFlightDeliveryUpPushInvoiceTitleView *_invoiceTitleView;
    CTFlightCommonUpPushView *_exUpView;
    CTFlightDeliveryUpPushInvoiceAddressView *_invoiceAddressView;
    NSMutableArray *_addressNodeList;
    NSArray *_cells;
}

+ (_Bool)isMutexWithDeliveryType:(int)arg1 withPackageSupportList:(id)arg2;
+ (double)setupAirportGetDateCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 dateToolbar:(id)arg4 datePicker:(id)arg5 callback:(CDUnknownBlockType)arg6;
+ (double)setupAirportGetTimeCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 timeToolbar:(id)arg4 timePicker:(id)arg5 callback:(CDUnknownBlockType)arg6;
+ (double)setupAirportGetTerminalCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 cache:(id)arg4;
+ (double)setupDeliveryMergeAddressCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3;
+ (double)setupDeliveryCommonAddressCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3;
+ (double)setupExpressAddressCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 placeholderTextView:(id)arg4 needEmpty:(_Bool)arg5 needFirstResponder:(_Bool)arg6 delegate:(id)arg7;
+ (double)setupExpressRegionCell:(id)arg1 regionPickerView:(id)arg2 importContentModel:(id)arg3 dispatchModel:(id)arg4 delegate:(id)arg5 cbFirst:(CDUnknownBlockType)arg6 cbSecond:(CDUnknownBlockType)arg7;
+ (double)setupExpressPhoneCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 needEmpty:(_Bool)arg4 needFirstResponder:(_Bool)arg5 delegate:(id)arg6;
+ (double)setupExpressReceiverCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 needEmpty:(_Bool)arg4 needFirstResponder:(_Bool)arg5 delegate:(id)arg6;
+ (double)setupTextFieldCell:(id)arg1 title:(id)arg2 tfPlaceholder:(id)arg3 tfString:(id)arg4 tag:(long long)arg5 needFirstResponder:(_Bool)arg6 delegate:(id)arg7;
+ (double)setupDeliveryTypeCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (double)setupInvoiceTypeCell:(id)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 additionalInvoiceName:(id)arg4 needShowInvoice:(_Bool)arg5;
+ (_Bool)checkValidPureNumber:(id)arg1;
+ (_Bool)isPureNumandCharacters:(id)arg1;
+ (id)checkInvoiceTitleValidity:(id)arg1;
+ (_Bool)checkSepicalText:(id)arg1;
+ (id)buildInvoiceModelWithRow:(long long)arg1 importContentModel:(id)arg2 dispatchModel:(id)arg3 hasMultiInvoiceChoose:(_Bool)arg4;
+ (_Bool)firstDateTimeBeforeSecondDateTime:(id)arg1 secondDate:(id)arg2;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) NSMutableArray *addressNodeList; // @synthesize addressNodeList=_addressNodeList;
@property(retain, nonatomic) CTFlightDeliveryUpPushInvoiceAddressView *invoiceAddressView; // @synthesize invoiceAddressView=_invoiceAddressView;
@property(retain, nonatomic) CTFlightCommonUpPushView *exUpView; // @synthesize exUpView=_exUpView;
@property(retain, nonatomic) CTFlightDeliveryUpPushInvoiceTitleView *invoiceTitleView; // @synthesize invoiceTitleView=_invoiceTitleView;
@property(retain, nonatomic) CTFlightPassengerInvoiceTitleViewModel *editTitleModel; // @synthesize editTitleModel=_editTitleModel;
@property(retain, nonatomic) CTInvoiceTitleManagerCacheBean *invoiceTitleCacheBean; // @synthesize invoiceTitleCacheBean=_invoiceTitleCacheBean;
@property(retain, nonatomic) CTLocationClient *locationClient; // @synthesize locationClient=_locationClient;
@property(nonatomic) unsigned long long myInvoiceTitleIndex; // @synthesize myInvoiceTitleIndex=_myInvoiceTitleIndex;
@property(retain, nonatomic) CTFlightLocalCalendar *localTimeCalendar; // @synthesize localTimeCalendar=_localTimeCalendar;
@property(retain, nonatomic) UIPickerView *timePickerView; // @synthesize timePickerView=_timePickerView;
@property(retain, nonatomic) CTFlightLocalCalendar *localDateCalendar; // @synthesize localDateCalendar=_localDateCalendar;
@property(retain, nonatomic) UIPickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(readonly, nonatomic) _Bool needShowXProductInvoice; // @synthesize needShowXProductInvoice=_needShowXProductInvoice;
@property(nonatomic) _Bool firstTimeCheckingAddress; // @synthesize firstTimeCheckingAddress=_firstTimeCheckingAddress;
@property(nonatomic) _Bool lockToCheckAddress; // @synthesize lockToCheckAddress=_lockToCheckAddress;
@property(copy, nonatomic) NSString *additionalInvoiceName; // @synthesize additionalInvoiceName=_additionalInvoiceName;
@property(retain, nonatomic) CTFlightPlaceholderTextView *placeholderTextView; // @synthesize placeholderTextView=_placeholderTextView;
@property(retain, nonatomic) CTFlightFullScreenMaskView *coverMaskView; // @synthesize coverMaskView=_coverMaskView;
@property(retain, nonatomic) CTFlightDeliveryCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) CTAddressNode *myAddressNode; // @synthesize myAddressNode=_myAddressNode;
@property(retain, nonatomic) DispatchModel *myDispatchModel; // @synthesize myDispatchModel=_myDispatchModel;
@property(retain, nonatomic) DispatchImportContentModel *myImportContentModel; // @synthesize myImportContentModel=_myImportContentModel;
@property(readonly, nonatomic) _Bool hasCommonAddress; // @synthesize hasCommonAddress=_hasCommonAddress;
@property(retain, nonatomic) UIToolbar *timeToolBar; // @synthesize timeToolBar=_timeToolBar;
@property(retain, nonatomic) UIToolbar *dateToolBar; // @synthesize dateToolBar=_dateToolBar;
@property(retain, nonatomic) CTRegionPickerView *regionPickerView; // @synthesize regionPickerView=_regionPickerView;
@property(nonatomic) _Bool hasClickedAnything; // @synthesize hasClickedAnything=_hasClickedAnything;
@property(retain, nonatomic) NSString *departCityCode; // @synthesize departCityCode=_departCityCode;
@property(retain, nonatomic) NSString *lastArriveTime; // @synthesize lastArriveTime=_lastArriveTime;
@property(retain, nonatomic) NSString *firstArriveTIme; // @synthesize firstArriveTIme=_firstArriveTIme;
@property(retain, nonatomic) NSString *departTime; // @synthesize departTime=_departTime;
@property(nonatomic) _Bool isPhoneFirstError; // @synthesize isPhoneFirstError=_isPhoneFirstError;
@property(nonatomic) _Bool showCellWarning; // @synthesize showCellWarning=_showCellWarning;
@property(nonatomic) _Bool isBuyInsurance; // @synthesize isBuyInsurance=_isBuyInsurance;
@property(retain, nonatomic) CTFlightDetailBaseCacheBean *domesticOrderCacheBean; // @synthesize domesticOrderCacheBean=_domesticOrderCacheBean;
@property(nonatomic) __weak id <CTFlightDeliveryDelegate> deliveryDelegate; // @synthesize deliveryDelegate=_deliveryDelegate;
@property(retain, nonatomic) CTTableView *pTableView; // @synthesize pTableView=_pTableView;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long passengerAmount;
- (id)sFExpressUnvaliableTips;
- (void)cancelSFExpress;
- (void)removeDeliveryCoverViewAnimation;
- (void)removeDeliveryCoverView;
- (void)collectActionByType:(int)arg1;
- (double)getDeliveryViewHeight;
- (id)checkDeliveryFormContent:(id)arg1 isNeedInvoice:(_Bool)arg2 showInvoiceTitle:(_Bool)arg3;
- (id)getHistoryData;
- (_Bool)hasHistoryData;
- (void)resetCellType;
@property(readonly, nonatomic) _Bool hasMultiInvoiceChoose;
- (void)didSelectedCoverViewAirportGetCell:(id)arg1 isDepart:(_Bool)arg2 index:(long long)arg3 isTry:(_Bool)arg4;
- (void)didSelectedCoverViewExpressCell:(id)arg1 deliveryType:(int)arg2 activityType:(int)arg3;
- (void)removeFromSuperview:(id)arg1;
- (void)setAddressNodeWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3;
- (_Bool)matchRegionPickerWithProvince:(id)arg1 city:(id)arg2 district:(id)arg3;
- (void)locationClient:(id)arg1 locationFail:(int)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithCtripCity:(id)arg2;
- (void)locationClient:(id)arg1 locationSuccessWithGeoAddress:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)regionPickerViewCanceled:(id)arg1;
- (void)regionPickerView:(id)arg1 didSelectRegion:(id)arg2;
- (void)afterDismissViewWithView:(id)arg1;
- (void)tapToBlankSpaceCancelActionWithView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)flightMaskViewWillRemoveFromSuperView:(id)arg1 gestureRecognizer:(id)arg2;
- (void)textChanged:(id)arg1;
- (void)setupTableFooterView;
- (void)timePickerConfirmClicked:(id)arg1;
- (void)timePickerCancelClicked:(id)arg1;
- (void)datePickerConfirmClicked:(id)arg1;
- (void)datePickerCancelClicked:(id)arg1;
- (void)selectDeliveryTimeClicked:(id)arg1;
- (void)selectDeliveryDateClicked:(id)arg1;
- (void)selectRegionClicked:(id)arg1;
- (void)didClickedLocationButton:(id)arg1;
- (void)selectDeliveryTypeClicked:(id)arg1;
- (void)dealloc;
- (id)createPickerView;
- (id)createToolbar:(_Bool)arg1;
- (void)initView;
- (void)initData;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (void)placeholderTextViewDidEndEditing:(id)arg1;
- (void)placeholderTextViewDidBeginEditing:(id)arg1;
- (void)clearButtonDidClicked:(id)arg1;
- (void)placeholderTextViewDidChange:(id)arg1;
- (_Bool)contactEditWidget:(id)arg1 checkNode:(id)arg2;
- (void)invoiceAddressViewReload;
- (void)contactEditWidgetCanceled:(id)arg1;
- (void)contactEditWidget:(id)arg1 deleteNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 editedNode:(id)arg2;
- (void)contactEditWidget:(id)arg1 addNewNode:(id)arg2;
- (void)handleChangeAddressNode:(id)arg1;
- (void)checkIsAvaliableAddress;
- (void)refershAddressNodeList;
- (void)handleDeleteAddressNode:(id)arg1;
- (void)toAddressEditPage;
- (void)addAddressNode;
- (void)widgetGetAddressNodeList;
- (void)toAddressListPage;
- (void)invoiceTitleWidgetDidCancelSelect:(id)arg1;
- (void)invoiceTitleWidget:(id)arg1 didDeleteTitle:(id)arg2;
- (void)selectPassengerInvoiceTitleModel:(id)arg1 andTitleWidget:(id)arg2;
- (void)selectInvoiceTitleModel:(id)arg1 andTitleWidget:(id)arg2;
- (void)clickOverKeyboardConfirmButton:(id)arg1;
- (id)warningTaxNumberContentOverKeyBoard:(id)arg1;
- (id)warningContentOverKeyBoard:(id)arg1;
- (_Bool)showTaxNumberWarningOverKeyBoard:(id)arg1;
- (_Bool)showWarningOverKeyBoard:(id)arg1;
- (void)didClickedCheckBoxInMultiInvoiceChooseCell:(id)arg1;
- (long long)getPassengerIdWithCellTag:(long long)arg1;
- (void)didClickedButtonInDeliveryViewInvoiceTitleCell:(id)arg1;
- (void)didClickedPersonOrCorpButtonInDeliveryViewInvoiceTitleCell:(id)arg1;
- (id)warningContentInTaxTextFieldWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (_Bool)showTaxTextFieldWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (void)taxTextFieldInDeliveryViewInvoiceTitleCellDidEndEditing:(id)arg1;
- (void)taxTextFieldInDeliveryViewInvoiceTitleCellDidChange:(id)arg1;
- (id)warningContentInPersonTextViewWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (_Bool)showPersonTextViewWarningInDeliveryViewInvoiceTitleCell:(id)arg1;
- (void)personTextViewInDeliveryViewInvoiceTitleCellDidEndEditing:(id)arg1;
- (void)showInvoiceTitleViewWithIndexRow:(long long)arg1 titleArray:(id)arg2;
- (void)gotoAddInvoiceTitleWithOldTitleModel:(id)arg1 titleType:(id)arg2 passengerInforID:(long long)arg3;
- (void)initInvoiceTitleData;
- (void)setupAvaliableDeliveryTime;
- (void)setupAvaliableDeliveryDate;
- (id)latestAvaliableTime;
- (id)latestAvaliableDate;
- (id)earlistAvaliableTime;
- (id)earlistAvaliableDate;
- (id)convertDateToLegalFoward:(id)arg1;
- (id)convertDateToLegal:(id)arg1;
- (id)convertTimeToLegalFoward:(id)arg1;
- (id)convertTimeToLegal:(id)arg1;
- (void)refreshAirportGetWithRoute:(_Bool)arg1 index:(long long)arg2;
- (void)refreshPJS;
- (void)selectPost:(int)arg1;
- (void)selectSFExpress;
- (void)selectMergeDelivery;
- (void)bossActivityClicked:(id)arg1;
- (void)diamondActivityClicked:(id)arg1;
- (void)giftCardClicked:(id)arg1;
- (void)gradeActivityClicked:(id)arg1;
- (void)checkAfterClick;
- (void)setupOtherDeliveryDataAndRefresh;
- (void)cancelUnavailableDeliveryType;
- (void)refreshDataAfter;
- (void)setupDeliveryDataAndRefresh:(_Bool)arg1;
- (void)setupDeliveryData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
