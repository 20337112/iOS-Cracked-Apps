//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface PriceInformatonModel : CTBusinessBean
{
    int _saleSpecialPrice;
    int _activity;
    NSString *_lowestSpecialRate;
    NSString *_specialTitle;
    NSString *_specialSubTitle;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) int activity; // @synthesize activity=_activity;
@property(copy, nonatomic) NSString *specialSubTitle; // @synthesize specialSubTitle=_specialSubTitle;
@property(copy, nonatomic) NSString *specialTitle; // @synthesize specialTitle=_specialTitle;
@property(copy, nonatomic) NSString *lowestSpecialRate; // @synthesize lowestSpecialRate=_lowestSpecialRate;
@property(nonatomic) int saleSpecialPrice; // @synthesize saleSpecialPrice=_saleSpecialPrice;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

