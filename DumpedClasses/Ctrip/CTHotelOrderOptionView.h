//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTNumericUpDownViewDelegate.h"

@class CTHotelCircularButton, CTHotelDetailButton, CTNumericUpDownView, CTWebImageView, HotelOptionInformation, NSString, UILabel;

@interface CTHotelOrderOptionView : UIView <CTNumericUpDownViewDelegate>
{
    UIView *leftView;
    UILabel *nameLable;
    CTHotelDetailButton *infoBtn;
    UILabel *priceLable;
    UILabel *cancleLab;
    UILabel *despLab;
    UILabel *remarkLab;
    UIView *rightView;
    UILabel *numLab;
    UILabel *limitLab;
    CTHotelCircularButton *cancelBtn;
    CTWebImageView *_imageView;
    CTNumericUpDownView *_upDownView;
    HotelOptionInformation *_mainOptionData;
}

+ (double)getViewHeight:(id)arg1;
@property(retain, nonatomic) HotelOptionInformation *mainOptionData; // @synthesize mainOptionData=_mainOptionData;
@property(retain, nonatomic) CTNumericUpDownView *upDownView; // @synthesize upDownView=_upDownView;
@property(retain, nonatomic) CTWebImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (double)infoBtnWidth:(id)arg1;
- (id)attributedTexWithStr:(id)arg1 currencyStr:(id)arg2 withFont:(long long)arg3;
- (double)widthWithStr:(id)arg1 withFont:(long long)arg2;
- (double)getStaticInfoHeight:(id)arg1 withStr:(id)arg2;
- (double)getNameLabMaxWidth:(id)arg1;
- (double)getNameLabW:(id)arg1;
- (double)getNameLabH:(id)arg1;
- (void)cancelBtnAction:(id)arg1;
- (void)infoBtnAction:(id)arg1;
- (void)subPressed:(id)arg1;
- (void)addPressed:(id)arg1;
- (void)setcancelBtnInfo:(id)arg1;
- (void)setRightData:(id)arg1;
- (void)setInfoBtn:(id)arg1;
- (double)getNameLabInfo:(id)arg1;
- (void)setLeftData:(id)arg1 priceStr:(id)arg2;
- (void)setData:(id)arg1 priceStr:(id)arg2;
- (void)drawRightView;
- (void)drawLeftView;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)getRightViewHeight:(id)arg1;
- (double)getLeftViewHeight:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

