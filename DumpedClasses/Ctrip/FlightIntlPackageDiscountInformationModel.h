//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class PriceType;

@interface FlightIntlPackageDiscountInformationModel : CTBusinessBean
{
    int index;
    PriceType *discount;
}

@property(retain, nonatomic) PriceType *discount; // @synthesize discount;
@property(nonatomic) int index; // @synthesize index;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

