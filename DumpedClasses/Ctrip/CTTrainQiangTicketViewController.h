//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTLoadingViewDelegate.h"
#import "CTTrain12306LoginViewControllerDelegate.h"

@class AVAudioPlayer, CAGradientLayer, CTTrainRobTicketCacheBean, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CTTrainQiangTicketViewController : CTRootViewController <CTLoadingViewDelegate, CTTrain12306LoginViewControllerDelegate>
{
    _Bool _stopLoading;
    CTTrainRobTicketCacheBean *_shadowCacheBean;
    UIView *_animationView;
    UIButton *_stopBtn;
    UIImageView *_backgroundImgView;
    UILabel *_departDataLabel;
    UILabel *_departCityLabel;
    UILabel *_arriveCityLabel;
    UILabel *_departTimeLabel;
    UILabel *_arriveTimeLabel;
    UILabel *_trainNumberLabel;
    UIImageView *_successImgView;
    UIView *_qiangPiaoNumberView;
    AVAudioPlayer *_AVJumpmanage;
    UIButton *_hundredBtn;
    long long _hundredBNum;
    UIButton *_tenBtn;
    long long _tenNum;
    UIButton *_singleBtn;
    long long _singleNum;
    CAGradientLayer *_backgroundGradient;
    long long _qiangTicketState;
    long long _qiangPiaoCount;
    NSString *_validataCode;
    double _lastRecordTime;
}

@property(nonatomic) _Bool stopLoading; // @synthesize stopLoading=_stopLoading;
@property(nonatomic) double lastRecordTime; // @synthesize lastRecordTime=_lastRecordTime;
@property(retain, nonatomic) NSString *validataCode; // @synthesize validataCode=_validataCode;
@property(nonatomic) long long qiangPiaoCount; // @synthesize qiangPiaoCount=_qiangPiaoCount;
@property(nonatomic) long long qiangTicketState; // @synthesize qiangTicketState=_qiangTicketState;
@property(retain, nonatomic) CAGradientLayer *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(nonatomic) long long singleNum; // @synthesize singleNum=_singleNum;
@property(nonatomic) __weak UIButton *singleBtn; // @synthesize singleBtn=_singleBtn;
@property(nonatomic) long long tenNum; // @synthesize tenNum=_tenNum;
@property(nonatomic) __weak UIButton *tenBtn; // @synthesize tenBtn=_tenBtn;
@property(nonatomic) long long hundredBNum; // @synthesize hundredBNum=_hundredBNum;
@property(nonatomic) __weak UIButton *hundredBtn; // @synthesize hundredBtn=_hundredBtn;
@property(retain, nonatomic) AVAudioPlayer *AVJumpmanage; // @synthesize AVJumpmanage=_AVJumpmanage;
@property(nonatomic) __weak UIView *qiangPiaoNumberView; // @synthesize qiangPiaoNumberView=_qiangPiaoNumberView;
@property(nonatomic) __weak UIImageView *successImgView; // @synthesize successImgView=_successImgView;
@property(nonatomic) __weak UILabel *trainNumberLabel; // @synthesize trainNumberLabel=_trainNumberLabel;
@property(nonatomic) __weak UILabel *arriveTimeLabel; // @synthesize arriveTimeLabel=_arriveTimeLabel;
@property(nonatomic) __weak UILabel *departTimeLabel; // @synthesize departTimeLabel=_departTimeLabel;
@property(nonatomic) __weak UILabel *arriveCityLabel; // @synthesize arriveCityLabel=_arriveCityLabel;
@property(nonatomic) __weak UILabel *departCityLabel; // @synthesize departCityLabel=_departCityLabel;
@property(nonatomic) __weak UILabel *departDataLabel; // @synthesize departDataLabel=_departDataLabel;
@property(nonatomic) __weak UIImageView *backgroundImgView; // @synthesize backgroundImgView=_backgroundImgView;
@property(nonatomic) __weak UIButton *stopBtn; // @synthesize stopBtn=_stopBtn;
@property(nonatomic) __weak UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) CTTrainRobTicketCacheBean *shadowCacheBean; // @synthesize shadowCacheBean=_shadowCacheBean;
- (void).cxx_destruct;
- (void)afterNo12306Success:(id)arg1;
- (void)after12306LoginSuccess:(id)arg1;
- (void)stopQiangPiaocAction:(id)arg1;
- (void)to12306OrderDetail:(_Bool)arg1;
- (void)go12306BookStep2;
- (void)bookForm;
- (void)doCancelWaitPay12306Order:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)doCtripCreateOrder;
- (void)doWaipPayOrederWithHandleType:(long long)arg1 withMsg:(id)arg2;
- (_Bool)isFrontController;
- (void)startQiangPiao;
- (void)updateAnimationViewWithOrder:(id)arg1;
- (void)qiangPiaoSuccessViewAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startQiangPiaoAnimation;
- (double)delayQiangPiaoTime;
- (void)show12306AccountManageVC;
- (void)updateRecordTime;
- (id)getButtonWithNumber:(long long)arg1;
- (void)updateQiangPiaoCount;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateViewContent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)viewDidLoad;
- (void)stopAudio;
- (void)playQiangTicketSuccessAudio;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

