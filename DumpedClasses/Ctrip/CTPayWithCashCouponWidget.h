//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTApplePaySendVerifyDelegate.h"
#import "CTCardAddWidgetDelegate.h"
#import "CTCardSelectWidgetDelegate.h"
#import "CTIdentityPickerViewDelegate.h"
#import "CTOrderSummaryDelegate.h"
#import "CTPTitleTextViewCellDelegate.h"
#import "CTPayWidgetDelegate.h"
#import "CTPaymentMethodViewDelegate.h"
#import "CTRadioListWidgetDelegate.h"
#import "CTWalletPaymentWidgetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class BillAddressInformationModel, CTApplePayManager, CTBankCardCell, CTCardAddWidget, CTCoreTextLabel, CTCreditCardPayNode, CTCustomeGroupTableViewCell, CTIDCardTypeNode, CTOrderSummaryView, CTPDCCWithEDCAlertView, CTPEDCOnlyAlertView, CTPSMSPinCell, CTPTitleTextViewCell, CTPayAdPayController, CTPayAdPayView, CTPayCouponCell, CTPayCouponExceptionCell, CTPayFinanceExtendView, CTPayFullScreenAdsView, CTPayLimitedCell, CTPayTitleBarWidget, CTPayWarningCellManager, CTPaymentCacheBean, CTPaymentMethodView, CTPhoneCell, CTPhoneNumberUpdateView, CTTitleEditCell, CTTitleValueCell, CTVectorButton, CTWalletPaymentWidget, CardTableModel, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, UISwipeGestureRecognizer, UITableView, UIView;

@interface CTPayWithCashCouponWidget : CTRootViewController <CTOrderSummaryDelegate, UITableViewDataSource, UITableViewDelegate, CTPaymentMethodViewDelegate, CTIdentityPickerViewDelegate, CTCardAddWidgetDelegate, CTPTitleTextViewCellDelegate, UITextViewDelegate, CTRadioListWidgetDelegate, UITextFieldDelegate, CTCardSelectWidgetDelegate, CTWalletPaymentWidgetDelegate, CTApplePaySendVerifyDelegate, CTPayWidgetDelegate>
{
    _Bool isGoingDown;
    _Bool isGoingUp;
    UIView *activeView;
    _Bool isThirdPaySucceed;
    _Bool isVerifyBtnTouch;
    _Bool _rewriteExpire;
    _Bool _isSaveCardChecked;
    _Bool _needShowLeftView;
    _Bool _needShowPayPanel;
    _Bool _isDragging;
    _Bool _isKeyboardShown;
    _Bool _showPaymentChange;
    _Bool _isLackPhone;
    _Bool _isIdentityPickerViewDelete;
    _Bool _isUnionpayChannelWithCard;
    _Bool _lastPayIsWechat;
    _Bool _isUsingThirdPay;
    _Bool _isAnimationReload;
    _Bool _isAdPayViewDismissWithNoChangePayTable;
    _Bool _isDifferentPayWay;
    _Bool _isExchangePayWay;
    int _businessType;
    int _useType;
    int _serviceAreaType;
    id <CTPayWidgetDelegate> _delegate;
    CTPaymentCacheBean *_shadowCachebean;
    CTPayFullScreenAdsView *_fullAdsView;
    unsigned long long _paymentMode;
    CardTableModel *_selectedOftenCard;
    CTPayWarningCellManager *_warningManager;
    CTCreditCardPayNode *_creditCardPayNode;
    CTCardAddWidget *_cardAddWidget;
    UIScrollView *_mScrollView;
    UITableView *_couponTableView;
    UITableView *_mTableView;
    UITableView *_addCardTableVeiw;
    NSMutableArray *_arrayCouponRows;
    NSMutableArray *_arrayCouponMethods;
    NSMutableArray *_arrayCardInfoRows;
    NSMutableArray *_arrayCardInfoMethods;
    NSMutableArray *_arrayNewCardRows;
    NSMutableArray *_arrayNewCardMethods;
    UIView *_mPayPanel;
    UIView *_mIntroPanel;
    UIButton *_safetyIntroButton;
    UIButton *_payIntroButton;
    UIButton *_mButtonPayment2;
    CTCustomeGroupTableViewCell *_cellCashPay;
    CTCustomeGroupTableViewCell *_cellWechatPay;
    CTCustomeGroupTableViewCell *_mCellZFPay;
    CTCustomeGroupTableViewCell *_bdWalletPay;
    CTCustomeGroupTableViewCell *_cellQQWalletPay;
    CTCustomeGroupTableViewCell *_cellNewSavingCard;
    CTCustomeGroupTableViewCell *_cellNewCreditCard;
    CTTitleEditCell *_cellExpire;
    CTTitleEditCell *_cellCVV;
    CTPhoneCell *_cellInputMobile;
    CTPSMSPinCell *_cellSMSPin;
    CTPhoneNumberUpdateView *_phoneNumberUpdater;
    CTWalletPaymentWidget *_walletPayWidget;
    CTPayCouponCell *_cellWalletCoupon;
    UIView *_viewLeftAmount;
    CTCoreTextLabel *_labelLeftMoney;
    CTOrderSummaryView *_orderSummaryView;
    UISwipeGestureRecognizer *_swipResignRecognizer;
    UISwipeGestureRecognizer *_swipeDownRecognizer;
    UISwipeGestureRecognizer *_swipeUpRecognizer;
    CTTitleEditCell *_cellCardHolderName;
    CTTitleValueCell *_cellIdCardType;
    CTTitleEditCell *_cellIdCardFillin;
    CTIDCardTypeNode *_selectedIDCardType;
    CTPayLimitedCell *_cellLimitedTip;
    CTTitleEditCell *_cellCardNumber;
    UIView *_viewSaveCard;
    CTVectorButton *_buttonSaveCheck;
    double _editingWidgetBottomAtScreen;
    long long _keyboardHeight;
    long long _lastPayType;
    CTBankCardCell *_cellBankCard;
    CTCustomeGroupTableViewCell *_cellReplenishTip;
    UIButton *_replenishButton;
    CTPaymentMethodView *_paymentMethodView;
    UIView *_viewBottomLogo;
    CTCustomeGroupTableViewCell *_cellIntegral;
    CTPayTitleBarWidget *_topWidget;
    CTPayCouponExceptionCell *_cellWalletException;
    UILabel *_thirdPartyPayTipLabel;
    NSMutableArray *_IDCardTypeList;
    CTCustomeGroupTableViewCell *_cellApplePay;
    CTApplePayManager *_payManager;
    CTCustomeGroupTableViewCell *_cellPaymentControl;
    CTPEDCOnlyAlertView *_edcOnlyAlertView;
    CTPDCCWithEDCAlertView *_dccAlertView;
    CTPayAdPayView *_adPayView;
    CTPayAdPayController *_adPayController;
    long long _aboveAdPayViewState;
    double _animationDelayDuration;
    CTPayFinanceExtendView *_financeExtendView;
    CTCustomeGroupTableViewCell *_cellIouPay;
    NSMutableArray *_arrayCardBillAddressRows;
    NSMutableArray *_arrayCardBillAddressMethods;
    CTPTitleTextViewCell *_cellCardBankCountry;
    CTPTitleTextViewCell *_cellCardBank;
    CTPTitleTextViewCell *_cellCardBillAddress;
    BillAddressInformationModel *_selectBillAddressInfo;
    UIButton *_warmTipButton;
}

+ (id)paymentWidgetWithTitle:(id)arg1 cachebean:(id)arg2 serviceType:(int)arg3 bussinessType:(int)arg4 useType:(int)arg5;
@property(retain, nonatomic) UIButton *warmTipButton; // @synthesize warmTipButton=_warmTipButton;
@property(retain, nonatomic) BillAddressInformationModel *selectBillAddressInfo; // @synthesize selectBillAddressInfo=_selectBillAddressInfo;
@property(retain, nonatomic) CTPTitleTextViewCell *cellCardBillAddress; // @synthesize cellCardBillAddress=_cellCardBillAddress;
@property(retain, nonatomic) CTPTitleTextViewCell *cellCardBank; // @synthesize cellCardBank=_cellCardBank;
@property(retain, nonatomic) CTPTitleTextViewCell *cellCardBankCountry; // @synthesize cellCardBankCountry=_cellCardBankCountry;
@property(retain, nonatomic) NSMutableArray *arrayCardBillAddressMethods; // @synthesize arrayCardBillAddressMethods=_arrayCardBillAddressMethods;
@property(retain, nonatomic) NSMutableArray *arrayCardBillAddressRows; // @synthesize arrayCardBillAddressRows=_arrayCardBillAddressRows;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellIouPay; // @synthesize cellIouPay=_cellIouPay;
@property(retain, nonatomic) CTPayFinanceExtendView *financeExtendView; // @synthesize financeExtendView=_financeExtendView;
@property(nonatomic) _Bool isExchangePayWay; // @synthesize isExchangePayWay=_isExchangePayWay;
@property(nonatomic) _Bool isDifferentPayWay; // @synthesize isDifferentPayWay=_isDifferentPayWay;
@property(nonatomic) _Bool isAdPayViewDismissWithNoChangePayTable; // @synthesize isAdPayViewDismissWithNoChangePayTable=_isAdPayViewDismissWithNoChangePayTable;
@property(nonatomic) double animationDelayDuration; // @synthesize animationDelayDuration=_animationDelayDuration;
@property(nonatomic) _Bool isAnimationReload; // @synthesize isAnimationReload=_isAnimationReload;
@property(nonatomic) long long aboveAdPayViewState; // @synthesize aboveAdPayViewState=_aboveAdPayViewState;
@property(retain, nonatomic) CTPayAdPayController *adPayController; // @synthesize adPayController=_adPayController;
@property(retain, nonatomic) CTPayAdPayView *adPayView; // @synthesize adPayView=_adPayView;
@property(retain, nonatomic) CTPDCCWithEDCAlertView *dccAlertView; // @synthesize dccAlertView=_dccAlertView;
@property(retain, nonatomic) CTPEDCOnlyAlertView *edcOnlyAlertView; // @synthesize edcOnlyAlertView=_edcOnlyAlertView;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellPaymentControl; // @synthesize cellPaymentControl=_cellPaymentControl;
@property(retain, nonatomic) CTApplePayManager *payManager; // @synthesize payManager=_payManager;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellApplePay; // @synthesize cellApplePay=_cellApplePay;
@property(nonatomic) _Bool isUsingThirdPay; // @synthesize isUsingThirdPay=_isUsingThirdPay;
@property(retain, nonatomic) NSMutableArray *IDCardTypeList; // @synthesize IDCardTypeList=_IDCardTypeList;
@property(nonatomic) _Bool lastPayIsWechat; // @synthesize lastPayIsWechat=_lastPayIsWechat;
@property(nonatomic) _Bool isUnionpayChannelWithCard; // @synthesize isUnionpayChannelWithCard=_isUnionpayChannelWithCard;
@property(retain, nonatomic) UILabel *thirdPartyPayTipLabel; // @synthesize thirdPartyPayTipLabel=_thirdPartyPayTipLabel;
@property(nonatomic) _Bool isIdentityPickerViewDelete; // @synthesize isIdentityPickerViewDelete=_isIdentityPickerViewDelete;
@property(retain, nonatomic) CTPayCouponExceptionCell *cellWalletException; // @synthesize cellWalletException=_cellWalletException;
@property(retain, nonatomic) CTPayTitleBarWidget *topWidget; // @synthesize topWidget=_topWidget;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellIntegral; // @synthesize cellIntegral=_cellIntegral;
@property(retain, nonatomic) UIView *viewBottomLogo; // @synthesize viewBottomLogo=_viewBottomLogo;
@property(nonatomic) _Bool isLackPhone; // @synthesize isLackPhone=_isLackPhone;
@property(nonatomic) _Bool showPaymentChange; // @synthesize showPaymentChange=_showPaymentChange;
@property(retain, nonatomic) CTPaymentMethodView *paymentMethodView; // @synthesize paymentMethodView=_paymentMethodView;
@property(retain, nonatomic) UIButton *replenishButton; // @synthesize replenishButton=_replenishButton;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellReplenishTip; // @synthesize cellReplenishTip=_cellReplenishTip;
@property(retain, nonatomic) CTBankCardCell *cellBankCard; // @synthesize cellBankCard=_cellBankCard;
@property(nonatomic) long long lastPayType; // @synthesize lastPayType=_lastPayType;
@property(nonatomic) _Bool isKeyboardShown; // @synthesize isKeyboardShown=_isKeyboardShown;
@property(nonatomic) long long keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) double editingWidgetBottomAtScreen; // @synthesize editingWidgetBottomAtScreen=_editingWidgetBottomAtScreen;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) CTVectorButton *buttonSaveCheck; // @synthesize buttonSaveCheck=_buttonSaveCheck;
@property(retain, nonatomic) UIView *viewSaveCard; // @synthesize viewSaveCard=_viewSaveCard;
@property(retain, nonatomic) CTTitleEditCell *cellCardNumber; // @synthesize cellCardNumber=_cellCardNumber;
@property(retain, nonatomic) CTPayLimitedCell *cellLimitedTip; // @synthesize cellLimitedTip=_cellLimitedTip;
@property(retain, nonatomic) CTIDCardTypeNode *selectedIDCardType; // @synthesize selectedIDCardType=_selectedIDCardType;
@property(retain, nonatomic) CTTitleEditCell *cellIdCardFillin; // @synthesize cellIdCardFillin=_cellIdCardFillin;
@property(retain, nonatomic) CTTitleValueCell *cellIdCardType; // @synthesize cellIdCardType=_cellIdCardType;
@property(retain, nonatomic) CTTitleEditCell *cellCardHolderName; // @synthesize cellCardHolderName=_cellCardHolderName;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeUpRecognizer; // @synthesize swipeUpRecognizer=_swipeUpRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeDownRecognizer; // @synthesize swipeDownRecognizer=_swipeDownRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipResignRecognizer; // @synthesize swipResignRecognizer=_swipResignRecognizer;
@property(retain, nonatomic) CTOrderSummaryView *orderSummaryView; // @synthesize orderSummaryView=_orderSummaryView;
@property(retain, nonatomic) CTCoreTextLabel *labelLeftMoney; // @synthesize labelLeftMoney=_labelLeftMoney;
@property(retain, nonatomic) UIView *viewLeftAmount; // @synthesize viewLeftAmount=_viewLeftAmount;
@property(retain, nonatomic) CTPayCouponCell *cellWalletCoupon; // @synthesize cellWalletCoupon=_cellWalletCoupon;
@property(retain, nonatomic) CTWalletPaymentWidget *walletPayWidget; // @synthesize walletPayWidget=_walletPayWidget;
@property(retain, nonatomic) CTPhoneNumberUpdateView *phoneNumberUpdater; // @synthesize phoneNumberUpdater=_phoneNumberUpdater;
@property(retain, nonatomic) CTPSMSPinCell *cellSMSPin; // @synthesize cellSMSPin=_cellSMSPin;
@property(retain, nonatomic) CTPhoneCell *cellInputMobile; // @synthesize cellInputMobile=_cellInputMobile;
@property(retain, nonatomic) CTTitleEditCell *cellCVV; // @synthesize cellCVV=_cellCVV;
@property(retain, nonatomic) CTTitleEditCell *cellExpire; // @synthesize cellExpire=_cellExpire;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellNewCreditCard; // @synthesize cellNewCreditCard=_cellNewCreditCard;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellNewSavingCard; // @synthesize cellNewSavingCard=_cellNewSavingCard;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellQQWalletPay; // @synthesize cellQQWalletPay=_cellQQWalletPay;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *bdWalletPay; // @synthesize bdWalletPay=_bdWalletPay;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *mCellZFPay; // @synthesize mCellZFPay=_mCellZFPay;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellWechatPay; // @synthesize cellWechatPay=_cellWechatPay;
@property(retain, nonatomic) CTCustomeGroupTableViewCell *cellCashPay; // @synthesize cellCashPay=_cellCashPay;
@property(retain, nonatomic) UIButton *mButtonPayment2; // @synthesize mButtonPayment2=_mButtonPayment2;
@property(retain, nonatomic) UIButton *payIntroButton; // @synthesize payIntroButton=_payIntroButton;
@property(retain, nonatomic) UIButton *safetyIntroButton; // @synthesize safetyIntroButton=_safetyIntroButton;
@property(retain, nonatomic) UIView *mIntroPanel; // @synthesize mIntroPanel=_mIntroPanel;
@property(retain, nonatomic) UIView *mPayPanel; // @synthesize mPayPanel=_mPayPanel;
@property(nonatomic) _Bool needShowPayPanel; // @synthesize needShowPayPanel=_needShowPayPanel;
@property(nonatomic) _Bool needShowLeftView; // @synthesize needShowLeftView=_needShowLeftView;
@property(retain, nonatomic) NSMutableArray *arrayNewCardMethods; // @synthesize arrayNewCardMethods=_arrayNewCardMethods;
@property(retain, nonatomic) NSMutableArray *arrayNewCardRows; // @synthesize arrayNewCardRows=_arrayNewCardRows;
@property(retain, nonatomic) NSMutableArray *arrayCardInfoMethods; // @synthesize arrayCardInfoMethods=_arrayCardInfoMethods;
@property(retain, nonatomic) NSMutableArray *arrayCardInfoRows; // @synthesize arrayCardInfoRows=_arrayCardInfoRows;
@property(retain, nonatomic) NSMutableArray *arrayCouponMethods; // @synthesize arrayCouponMethods=_arrayCouponMethods;
@property(retain, nonatomic) NSMutableArray *arrayCouponRows; // @synthesize arrayCouponRows=_arrayCouponRows;
@property(retain, nonatomic) UITableView *addCardTableVeiw; // @synthesize addCardTableVeiw=_addCardTableVeiw;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) UITableView *couponTableView; // @synthesize couponTableView=_couponTableView;
@property(retain, nonatomic) UIScrollView *mScrollView; // @synthesize mScrollView=_mScrollView;
@property(retain, nonatomic) CTCardAddWidget *cardAddWidget; // @synthesize cardAddWidget=_cardAddWidget;
@property(nonatomic) _Bool isSaveCardChecked; // @synthesize isSaveCardChecked=_isSaveCardChecked;
@property(nonatomic) _Bool rewriteExpire; // @synthesize rewriteExpire=_rewriteExpire;
@property(retain, nonatomic) CTCreditCardPayNode *creditCardPayNode; // @synthesize creditCardPayNode=_creditCardPayNode;
@property(retain, nonatomic) CTPayWarningCellManager *warningManager; // @synthesize warningManager=_warningManager;
@property(retain, nonatomic) CardTableModel *selectedOftenCard; // @synthesize selectedOftenCard=_selectedOftenCard;
@property(nonatomic) unsigned long long paymentMode; // @synthesize paymentMode=_paymentMode;
@property(nonatomic) __weak CTPayFullScreenAdsView *fullAdsView; // @synthesize fullAdsView=_fullAdsView;
@property(readonly, nonatomic) CTPaymentCacheBean *shadowCachebean; // @synthesize shadowCachebean=_shadowCachebean;
@property(nonatomic) __weak id <CTPayWidgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int serviceAreaType; // @synthesize serviceAreaType=_serviceAreaType;
@property(nonatomic) int useType; // @synthesize useType=_useType;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;
- (void)showFinanceExtendviewWithArray:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)stepDefaultPayControllerInfoToAdPay;
- (void)stepAdPayDefaultPayController;
- (void)judgeWhetherUnionpayChannel;
- (void)setCtripCacheBean:(id)arg1;
- (void)adPayViewClickForPayWayChange;
- (_Bool)isAdPayViewShow;
- (void)recommandPayWayChange;
- (void)dissmissAdPayViewFromPayPanel:(CDUnknownBlockType)arg1;
- (void)changeAdPayViewLayout;
- (void)showAdPayViewFromPayPanel;
- (void)changePayPanelFrame:(_Bool)arg1;
- (_Bool)isAECard;
- (void)closeChangeMethodView;
- (void)refreshPaymentWidget;
- (void)thirdPayFinished:(_Bool)arg1;
- (void)adjustScrollViewHeightwithHeight:(float)arg1;
- (void)addOrderSummary;
- (void)reloadContentWithThirdSubPayType:(unsigned long long)arg1 lastPayType:(long long)arg2;
- (void)textBecomeActiveInCell:(id)arg1;
- (void)checkDifferentPayWay:(long long)arg1;
- (void)doWechatAutoPay;
- (id)makeHelpButton;
- (void)showNotFinishPaymentAlert;
- (void)closeWaitLoadingForThirdPay;
- (void)showWaitLoadingForThirdPay;
- (id)getIdCardToSend;
- (id)getExpireToSend;
- (void)switchCellIdCardFillinKeyboard:(id)arg1;
- (_Bool)checkThirdPaySucceed;
- (id)getWalletCouponAvailableAmount;
- (void)refreshReplenishButton;
- (void)VerifyPhoneNumberWithDoneAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 amount:(id)arg3;
- (void)VerifyPhoneNumberWithDoneAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2;
- (void)doPayAgain;
- (void)doFailedBlock:(CDUnknownBlockType)arg1 alerted:(_Bool)arg2 errorInfo:(id)arg3;
- (void)verifyOrderWithDoneAction:(CDUnknownBlockType)arg1 failedAction:(CDUnknownBlockType)arg2 waitingMessage:(id)arg3 widget:(id)arg4 isFullGiftCardPay:(_Bool)arg5;
- (void)verifyOrderWithDoneAction:(CDUnknownBlockType)arg1 failedAction:(CDUnknownBlockType)arg2 waitingMessage:(id)arg3;
- (void)checkValidPeriodOfCard:(id *)arg1;
- (id)checkBillAddressInfo;
- (id)checkCreditCardInfo:(_Bool)arg1;
- (void)doPay;
- (void)doFrequentCardValidate;
- (void)repositionScrollViewWithOffset:(double)arg1;
- (void)doAliPayWithPayModel:(id)arg1;
- (void)doHandleUsingIntegralPay;
- (void)doHandleUsingCashPay;
- (void)postAliPay;
- (_Bool)handleOnlyOnePaymentSupported:(_Bool)arg1;
- (void)refreshInputFields;
- (_Bool)didSelectedCreditCard;
- (void)resetDefaultIDCardType;
- (void)refreshForTextViewCellChange;
- (void)refreshCellWalletCoupon;
- (void)refreshCashCoupon;
- (void)setupNewCardTableCells;
- (void)setupTableCells;
- (void)setupCouponTableCells;
- (void)reloadContentView;
- (void)reloadNewCardTable;
- (double)heightForPayInfosTable;
- (int)reloadPayInfosTableWithBasicTransitional;
- (void)reloadPayInfosTableWithRecommendTransitional:(double)arg1;
- (void)reloadStillNeedToPay;
- (void)reloadCouponTable;
- (void)paywidget:(id)arg1 canceled3rdPayingForOrder:(long long)arg2;
- (void)paywidgetDidPaidSuccess:(id)arg1 orderInfo:(id)arg2 orderId:(long long)arg3 paidType:(unsigned long long)arg4;
- (_Bool)paywidget:(id)arg1 failedWithCachebean:(id)arg2 orderId:(long long)arg3;
- (void)cancelApplePaySendVerify;
- (void)applePaySendVerifyInfo:(id)arg1 resultAction:(CDUnknownBlockType)arg2;
- (void)PaymentMethodDidSelectOtherMethod:(unsigned long long)arg1;
- (void)PaymentMethodDidSelectCard:(id)arg1;
- (void)walletPayWidgetThirdPaySuccess:(id)arg1;
- (void)walletPayWidgetCanceled:(id)arg1;
- (void)walletPayWidget:(id)arg1 password:(id)arg2;
- (void)handleAlipayFailedNotification:(id)arg1;
- (void)handleAlipaySuccessNotification:(id)arg1;
- (void)convertTableViewHeight:(float)arg1;
- (void)handleCardSelected:(id)arg1;
- (void)cardSelectWidget:(id)arg1 didSelect:(id)arg2;
- (void)showPaymentMethodView;
- (void)cardAddCardWithInfo:(id)arg1;
- (void)identityPickerView:(id)arg1 pickValue:(id)arg2 type:(int)arg3;
- (void)cellIdCardFillinChangeValue:(id)arg1;
- (void)radioListWidget:(id)arg1 didSelect:(id)arg2;
- (void)onResp:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewCellChange:(id)arg1;
- (long long)computeForeignCardCharge;
- (_Bool)isSMSCodeNeedAfreshGet;
- (void)showOnlyEDC:(_Bool)arg1;
- (void)showDCCWithEDC:(id)arg1 payDisplaySettingsList:(id)arg2;
- (void)handleButtonSubmitOrder:(id)arg1;
- (void)handleMorePayment;
- (void)onExpirationInfo:(id)arg1;
- (void)onButtonCVVInfo:(id)arg1;
- (void)loookUpPayResult;
- (void)usingWalletPay:(id)arg1;
- (void)usingApplepay;
- (void)handleUsingApplePay;
- (void)handleButtonWarmTipAction:(id)arg1;
- (void)handleButtonCreditPayIntro:(id)arg1;
- (void)handleButtonCreditSafetyIntro:(id)arg1;
- (void)handleUsingCreditCardPay;
- (void)handleUsingIntegral;
- (void)handleUsingCashPay;
- (void)handleUsingThirdPayWithSubPayType:(unsigned long long)arg1;
- (void)usingQQWalletPay;
- (void)handleUsingQQWalletPay;
- (void)usingBaiduPay;
- (void)handleUsingBaiduPay;
- (void)usingWechatPay;
- (void)handleUsingWechatPay;
- (void)handleUsingBankUnion;
- (void)handleSelectCashCoupon;
- (void)usingIouPay;
- (void)handleUsingIouPay;
- (void)handleUsingAlipay;
- (void)handleAddNewCreditCard;
- (void)agreementClicked:(id)arg1;
- (void)agreementCheckClicked:(id)arg1;
- (void)buttonReplenishCardInfoAction:(id)arg1;
- (id)creatSendCodeModel;
- (void)handleCellSMSPin;
- (void)handleCellDisplayMobile;
- (void)handleCellBankCard;
- (void)handleCouponException;
- (void)handleCellCoupon;
- (void)handleCellCardBillAddress;
- (void)handleCellBankCountry;
- (void)handleEventSelectIDCardType;
- (void)helpButtonAction:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)swipeUp;
- (void)swipeDown;
- (void)swipDownOrUp;
- (void)keyboardDidHide:(id)arg1;
- (void)KeyboardWillHide:(id)arg1;
- (void)KeyboardWillShow:(id)arg1;
- (void)removeKeyboardNotification;
- (void)registerKeyboardNotification;
- (id)fetchCellWithActiveView:(id)arg1 inTableSection:(long long)arg2 result:(CDUnknownBlockType)arg3;
- (double)getEditingWidgetBottomAtScreenWhenChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showAnouncementView;
- (void)checkAnnouncement;
- (void)viewDidLoad;
- (void)setupPayType;
- (void)setupPaymentWithFrequentCards;
- (void)setupWidgetWithCache;
- (void)preLoadingFullAds;
- (id)tableViewParamsSettings:(id)arg1;
- (void)viewControllerDidInit;
- (void)initBaseData;
- (void)dismissWidgetAnimated:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

