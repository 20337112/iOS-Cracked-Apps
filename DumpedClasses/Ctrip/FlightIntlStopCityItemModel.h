//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightIntlStopCityItemModel : CTBusinessBean
{
    NSString *cityName;
    NSString *arriveTime;
    NSString *departTime;
}

@property(copy, nonatomic) NSString *departTime; // @synthesize departTime;
@property(copy, nonatomic) NSString *arriveTime; // @synthesize arriveTime;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

