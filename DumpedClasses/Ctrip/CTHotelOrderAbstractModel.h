//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotelOrderAbstractModel : NSObject
{
    NSString *currency;
    NSString *roomp;
    NSString *taxp;
    NSString *cancelp;
    NSString *optionp;
    NSString *invoicep;
    NSString *depositp;
    NSString *couponp;
    NSString *passengers;
    NSString *phonelist;
    NSString *emillist;
    NSString *taxitemTitle;
    NSString *priceDifference;
    NSString *totalPrice;
    NSString *_buy10For1;
    NSString *_buy10For1Title;
    NSString *_tripInsep;
    NSString *_tripTitle;
}

@property(copy, nonatomic) NSString *tripTitle; // @synthesize tripTitle=_tripTitle;
@property(copy, nonatomic) NSString *tripInsep; // @synthesize tripInsep=_tripInsep;
@property(copy, nonatomic) NSString *buy10For1Title; // @synthesize buy10For1Title=_buy10For1Title;
@property(copy, nonatomic) NSString *buy10For1; // @synthesize buy10For1=_buy10For1;
@property(copy, nonatomic) NSString *totalPrice; // @synthesize totalPrice;
@property(copy, nonatomic) NSString *priceDifference; // @synthesize priceDifference;
@property(copy, nonatomic) NSString *taxitemTitle; // @synthesize taxitemTitle;
@property(copy, nonatomic) NSString *emillist; // @synthesize emillist;
@property(copy, nonatomic) NSString *phonelist; // @synthesize phonelist;
@property(copy, nonatomic) NSString *passengers; // @synthesize passengers;
@property(copy, nonatomic) NSString *couponp; // @synthesize couponp;
@property(copy, nonatomic) NSString *depositp; // @synthesize depositp;
@property(copy, nonatomic) NSString *invoicep; // @synthesize invoicep;
@property(copy, nonatomic) NSString *optionp; // @synthesize optionp;
@property(copy, nonatomic) NSString *cancelp; // @synthesize cancelp;
@property(copy, nonatomic) NSString *taxp; // @synthesize taxp;
@property(copy, nonatomic) NSString *roomp; // @synthesize roomp;
@property(copy, nonatomic) NSString *currency; // @synthesize currency;
- (void).cxx_destruct;
- (void)initData;
- (id)init;

@end

