//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ReceivedCouponInformationModel : CTBusinessBean
{
    NSString *_categoryName;
    NSString *_limitText;
    NSString *_applicableAmount;
    NSString *_unit;
}

@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *applicableAmount; // @synthesize applicableAmount=_applicableAmount;
@property(copy, nonatomic) NSString *limitText; // @synthesize limitText=_limitText;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

