//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class HotelInsurancesModelModel, NSString, UILabel;

@interface CTInsuranceBtn : UIButton
{
    UILabel *nameLable;
    UILabel *desLable;
    UILabel *priceLable;
    UILabel *tickLabel;
    UILabel *lbLine;
    NSString *_nameStr;
    NSString *_desStr;
    NSString *_priceStr;
    HotelInsurancesModelModel *_insurancesModel;
}

@property(retain, nonatomic) HotelInsurancesModelModel *insurancesModel; // @synthesize insurancesModel=_insurancesModel;
@property(retain, nonatomic) NSString *priceStr; // @synthesize priceStr=_priceStr;
@property(retain, nonatomic) NSString *desStr; // @synthesize desStr=_desStr;
@property(retain, nonatomic) NSString *nameStr; // @synthesize nameStr=_nameStr;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

