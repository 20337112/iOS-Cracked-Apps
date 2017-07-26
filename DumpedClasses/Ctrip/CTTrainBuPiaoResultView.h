//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTTrainBuPiaoListCacheBean, CTTrainLabel, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface CTTrainBuPiaoResultView : UIView
{
    id <CTTrainBuPiaoResultViewDelegate> _delegate;
    CTTrainBuPiaoListCacheBean *_shadowCacheBean;
    UIView *_viewContainerTop;
    UIButton *_buttonClose;
    UILabel *_labelDateAndCheci;
    UILabel *_labelSuggestion;
    UIView *_viewContainerResult;
    UIImageView *_imageViewFirstPoint;
    UIImageView *_imageViewSecondPoint;
    UIImageView *_imageViewForthPoint;
    UIImageView *_imageViewFifthPoint;
    UILabel *_labelTopStation;
    UILabel *_labelBottonStation;
    UIView *_viewContainerBestPath;
    UILabel *_labelPathDetail;
    UIImageView *_imageViewFirstLine;
    UIImageView *_imageViewSecondLine;
    UILabel *_labelFirstStation;
    UILabel *_labelSecondStation;
    UILabel *_labelThirdStation;
    CTTrainLabel *_labelMoneyAndSeat;
    UIButton *_buttonOrder;
    UILabel *_labelFirstExplain;
    UILabel *_labelSecondExplain;
    NSLayoutConstraint *_topSecondLineTopGapConstraint;
    NSLayoutConstraint *_bottonFirstLineBottomGapConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *bottonFirstLineBottomGapConstraint; // @synthesize bottonFirstLineBottomGapConstraint=_bottonFirstLineBottomGapConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topSecondLineTopGapConstraint; // @synthesize topSecondLineTopGapConstraint=_topSecondLineTopGapConstraint;
@property(retain, nonatomic) UILabel *labelSecondExplain; // @synthesize labelSecondExplain=_labelSecondExplain;
@property(retain, nonatomic) UILabel *labelFirstExplain; // @synthesize labelFirstExplain=_labelFirstExplain;
@property(retain, nonatomic) UIButton *buttonOrder; // @synthesize buttonOrder=_buttonOrder;
@property(retain, nonatomic) CTTrainLabel *labelMoneyAndSeat; // @synthesize labelMoneyAndSeat=_labelMoneyAndSeat;
@property(retain, nonatomic) UILabel *labelThirdStation; // @synthesize labelThirdStation=_labelThirdStation;
@property(retain, nonatomic) UILabel *labelSecondStation; // @synthesize labelSecondStation=_labelSecondStation;
@property(retain, nonatomic) UILabel *labelFirstStation; // @synthesize labelFirstStation=_labelFirstStation;
@property(retain, nonatomic) UIImageView *imageViewSecondLine; // @synthesize imageViewSecondLine=_imageViewSecondLine;
@property(retain, nonatomic) UIImageView *imageViewFirstLine; // @synthesize imageViewFirstLine=_imageViewFirstLine;
@property(retain, nonatomic) UILabel *labelPathDetail; // @synthesize labelPathDetail=_labelPathDetail;
@property(retain, nonatomic) UIView *viewContainerBestPath; // @synthesize viewContainerBestPath=_viewContainerBestPath;
@property(retain, nonatomic) UILabel *labelBottonStation; // @synthesize labelBottonStation=_labelBottonStation;
@property(retain, nonatomic) UILabel *labelTopStation; // @synthesize labelTopStation=_labelTopStation;
@property(retain, nonatomic) UIImageView *imageViewFifthPoint; // @synthesize imageViewFifthPoint=_imageViewFifthPoint;
@property(retain, nonatomic) UIImageView *imageViewForthPoint; // @synthesize imageViewForthPoint=_imageViewForthPoint;
@property(retain, nonatomic) UIImageView *imageViewSecondPoint; // @synthesize imageViewSecondPoint=_imageViewSecondPoint;
@property(retain, nonatomic) UIImageView *imageViewFirstPoint; // @synthesize imageViewFirstPoint=_imageViewFirstPoint;
@property(retain, nonatomic) UIView *viewContainerResult; // @synthesize viewContainerResult=_viewContainerResult;
@property(retain, nonatomic) UILabel *labelSuggestion; // @synthesize labelSuggestion=_labelSuggestion;
@property(retain, nonatomic) UILabel *labelDateAndCheci; // @synthesize labelDateAndCheci=_labelDateAndCheci;
@property(retain, nonatomic) UIButton *buttonClose; // @synthesize buttonClose=_buttonClose;
@property(retain, nonatomic) UIView *viewContainerTop; // @synthesize viewContainerTop=_viewContainerTop;
@property(retain, nonatomic) CTTrainBuPiaoListCacheBean *shadowCacheBean; // @synthesize shadowCacheBean=_shadowCacheBean;
@property(nonatomic) __weak id <CTTrainBuPiaoResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAllPathButton:(id)arg1;
- (void)onOrderButton:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (id)getDisplayDateWithDateString:(id)arg1;
- (void)setupContent;
- (void)willMoveToSuperview:(id)arg1;
- (id)initViewWithFrame:(struct CGRect)arg1;

@end

