//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface CommentAvgPointInformationModel : CTBusinessBean
{
    NSString *_ratPoint;
    NSString *_raAtPoint;
    NSString *_servicePoint;
    NSString *_faclPoint;
    NSString *_ratingDining;
    NSString *_ratingPrice;
    NSString *_custPoint;
}

@property(copy, nonatomic) NSString *custPoint; // @synthesize custPoint=_custPoint;
@property(copy, nonatomic) NSString *ratingPrice; // @synthesize ratingPrice=_ratingPrice;
@property(copy, nonatomic) NSString *ratingDining; // @synthesize ratingDining=_ratingDining;
@property(copy, nonatomic) NSString *faclPoint; // @synthesize faclPoint=_faclPoint;
@property(copy, nonatomic) NSString *servicePoint; // @synthesize servicePoint=_servicePoint;
@property(copy, nonatomic) NSString *raAtPoint; // @synthesize raAtPoint=_raAtPoint;
@property(copy, nonatomic) NSString *ratPoint; // @synthesize ratPoint=_ratPoint;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

