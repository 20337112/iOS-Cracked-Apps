//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface BookingInfoV64Model : CTBusinessBean <NSCoding>
{
    int hotelCount;
    int tripCount;
    int trafficServiceCount;
    int travelServiceCount;
    _Bool hasPickedHotels;
    NSString *hotelSchema;
    NSString *tripSchema;
    NSString *trafficServiceSchema;
    NSString *travelServiceSchema;
}

@property(copy, nonatomic) NSString *travelServiceSchema; // @synthesize travelServiceSchema;
@property(copy, nonatomic) NSString *trafficServiceSchema; // @synthesize trafficServiceSchema;
@property(copy, nonatomic) NSString *tripSchema; // @synthesize tripSchema;
@property(copy, nonatomic) NSString *hotelSchema; // @synthesize hotelSchema;
@property(nonatomic) _Bool hasPickedHotels; // @synthesize hasPickedHotels;
@property(nonatomic) int travelServiceCount; // @synthesize travelServiceCount;
@property(nonatomic) int trafficServiceCount; // @synthesize trafficServiceCount;
@property(nonatomic) int tripCount; // @synthesize tripCount;
@property(nonatomic) int hotelCount; // @synthesize hotelCount;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

