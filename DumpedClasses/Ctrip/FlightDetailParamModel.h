//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightDetailParamModel : CTBusinessBean
{
    NSString *flightNo;
    int classGrade;
    NSString *subClass;
    int productType;
    NSString *price;
}

@property(copy, nonatomic) NSString *price; // @synthesize price;
@property(nonatomic) int productType; // @synthesize productType;
@property(copy, nonatomic) NSString *subClass; // @synthesize subClass;
@property(nonatomic) int classGrade; // @synthesize classGrade;
@property(copy, nonatomic) NSString *flightNo; // @synthesize flightNo;
- (void).cxx_destruct;
- (id)init;

@end

