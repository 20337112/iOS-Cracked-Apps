//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface CarRentalRecommendDetailModel : CTBusinessBean
{
    int _luggageCount;
    int _peopleCount;
    NSString *_gear;
    NSString *_cGName;
}

@property(copy, nonatomic) NSString *cGName; // @synthesize cGName=_cGName;
@property(nonatomic) int peopleCount; // @synthesize peopleCount=_peopleCount;
@property(nonatomic) int luggageCount; // @synthesize luggageCount=_luggageCount;
@property(copy, nonatomic) NSString *gear; // @synthesize gear=_gear;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

