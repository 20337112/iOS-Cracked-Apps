//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface HotelOrderProgressTitleViewModel : NSObject
{
    _Bool _isShowArrow;
    int _progressType;
    int _cashType;
    int _rufundStatus;
    NSAttributedString *_price;
    NSString *_title;
    NSString *_decsInfo;
}

+ (id)changeToProgressModel:(id)arg1 withType:(int)arg2 itemTitle:(id)arg3;
@property(nonatomic) _Bool isShowArrow; // @synthesize isShowArrow=_isShowArrow;
@property(nonatomic) int rufundStatus; // @synthesize rufundStatus=_rufundStatus;
@property(nonatomic) int cashType; // @synthesize cashType=_cashType;
@property(copy, nonatomic) NSString *decsInfo; // @synthesize decsInfo=_decsInfo;
@property(nonatomic) int progressType; // @synthesize progressType=_progressType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSAttributedString *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (int)getBackCashType:(id)arg1;
- (int)getApplyCashBackType:(id)arg1;
- (id)getDescription:(id)arg1;
- (id)getCashBackPrice:(id)arg1;
- (id)getDiscountBackCashPrice:(id)arg1;
- (void)ifShowExpandArrow:(int)arg1 cacheBean:(id)arg2;
- (id)initWithCacheBean:(id)arg1 withType:(int)arg2 itemTitle:(id)arg3;

@end

