//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface FlightXDescriptionSearchRequest : CTBusinessBean
{
    int sourceType;
    NSMutableArray *keyList;
    int businessType;
}

@property(nonatomic) int businessType; // @synthesize businessType;
@property(retain, nonatomic) NSMutableArray *keyList; // @synthesize keyList;
@property(nonatomic) int sourceType; // @synthesize sourceType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

