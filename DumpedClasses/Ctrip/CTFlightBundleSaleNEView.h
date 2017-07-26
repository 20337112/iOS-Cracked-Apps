//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTImageView, UIButton, UIImageView, UILabel;

@interface CTFlightBundleSaleNEView : UIView
{
    id <CTFlightBundleSaleNEViewDelegate> _delegate;
    UIView *_containView;
    UIImageView *_frameView;
    UILabel *_lbPrice;
    CTImageView *_imgType;
    UILabel *_lbTitle;
    UILabel *_lbSubTitle;
    UILabel *_lbExtraText;
    UIButton *_btnMask;
}

@property(nonatomic) __weak UIButton *btnMask; // @synthesize btnMask=_btnMask;
@property(nonatomic) __weak UILabel *lbExtraText; // @synthesize lbExtraText=_lbExtraText;
@property(nonatomic) __weak UILabel *lbSubTitle; // @synthesize lbSubTitle=_lbSubTitle;
@property(nonatomic) __weak UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(nonatomic) __weak CTImageView *imgType; // @synthesize imgType=_imgType;
@property(nonatomic) __weak UILabel *lbPrice; // @synthesize lbPrice=_lbPrice;
@property(nonatomic) __weak UIImageView *frameView; // @synthesize frameView=_frameView;
@property(nonatomic) __weak UIView *containView; // @synthesize containView=_containView;
@property(nonatomic) __weak id <CTFlightBundleSaleNEViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapMe:(id)arg1;
- (void)setButtonStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isSelected;
- (void)setBundleViewWithbundleSaleName:(id)arg1 bundleSalePricestr:(id)arg2 bundleSaleDesc:(id)arg3 grabTicketDesc:(id)arg4 isSelected:(_Bool)arg5 stampIconURL:(id)arg6;
- (void)updateFrameImageView;
- (void)awakeFromNib;

@end

