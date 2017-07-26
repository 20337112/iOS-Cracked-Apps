//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface DistrictMainResidenceWithGpsResponse : CTBusinessBean <NSCoding>
{
    NSMutableArray *aroundHotResourceList;
    NSString *recommendFlightsTitle;
    NSMutableArray *recommendFlightsList;
    int aroundDistrictsCount;
    NSMutableArray *aroundDistrictsList;
    NSMutableArray *selectedTravelList;
    _Bool hasNewNotify;
}

@property(nonatomic) _Bool hasNewNotify; // @synthesize hasNewNotify;
@property(retain, nonatomic) NSMutableArray *selectedTravelList; // @synthesize selectedTravelList;
@property(retain, nonatomic) NSMutableArray *aroundDistrictsList; // @synthesize aroundDistrictsList;
@property(nonatomic) int aroundDistrictsCount; // @synthesize aroundDistrictsCount;
@property(retain, nonatomic) NSMutableArray *recommendFlightsList; // @synthesize recommendFlightsList;
@property(copy, nonatomic) NSString *recommendFlightsTitle; // @synthesize recommendFlightsTitle;
@property(retain, nonatomic) NSMutableArray *aroundHotResourceList; // @synthesize aroundHotResourceList;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

