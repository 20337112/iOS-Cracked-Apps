//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface HotelHomePagePortalRequest : CTBusinessBean
{
    int _bitMap;
    NSMutableArray *_homePageBusinessList;
}

@property(nonatomic) int bitMap; // @synthesize bitMap=_bitMap;
@property(retain, nonatomic) NSMutableArray *homePageBusinessList; // @synthesize homePageBusinessList=_homePageBusinessList;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

