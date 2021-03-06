//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeLabel, KTVGiftInfo, NSString, UIButton, UIImageView, UILabel;

@interface KTVGiftButtonUnit : UIView
{
    UIImageView *giftImage;
    NSString *giftImgUrl;
    KGThemeLabel *namelab;
    UIImageView *Kicon;
    UILabel *KcoinLab;
    long long KcoinNum;
    UIButton *bgButton;
    UILabel *giftNumLab;
    KGThemeLabel *freelab1;
    UIImageView *logoImage;
    UILabel *couponNum;
    UIImageView *couponNumbg;
    id _delgate;
    KTVGiftInfo *_giftInfo;
}

@property(retain, nonatomic) KTVGiftInfo *giftInfo; // @synthesize giftInfo=_giftInfo;
@property(nonatomic) __weak id delgate; // @synthesize delgate=_delgate;
- (void).cxx_destruct;
- (void)setLabelColorConstant;
- (void)actionSendGift:(id)arg1;
- (long long)getGiftCount;
- (void)setGiftCount:(long long)arg1;
- (void)setSendGiftKCoin:(long long)arg1;
- (void)setGiftKCoin:(long long)arg1;
- (void)setGiftName:(id)arg1;
- (void)setGiftImage:(id)arg1;
- (void)setLogoImage:(id)arg1;
- (void)setCouponNum:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

